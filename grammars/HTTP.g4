grammar HTTP;

/*
 HTTP-message = start‑line ( header‑field  CRLF ) CRLF [ message‑body ]
 */
http_message: start_line (header_field (CRLF | EOF))* (CRLF | EOF)? //message_body
            ;

/*
 start-line = request‑line / status‑line
 */
start_line: request_line;

/*
 request-line = method  OWS  request‑target  OWS  HTTP‑version  CRLF
 */
request_line: method OWS request_target OWS http_version CRLF;

/*
 method = token ; "GET" ; → RFC 7231 – Section 4.3.1 ; "HEAD" ; → RFC 7231 – Section 4.3.2 ; "POST"
 ; → RFC 7231 – Section 4.3.3 ; "PUT" ; → RFC 7231 – Section 4.3.4 ; "DELETE" ; → RFC 7231 – Section
 4.3.5 ; "CONNECT" ; → RFC 7231 – Section 4.3.6 ; "OPTIONS" ; → RFC 7231 – Section 4.3.7 ; "TRACE"
 ; → RFC 7231 – Section 4.3.8
 */
method:
	'GET'
	| 'HEAD'
	| 'POST'
	| 'PUT'
	| 'DELETE'
	| 'CONNECT'
	| 'OPTIONS'
	| 'TRACE';

/*
 request-target = origin-form / absolute-form / authority-form / asterisk-form
 */
request_target: origin_form;

/*
 origin-form = absolute-path  [ "?"  query ]
 */
origin_form: absolute_path (QuestionMark query)?;

/*
 absolute-path = 1*( "/"  segment )
 */
absolute_path: (Slash segment)+;

/*
 segment = pchar
 */
segment: pchar*;

/*
 query = ( pchar /  "/" /  "?" )
 */
query: (pchar | Slash | QuestionMark)*;

/*
 HTTP-version = HTTP-name '/' DIGIT  "."  DIGIT
 */
http_version: http_name OWS? Slash OWS? DIGIT Dot DIGIT;

/*
 HTTP-name = %x48.54.54.50 ; "HTTP", case-sensitive
 */
http_name: 'HTTPS'|'HTTP';


/*
 header-field = field-name  ":"  OWS  field-value  OWS 
 */
header_field: field_name Colon OWS (field_value|OWS)+ OWS*;

/*
 field-name = token
 */
field_name: token;

/*
 token
 */
token: tchar+;
/*
 field-value = ( field-content / obs-fold )
 */
field_value: (field_content | obs_fold)+;

/*
 field-content = field-vchar [ 1*( SP / HTAB )  field-vchar ]
 */
field_content: field_vchar ((OWS)+ field_vchar)?;

/*
 field-vchar = VCHAR / obs-text
 */
field_vchar: vCHAR | obs_text;
/*
 obs-text = %x80-FF
 */
obs_text: OBS_TEXT;
/*
 obs-fold = CRLF  1*( SP / HTAB ) ; see RFC 7230 – Section 3.2.4
 */
obs_fold: CRLF (OWS)+;

/*
 message-body = OCTET
 */
//message_body: OCTET*;


/*
 pchar = unreserved / pct‑encoded / sub‑delims / ":" / "@"
 */
pchar: unreserved | pct_encoded | sub_delims | Colon | At;

/*
 unreserved = ALPHA /  DIGIT /  "-" /  "." /  "_" /  "~"
 */
unreserved: ALPHA | DIGIT | Minus | Dot | Underscore | Tilde;

/*
 ALPHA = %x41‑5A /  %x61‑7A ; A‑Z / a‑z
 */
ALPHA: [A-Za-z];

/*
 DIGIT = %x30‑39 ; 0-9
 */
DIGIT: [0-9];

/*
 pct-encoded = "%"  HEXDIG  HEXDIG
 */
pct_encoded: Percent HEXDIG HEXDIG;

/*
 HEXDIG = DIGIT /  "A" /  "B" /  "C" /  "D" /  "E" /  "F"
 */
HEXDIG: DIGIT | 'A' | 'B' | 'C' | 'D' | 'E' | 'F';

/*
 sub-delims = "!" /  "$" /  "&" /  "'" /  "(" /  ")" /  "*" /  "+" /  "," /  ";" /  "="
 */
sub_delims:
	ExclamationMark
	| DollarSign
	| Ampersand
	| SQuote
	| LColumn
	| RColumn
	| Star
	| Plus
	| Comma
	| SemiColon
	| Equals;

/*
 CRLF = CR  LF ; Internet standard newline
 */
CRLF: ('\r' '\n') | '\n' | '\r';

/*
 tchar = "!" /  "#" /  "$" /  "%" /  "&" /  "'" /  "*" /  "+" /  "-" /  "." /  "^" /  "_" /  "`" / 
 "|" /  "~" /  DIGIT /  ALPHA
 */
tchar:
	  ExclamationMark
	| DollarSign
	| Hashtag
	| Percent
	| Ampersand
	| SQuote
	| DQuote
	| Star
	| Plus
        | Minus
	| Caret
        | Underscore
	| BackQuote
	| VBar
	| Tilde
	| DIGIT
	| ALPHA;

/*
 VCHAR = %x21-7E ; visible (printing) characters
 */
vCHAR: ALPHA | DIGIT
	| Equals
	| Minus
	| DQuote
	| Dot
	| Comma
	| Colon
	| SemiColon
	| QuestionMark
	| Slash
	| LColumn
	| RColumn
	| Plus
	| ExclamationMark
	| Hashtag
	| DollarSign
	| Percent
	| Ampersand
	| SQuote
	| Star
	| LAngle
	| RAngle
	| At
	| LBracket
	| RBracket
	| BSlash
	| Caret
	| Underscore
	| BackQuote
	| LBrace
	| RBrace
	| VBar
	| Tilde;

Minus :'-';
Dot   : '.';
Comma : ',';
Underscore: '_';
Tilde : '~';
QuestionMark :'?';
BSlash :'\\';
Slash :'/';
ExclamationMark: '!';
Colon:':';
LAngle:'<';
RAngle:'>';
LColumn:'(';
RColumn:')';
LBrace:'{';
RBrace:'}';
LBracket:'[';
RBracket:']';
SemiColon:';';
Equals:'=';
At: '@';
DollarSign:'$';
Hashtag:'#';
Ampersand:'&';
Percent:'%';
DQuote:'"';
SQuote:'\'';
Star:'*';
Plus:'+';
Caret:'^';
BackQuote:'`';
VBar:'|';

/*
 OWS = ( SP / HTAB ) ; optional whitespace
 */
OWS: SP | HTAB;

/*
 SP = %x20 ; space
 */
SP: ' ';
/*
 HTAB = %x09 ; horizontal tab
 */
HTAB: '\t';



OBS_TEXT: '\u0080' ..'\u00ff';

/*
 OCTET = %x00-FF ; 8 bits of data
 */
//OCTET: '\u0000' .. '\u001f' | VCHAR | '\u007f' .. '\u00ff' ;