
// Generated from HTTP.g4 by ANTLR 4.9.3


#include "HTTPListener.h"

#include "HTTPParser.h"


using namespace antlrcpp;
using namespace sylvanmats;
using namespace antlr4;

HTTPParser::HTTPParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HTTPParser::~HTTPParser() {
  delete _interpreter;
}

std::string HTTPParser::getGrammarFileName() const {
  return "HTTP.g4";
}

const std::vector<std::string>& HTTPParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HTTPParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Http_messageContext ------------------------------------------------------------------

HTTPParser::Http_messageContext::Http_messageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Start_lineContext* HTTPParser::Http_messageContext::start_line() {
  return getRuleContext<HTTPParser::Start_lineContext>(0);
}

std::vector<HTTPParser::Header_fieldContext *> HTTPParser::Http_messageContext::header_field() {
  return getRuleContexts<HTTPParser::Header_fieldContext>();
}

HTTPParser::Header_fieldContext* HTTPParser::Http_messageContext::header_field(size_t i) {
  return getRuleContext<HTTPParser::Header_fieldContext>(i);
}

std::vector<tree::TerminalNode *> HTTPParser::Http_messageContext::CRLF() {
  return getTokens(HTTPParser::CRLF);
}

tree::TerminalNode* HTTPParser::Http_messageContext::CRLF(size_t i) {
  return getToken(HTTPParser::CRLF, i);
}

std::vector<tree::TerminalNode *> HTTPParser::Http_messageContext::EOF() {
  return getTokens(HTTPParser::EOF);
}

tree::TerminalNode* HTTPParser::Http_messageContext::EOF(size_t i) {
  return getToken(HTTPParser::EOF, i);
}


size_t HTTPParser::Http_messageContext::getRuleIndex() const {
  return HTTPParser::RuleHttp_message;
}

void HTTPParser::Http_messageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHttp_message(this);
}

void HTTPParser::Http_messageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHttp_message(this);
}

HTTPParser::Http_messageContext* HTTPParser::http_message() {
  Http_messageContext *_localctx = _tracker.createInstance<Http_messageContext>(_ctx, getState());
  enterRule(_localctx, 0, HTTPParser::RuleHttp_message);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    start_line();
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::ALPHA)
      | (1ULL << HTTPParser::DIGIT)
      | (1ULL << HTTPParser::Minus)
      | (1ULL << HTTPParser::Underscore)
      | (1ULL << HTTPParser::Tilde)
      | (1ULL << HTTPParser::ExclamationMark)
      | (1ULL << HTTPParser::DollarSign)
      | (1ULL << HTTPParser::Hashtag)
      | (1ULL << HTTPParser::Ampersand)
      | (1ULL << HTTPParser::Percent)
      | (1ULL << HTTPParser::DQuote)
      | (1ULL << HTTPParser::SQuote)
      | (1ULL << HTTPParser::Star)
      | (1ULL << HTTPParser::Plus)
      | (1ULL << HTTPParser::Caret)
      | (1ULL << HTTPParser::BackQuote)
      | (1ULL << HTTPParser::VBar))) != 0)) {
      setState(51);
      header_field();
      setState(52);
      _la = _input->LA(1);
      if (!(_la == HTTPParser::EOF

      || _la == HTTPParser::CRLF)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(60);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(59);
      _la = _input->LA(1);
      if (!(_la == HTTPParser::EOF

      || _la == HTTPParser::CRLF)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Start_lineContext ------------------------------------------------------------------

HTTPParser::Start_lineContext::Start_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Request_lineContext* HTTPParser::Start_lineContext::request_line() {
  return getRuleContext<HTTPParser::Request_lineContext>(0);
}


size_t HTTPParser::Start_lineContext::getRuleIndex() const {
  return HTTPParser::RuleStart_line;
}

void HTTPParser::Start_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart_line(this);
}

void HTTPParser::Start_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart_line(this);
}

HTTPParser::Start_lineContext* HTTPParser::start_line() {
  Start_lineContext *_localctx = _tracker.createInstance<Start_lineContext>(_ctx, getState());
  enterRule(_localctx, 2, HTTPParser::RuleStart_line);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    request_line();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Request_lineContext ------------------------------------------------------------------

HTTPParser::Request_lineContext::Request_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::MethodContext* HTTPParser::Request_lineContext::method() {
  return getRuleContext<HTTPParser::MethodContext>(0);
}

std::vector<tree::TerminalNode *> HTTPParser::Request_lineContext::OWS() {
  return getTokens(HTTPParser::OWS);
}

tree::TerminalNode* HTTPParser::Request_lineContext::OWS(size_t i) {
  return getToken(HTTPParser::OWS, i);
}

HTTPParser::Request_targetContext* HTTPParser::Request_lineContext::request_target() {
  return getRuleContext<HTTPParser::Request_targetContext>(0);
}

HTTPParser::Http_versionContext* HTTPParser::Request_lineContext::http_version() {
  return getRuleContext<HTTPParser::Http_versionContext>(0);
}

tree::TerminalNode* HTTPParser::Request_lineContext::CRLF() {
  return getToken(HTTPParser::CRLF, 0);
}


size_t HTTPParser::Request_lineContext::getRuleIndex() const {
  return HTTPParser::RuleRequest_line;
}

void HTTPParser::Request_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequest_line(this);
}

void HTTPParser::Request_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequest_line(this);
}

HTTPParser::Request_lineContext* HTTPParser::request_line() {
  Request_lineContext *_localctx = _tracker.createInstance<Request_lineContext>(_ctx, getState());
  enterRule(_localctx, 4, HTTPParser::RuleRequest_line);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    method();
    setState(65);
    match(HTTPParser::OWS);
    setState(66);
    request_target();
    setState(67);
    match(HTTPParser::OWS);
    setState(68);
    http_version();
    setState(69);
    match(HTTPParser::CRLF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodContext ------------------------------------------------------------------

HTTPParser::MethodContext::MethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::MethodContext::getRuleIndex() const {
  return HTTPParser::RuleMethod;
}

void HTTPParser::MethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod(this);
}

void HTTPParser::MethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod(this);
}

HTTPParser::MethodContext* HTTPParser::method() {
  MethodContext *_localctx = _tracker.createInstance<MethodContext>(_ctx, getState());
  enterRule(_localctx, 6, HTTPParser::RuleMethod);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::T__0)
      | (1ULL << HTTPParser::T__1)
      | (1ULL << HTTPParser::T__2)
      | (1ULL << HTTPParser::T__3)
      | (1ULL << HTTPParser::T__4)
      | (1ULL << HTTPParser::T__5)
      | (1ULL << HTTPParser::T__6)
      | (1ULL << HTTPParser::T__7))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Request_targetContext ------------------------------------------------------------------

HTTPParser::Request_targetContext::Request_targetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Origin_formContext* HTTPParser::Request_targetContext::origin_form() {
  return getRuleContext<HTTPParser::Origin_formContext>(0);
}


size_t HTTPParser::Request_targetContext::getRuleIndex() const {
  return HTTPParser::RuleRequest_target;
}

void HTTPParser::Request_targetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequest_target(this);
}

void HTTPParser::Request_targetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequest_target(this);
}

HTTPParser::Request_targetContext* HTTPParser::request_target() {
  Request_targetContext *_localctx = _tracker.createInstance<Request_targetContext>(_ctx, getState());
  enterRule(_localctx, 8, HTTPParser::RuleRequest_target);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    origin_form();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Origin_formContext ------------------------------------------------------------------

HTTPParser::Origin_formContext::Origin_formContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Absolute_pathContext* HTTPParser::Origin_formContext::absolute_path() {
  return getRuleContext<HTTPParser::Absolute_pathContext>(0);
}

tree::TerminalNode* HTTPParser::Origin_formContext::QuestionMark() {
  return getToken(HTTPParser::QuestionMark, 0);
}

HTTPParser::QueryContext* HTTPParser::Origin_formContext::query() {
  return getRuleContext<HTTPParser::QueryContext>(0);
}


size_t HTTPParser::Origin_formContext::getRuleIndex() const {
  return HTTPParser::RuleOrigin_form;
}

void HTTPParser::Origin_formContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrigin_form(this);
}

void HTTPParser::Origin_formContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrigin_form(this);
}

HTTPParser::Origin_formContext* HTTPParser::origin_form() {
  Origin_formContext *_localctx = _tracker.createInstance<Origin_formContext>(_ctx, getState());
  enterRule(_localctx, 10, HTTPParser::RuleOrigin_form);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    absolute_path();
    setState(78);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HTTPParser::QuestionMark) {
      setState(76);
      match(HTTPParser::QuestionMark);
      setState(77);
      query();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Absolute_pathContext ------------------------------------------------------------------

HTTPParser::Absolute_pathContext::Absolute_pathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HTTPParser::Absolute_pathContext::Slash() {
  return getTokens(HTTPParser::Slash);
}

tree::TerminalNode* HTTPParser::Absolute_pathContext::Slash(size_t i) {
  return getToken(HTTPParser::Slash, i);
}

std::vector<HTTPParser::SegmentContext *> HTTPParser::Absolute_pathContext::segment() {
  return getRuleContexts<HTTPParser::SegmentContext>();
}

HTTPParser::SegmentContext* HTTPParser::Absolute_pathContext::segment(size_t i) {
  return getRuleContext<HTTPParser::SegmentContext>(i);
}


size_t HTTPParser::Absolute_pathContext::getRuleIndex() const {
  return HTTPParser::RuleAbsolute_path;
}

void HTTPParser::Absolute_pathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbsolute_path(this);
}

void HTTPParser::Absolute_pathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbsolute_path(this);
}

HTTPParser::Absolute_pathContext* HTTPParser::absolute_path() {
  Absolute_pathContext *_localctx = _tracker.createInstance<Absolute_pathContext>(_ctx, getState());
  enterRule(_localctx, 12, HTTPParser::RuleAbsolute_path);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(80);
      match(HTTPParser::Slash);
      setState(81);
      segment();
      setState(84); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HTTPParser::Slash);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SegmentContext ------------------------------------------------------------------

HTTPParser::SegmentContext::SegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::PcharContext *> HTTPParser::SegmentContext::pchar() {
  return getRuleContexts<HTTPParser::PcharContext>();
}

HTTPParser::PcharContext* HTTPParser::SegmentContext::pchar(size_t i) {
  return getRuleContext<HTTPParser::PcharContext>(i);
}


size_t HTTPParser::SegmentContext::getRuleIndex() const {
  return HTTPParser::RuleSegment;
}

void HTTPParser::SegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSegment(this);
}

void HTTPParser::SegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSegment(this);
}

HTTPParser::SegmentContext* HTTPParser::segment() {
  SegmentContext *_localctx = _tracker.createInstance<SegmentContext>(_ctx, getState());
  enterRule(_localctx, 14, HTTPParser::RuleSegment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::ALPHA)
      | (1ULL << HTTPParser::DIGIT)
      | (1ULL << HTTPParser::Minus)
      | (1ULL << HTTPParser::Dot)
      | (1ULL << HTTPParser::Comma)
      | (1ULL << HTTPParser::Underscore)
      | (1ULL << HTTPParser::Tilde)
      | (1ULL << HTTPParser::ExclamationMark)
      | (1ULL << HTTPParser::Colon)
      | (1ULL << HTTPParser::LColumn)
      | (1ULL << HTTPParser::RColumn)
      | (1ULL << HTTPParser::SemiColon)
      | (1ULL << HTTPParser::Equals)
      | (1ULL << HTTPParser::At)
      | (1ULL << HTTPParser::DollarSign)
      | (1ULL << HTTPParser::Ampersand)
      | (1ULL << HTTPParser::Percent)
      | (1ULL << HTTPParser::SQuote)
      | (1ULL << HTTPParser::Star)
      | (1ULL << HTTPParser::Plus))) != 0)) {
      setState(86);
      pchar();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryContext ------------------------------------------------------------------

HTTPParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::PcharContext *> HTTPParser::QueryContext::pchar() {
  return getRuleContexts<HTTPParser::PcharContext>();
}

HTTPParser::PcharContext* HTTPParser::QueryContext::pchar(size_t i) {
  return getRuleContext<HTTPParser::PcharContext>(i);
}

std::vector<tree::TerminalNode *> HTTPParser::QueryContext::Slash() {
  return getTokens(HTTPParser::Slash);
}

tree::TerminalNode* HTTPParser::QueryContext::Slash(size_t i) {
  return getToken(HTTPParser::Slash, i);
}

std::vector<tree::TerminalNode *> HTTPParser::QueryContext::QuestionMark() {
  return getTokens(HTTPParser::QuestionMark);
}

tree::TerminalNode* HTTPParser::QueryContext::QuestionMark(size_t i) {
  return getToken(HTTPParser::QuestionMark, i);
}


size_t HTTPParser::QueryContext::getRuleIndex() const {
  return HTTPParser::RuleQuery;
}

void HTTPParser::QueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery(this);
}

void HTTPParser::QueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery(this);
}

HTTPParser::QueryContext* HTTPParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 16, HTTPParser::RuleQuery);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::ALPHA)
      | (1ULL << HTTPParser::DIGIT)
      | (1ULL << HTTPParser::Minus)
      | (1ULL << HTTPParser::Dot)
      | (1ULL << HTTPParser::Comma)
      | (1ULL << HTTPParser::Underscore)
      | (1ULL << HTTPParser::Tilde)
      | (1ULL << HTTPParser::QuestionMark)
      | (1ULL << HTTPParser::Slash)
      | (1ULL << HTTPParser::ExclamationMark)
      | (1ULL << HTTPParser::Colon)
      | (1ULL << HTTPParser::LColumn)
      | (1ULL << HTTPParser::RColumn)
      | (1ULL << HTTPParser::SemiColon)
      | (1ULL << HTTPParser::Equals)
      | (1ULL << HTTPParser::At)
      | (1ULL << HTTPParser::DollarSign)
      | (1ULL << HTTPParser::Ampersand)
      | (1ULL << HTTPParser::Percent)
      | (1ULL << HTTPParser::SQuote)
      | (1ULL << HTTPParser::Star)
      | (1ULL << HTTPParser::Plus))) != 0)) {
      setState(95);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HTTPParser::ALPHA:
        case HTTPParser::DIGIT:
        case HTTPParser::Minus:
        case HTTPParser::Dot:
        case HTTPParser::Comma:
        case HTTPParser::Underscore:
        case HTTPParser::Tilde:
        case HTTPParser::ExclamationMark:
        case HTTPParser::Colon:
        case HTTPParser::LColumn:
        case HTTPParser::RColumn:
        case HTTPParser::SemiColon:
        case HTTPParser::Equals:
        case HTTPParser::At:
        case HTTPParser::DollarSign:
        case HTTPParser::Ampersand:
        case HTTPParser::Percent:
        case HTTPParser::SQuote:
        case HTTPParser::Star:
        case HTTPParser::Plus: {
          setState(92);
          pchar();
          break;
        }

        case HTTPParser::Slash: {
          setState(93);
          match(HTTPParser::Slash);
          break;
        }

        case HTTPParser::QuestionMark: {
          setState(94);
          match(HTTPParser::QuestionMark);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Http_versionContext ------------------------------------------------------------------

HTTPParser::Http_versionContext::Http_versionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Http_nameContext* HTTPParser::Http_versionContext::http_name() {
  return getRuleContext<HTTPParser::Http_nameContext>(0);
}

tree::TerminalNode* HTTPParser::Http_versionContext::Slash() {
  return getToken(HTTPParser::Slash, 0);
}

std::vector<tree::TerminalNode *> HTTPParser::Http_versionContext::DIGIT() {
  return getTokens(HTTPParser::DIGIT);
}

tree::TerminalNode* HTTPParser::Http_versionContext::DIGIT(size_t i) {
  return getToken(HTTPParser::DIGIT, i);
}

tree::TerminalNode* HTTPParser::Http_versionContext::Dot() {
  return getToken(HTTPParser::Dot, 0);
}

std::vector<tree::TerminalNode *> HTTPParser::Http_versionContext::OWS() {
  return getTokens(HTTPParser::OWS);
}

tree::TerminalNode* HTTPParser::Http_versionContext::OWS(size_t i) {
  return getToken(HTTPParser::OWS, i);
}


size_t HTTPParser::Http_versionContext::getRuleIndex() const {
  return HTTPParser::RuleHttp_version;
}

void HTTPParser::Http_versionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHttp_version(this);
}

void HTTPParser::Http_versionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHttp_version(this);
}

HTTPParser::Http_versionContext* HTTPParser::http_version() {
  Http_versionContext *_localctx = _tracker.createInstance<Http_versionContext>(_ctx, getState());
  enterRule(_localctx, 18, HTTPParser::RuleHttp_version);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    http_name();
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HTTPParser::OWS) {
      setState(101);
      match(HTTPParser::OWS);
    }
    setState(104);
    match(HTTPParser::Slash);
    setState(106);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HTTPParser::OWS) {
      setState(105);
      match(HTTPParser::OWS);
    }
    setState(108);
    match(HTTPParser::DIGIT);
    setState(109);
    match(HTTPParser::Dot);
    setState(110);
    match(HTTPParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Http_nameContext ------------------------------------------------------------------

HTTPParser::Http_nameContext::Http_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HTTPParser::Http_nameContext::getRuleIndex() const {
  return HTTPParser::RuleHttp_name;
}

void HTTPParser::Http_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHttp_name(this);
}

void HTTPParser::Http_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHttp_name(this);
}

HTTPParser::Http_nameContext* HTTPParser::http_name() {
  Http_nameContext *_localctx = _tracker.createInstance<Http_nameContext>(_ctx, getState());
  enterRule(_localctx, 20, HTTPParser::RuleHttp_name);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    _la = _input->LA(1);
    if (!(_la == HTTPParser::T__8

    || _la == HTTPParser::T__9)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Header_fieldContext ------------------------------------------------------------------

HTTPParser::Header_fieldContext::Header_fieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::Field_nameContext* HTTPParser::Header_fieldContext::field_name() {
  return getRuleContext<HTTPParser::Field_nameContext>(0);
}

tree::TerminalNode* HTTPParser::Header_fieldContext::Colon() {
  return getToken(HTTPParser::Colon, 0);
}

std::vector<tree::TerminalNode *> HTTPParser::Header_fieldContext::OWS() {
  return getTokens(HTTPParser::OWS);
}

tree::TerminalNode* HTTPParser::Header_fieldContext::OWS(size_t i) {
  return getToken(HTTPParser::OWS, i);
}

std::vector<HTTPParser::Field_valueContext *> HTTPParser::Header_fieldContext::field_value() {
  return getRuleContexts<HTTPParser::Field_valueContext>();
}

HTTPParser::Field_valueContext* HTTPParser::Header_fieldContext::field_value(size_t i) {
  return getRuleContext<HTTPParser::Field_valueContext>(i);
}


size_t HTTPParser::Header_fieldContext::getRuleIndex() const {
  return HTTPParser::RuleHeader_field;
}

void HTTPParser::Header_fieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader_field(this);
}

void HTTPParser::Header_fieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader_field(this);
}

HTTPParser::Header_fieldContext* HTTPParser::header_field() {
  Header_fieldContext *_localctx = _tracker.createInstance<Header_fieldContext>(_ctx, getState());
  enterRule(_localctx, 22, HTTPParser::RuleHeader_field);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(114);
    field_name();
    setState(115);
    match(HTTPParser::Colon);
    setState(116);
    match(HTTPParser::OWS);
    setState(119); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(119);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case HTTPParser::ALPHA:
                case HTTPParser::DIGIT:
                case HTTPParser::CRLF:
                case HTTPParser::Minus:
                case HTTPParser::Dot:
                case HTTPParser::Comma:
                case HTTPParser::Underscore:
                case HTTPParser::Tilde:
                case HTTPParser::QuestionMark:
                case HTTPParser::BSlash:
                case HTTPParser::Slash:
                case HTTPParser::ExclamationMark:
                case HTTPParser::Colon:
                case HTTPParser::LAngle:
                case HTTPParser::RAngle:
                case HTTPParser::LColumn:
                case HTTPParser::RColumn:
                case HTTPParser::LBrace:
                case HTTPParser::RBrace:
                case HTTPParser::LBracket:
                case HTTPParser::RBracket:
                case HTTPParser::SemiColon:
                case HTTPParser::Equals:
                case HTTPParser::At:
                case HTTPParser::DollarSign:
                case HTTPParser::Hashtag:
                case HTTPParser::Ampersand:
                case HTTPParser::Percent:
                case HTTPParser::DQuote:
                case HTTPParser::SQuote:
                case HTTPParser::Star:
                case HTTPParser::Plus:
                case HTTPParser::Caret:
                case HTTPParser::BackQuote:
                case HTTPParser::VBar:
                case HTTPParser::OBS_TEXT: {
                  setState(117);
                  field_value();
                  break;
                }

                case HTTPParser::OWS: {
                  setState(118);
                  match(HTTPParser::OWS);
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(121); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HTTPParser::OWS) {
      setState(123);
      match(HTTPParser::OWS);
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_nameContext ------------------------------------------------------------------

HTTPParser::Field_nameContext::Field_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::TokenContext* HTTPParser::Field_nameContext::token() {
  return getRuleContext<HTTPParser::TokenContext>(0);
}


size_t HTTPParser::Field_nameContext::getRuleIndex() const {
  return HTTPParser::RuleField_name;
}

void HTTPParser::Field_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_name(this);
}

void HTTPParser::Field_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_name(this);
}

HTTPParser::Field_nameContext* HTTPParser::field_name() {
  Field_nameContext *_localctx = _tracker.createInstance<Field_nameContext>(_ctx, getState());
  enterRule(_localctx, 24, HTTPParser::RuleField_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    token();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TokenContext ------------------------------------------------------------------

HTTPParser::TokenContext::TokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::TcharContext *> HTTPParser::TokenContext::tchar() {
  return getRuleContexts<HTTPParser::TcharContext>();
}

HTTPParser::TcharContext* HTTPParser::TokenContext::tchar(size_t i) {
  return getRuleContext<HTTPParser::TcharContext>(i);
}


size_t HTTPParser::TokenContext::getRuleIndex() const {
  return HTTPParser::RuleToken;
}

void HTTPParser::TokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToken(this);
}

void HTTPParser::TokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToken(this);
}

HTTPParser::TokenContext* HTTPParser::token() {
  TokenContext *_localctx = _tracker.createInstance<TokenContext>(_ctx, getState());
  enterRule(_localctx, 26, HTTPParser::RuleToken);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(131);
      tchar();
      setState(134); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::ALPHA)
      | (1ULL << HTTPParser::DIGIT)
      | (1ULL << HTTPParser::Minus)
      | (1ULL << HTTPParser::Underscore)
      | (1ULL << HTTPParser::Tilde)
      | (1ULL << HTTPParser::ExclamationMark)
      | (1ULL << HTTPParser::DollarSign)
      | (1ULL << HTTPParser::Hashtag)
      | (1ULL << HTTPParser::Ampersand)
      | (1ULL << HTTPParser::Percent)
      | (1ULL << HTTPParser::DQuote)
      | (1ULL << HTTPParser::SQuote)
      | (1ULL << HTTPParser::Star)
      | (1ULL << HTTPParser::Plus)
      | (1ULL << HTTPParser::Caret)
      | (1ULL << HTTPParser::BackQuote)
      | (1ULL << HTTPParser::VBar))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_valueContext ------------------------------------------------------------------

HTTPParser::Field_valueContext::Field_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Field_contentContext *> HTTPParser::Field_valueContext::field_content() {
  return getRuleContexts<HTTPParser::Field_contentContext>();
}

HTTPParser::Field_contentContext* HTTPParser::Field_valueContext::field_content(size_t i) {
  return getRuleContext<HTTPParser::Field_contentContext>(i);
}

std::vector<HTTPParser::Obs_foldContext *> HTTPParser::Field_valueContext::obs_fold() {
  return getRuleContexts<HTTPParser::Obs_foldContext>();
}

HTTPParser::Obs_foldContext* HTTPParser::Field_valueContext::obs_fold(size_t i) {
  return getRuleContext<HTTPParser::Obs_foldContext>(i);
}


size_t HTTPParser::Field_valueContext::getRuleIndex() const {
  return HTTPParser::RuleField_value;
}

void HTTPParser::Field_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_value(this);
}

void HTTPParser::Field_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_value(this);
}

HTTPParser::Field_valueContext* HTTPParser::field_value() {
  Field_valueContext *_localctx = _tracker.createInstance<Field_valueContext>(_ctx, getState());
  enterRule(_localctx, 28, HTTPParser::RuleField_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(138); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(138);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case HTTPParser::ALPHA:
                case HTTPParser::DIGIT:
                case HTTPParser::Minus:
                case HTTPParser::Dot:
                case HTTPParser::Comma:
                case HTTPParser::Underscore:
                case HTTPParser::Tilde:
                case HTTPParser::QuestionMark:
                case HTTPParser::BSlash:
                case HTTPParser::Slash:
                case HTTPParser::ExclamationMark:
                case HTTPParser::Colon:
                case HTTPParser::LAngle:
                case HTTPParser::RAngle:
                case HTTPParser::LColumn:
                case HTTPParser::RColumn:
                case HTTPParser::LBrace:
                case HTTPParser::RBrace:
                case HTTPParser::LBracket:
                case HTTPParser::RBracket:
                case HTTPParser::SemiColon:
                case HTTPParser::Equals:
                case HTTPParser::At:
                case HTTPParser::DollarSign:
                case HTTPParser::Hashtag:
                case HTTPParser::Ampersand:
                case HTTPParser::Percent:
                case HTTPParser::DQuote:
                case HTTPParser::SQuote:
                case HTTPParser::Star:
                case HTTPParser::Plus:
                case HTTPParser::Caret:
                case HTTPParser::BackQuote:
                case HTTPParser::VBar:
                case HTTPParser::OBS_TEXT: {
                  setState(136);
                  field_content();
                  break;
                }

                case HTTPParser::CRLF: {
                  setState(137);
                  obs_fold();
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(140); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_contentContext ------------------------------------------------------------------

HTTPParser::Field_contentContext::Field_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HTTPParser::Field_vcharContext *> HTTPParser::Field_contentContext::field_vchar() {
  return getRuleContexts<HTTPParser::Field_vcharContext>();
}

HTTPParser::Field_vcharContext* HTTPParser::Field_contentContext::field_vchar(size_t i) {
  return getRuleContext<HTTPParser::Field_vcharContext>(i);
}

std::vector<tree::TerminalNode *> HTTPParser::Field_contentContext::OWS() {
  return getTokens(HTTPParser::OWS);
}

tree::TerminalNode* HTTPParser::Field_contentContext::OWS(size_t i) {
  return getToken(HTTPParser::OWS, i);
}


size_t HTTPParser::Field_contentContext::getRuleIndex() const {
  return HTTPParser::RuleField_content;
}

void HTTPParser::Field_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_content(this);
}

void HTTPParser::Field_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_content(this);
}

HTTPParser::Field_contentContext* HTTPParser::field_content() {
  Field_contentContext *_localctx = _tracker.createInstance<Field_contentContext>(_ctx, getState());
  enterRule(_localctx, 30, HTTPParser::RuleField_content);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    field_vchar();
    setState(149);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(144); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(143);
        match(HTTPParser::OWS);
        setState(146); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == HTTPParser::OWS);
      setState(148);
      field_vchar();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_vcharContext ------------------------------------------------------------------

HTTPParser::Field_vcharContext::Field_vcharContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::VCHARContext* HTTPParser::Field_vcharContext::vCHAR() {
  return getRuleContext<HTTPParser::VCHARContext>(0);
}

HTTPParser::Obs_textContext* HTTPParser::Field_vcharContext::obs_text() {
  return getRuleContext<HTTPParser::Obs_textContext>(0);
}


size_t HTTPParser::Field_vcharContext::getRuleIndex() const {
  return HTTPParser::RuleField_vchar;
}

void HTTPParser::Field_vcharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_vchar(this);
}

void HTTPParser::Field_vcharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_vchar(this);
}

HTTPParser::Field_vcharContext* HTTPParser::field_vchar() {
  Field_vcharContext *_localctx = _tracker.createInstance<Field_vcharContext>(_ctx, getState());
  enterRule(_localctx, 32, HTTPParser::RuleField_vchar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(153);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::ALPHA:
      case HTTPParser::DIGIT:
      case HTTPParser::Minus:
      case HTTPParser::Dot:
      case HTTPParser::Comma:
      case HTTPParser::Underscore:
      case HTTPParser::Tilde:
      case HTTPParser::QuestionMark:
      case HTTPParser::BSlash:
      case HTTPParser::Slash:
      case HTTPParser::ExclamationMark:
      case HTTPParser::Colon:
      case HTTPParser::LAngle:
      case HTTPParser::RAngle:
      case HTTPParser::LColumn:
      case HTTPParser::RColumn:
      case HTTPParser::LBrace:
      case HTTPParser::RBrace:
      case HTTPParser::LBracket:
      case HTTPParser::RBracket:
      case HTTPParser::SemiColon:
      case HTTPParser::Equals:
      case HTTPParser::At:
      case HTTPParser::DollarSign:
      case HTTPParser::Hashtag:
      case HTTPParser::Ampersand:
      case HTTPParser::Percent:
      case HTTPParser::DQuote:
      case HTTPParser::SQuote:
      case HTTPParser::Star:
      case HTTPParser::Plus:
      case HTTPParser::Caret:
      case HTTPParser::BackQuote:
      case HTTPParser::VBar: {
        enterOuterAlt(_localctx, 1);
        setState(151);
        vCHAR();
        break;
      }

      case HTTPParser::OBS_TEXT: {
        enterOuterAlt(_localctx, 2);
        setState(152);
        obs_text();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Obs_textContext ------------------------------------------------------------------

HTTPParser::Obs_textContext::Obs_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Obs_textContext::OBS_TEXT() {
  return getToken(HTTPParser::OBS_TEXT, 0);
}


size_t HTTPParser::Obs_textContext::getRuleIndex() const {
  return HTTPParser::RuleObs_text;
}

void HTTPParser::Obs_textContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObs_text(this);
}

void HTTPParser::Obs_textContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObs_text(this);
}

HTTPParser::Obs_textContext* HTTPParser::obs_text() {
  Obs_textContext *_localctx = _tracker.createInstance<Obs_textContext>(_ctx, getState());
  enterRule(_localctx, 34, HTTPParser::RuleObs_text);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(HTTPParser::OBS_TEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Obs_foldContext ------------------------------------------------------------------

HTTPParser::Obs_foldContext::Obs_foldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Obs_foldContext::CRLF() {
  return getToken(HTTPParser::CRLF, 0);
}

std::vector<tree::TerminalNode *> HTTPParser::Obs_foldContext::OWS() {
  return getTokens(HTTPParser::OWS);
}

tree::TerminalNode* HTTPParser::Obs_foldContext::OWS(size_t i) {
  return getToken(HTTPParser::OWS, i);
}


size_t HTTPParser::Obs_foldContext::getRuleIndex() const {
  return HTTPParser::RuleObs_fold;
}

void HTTPParser::Obs_foldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObs_fold(this);
}

void HTTPParser::Obs_foldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObs_fold(this);
}

HTTPParser::Obs_foldContext* HTTPParser::obs_fold() {
  Obs_foldContext *_localctx = _tracker.createInstance<Obs_foldContext>(_ctx, getState());
  enterRule(_localctx, 36, HTTPParser::RuleObs_fold);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(HTTPParser::CRLF);
    setState(159); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(158);
              match(HTTPParser::OWS);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(161); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PcharContext ------------------------------------------------------------------

HTTPParser::PcharContext::PcharContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HTTPParser::UnreservedContext* HTTPParser::PcharContext::unreserved() {
  return getRuleContext<HTTPParser::UnreservedContext>(0);
}

HTTPParser::Pct_encodedContext* HTTPParser::PcharContext::pct_encoded() {
  return getRuleContext<HTTPParser::Pct_encodedContext>(0);
}

HTTPParser::Sub_delimsContext* HTTPParser::PcharContext::sub_delims() {
  return getRuleContext<HTTPParser::Sub_delimsContext>(0);
}

tree::TerminalNode* HTTPParser::PcharContext::Colon() {
  return getToken(HTTPParser::Colon, 0);
}

tree::TerminalNode* HTTPParser::PcharContext::At() {
  return getToken(HTTPParser::At, 0);
}


size_t HTTPParser::PcharContext::getRuleIndex() const {
  return HTTPParser::RulePchar;
}

void HTTPParser::PcharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPchar(this);
}

void HTTPParser::PcharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPchar(this);
}

HTTPParser::PcharContext* HTTPParser::pchar() {
  PcharContext *_localctx = _tracker.createInstance<PcharContext>(_ctx, getState());
  enterRule(_localctx, 38, HTTPParser::RulePchar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(168);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HTTPParser::ALPHA:
      case HTTPParser::DIGIT:
      case HTTPParser::Minus:
      case HTTPParser::Dot:
      case HTTPParser::Underscore:
      case HTTPParser::Tilde: {
        enterOuterAlt(_localctx, 1);
        setState(163);
        unreserved();
        break;
      }

      case HTTPParser::Percent: {
        enterOuterAlt(_localctx, 2);
        setState(164);
        pct_encoded();
        break;
      }

      case HTTPParser::Comma:
      case HTTPParser::ExclamationMark:
      case HTTPParser::LColumn:
      case HTTPParser::RColumn:
      case HTTPParser::SemiColon:
      case HTTPParser::Equals:
      case HTTPParser::DollarSign:
      case HTTPParser::Ampersand:
      case HTTPParser::SQuote:
      case HTTPParser::Star:
      case HTTPParser::Plus: {
        enterOuterAlt(_localctx, 3);
        setState(165);
        sub_delims();
        break;
      }

      case HTTPParser::Colon: {
        enterOuterAlt(_localctx, 4);
        setState(166);
        match(HTTPParser::Colon);
        break;
      }

      case HTTPParser::At: {
        enterOuterAlt(_localctx, 5);
        setState(167);
        match(HTTPParser::At);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnreservedContext ------------------------------------------------------------------

HTTPParser::UnreservedContext::UnreservedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::UnreservedContext::ALPHA() {
  return getToken(HTTPParser::ALPHA, 0);
}

tree::TerminalNode* HTTPParser::UnreservedContext::DIGIT() {
  return getToken(HTTPParser::DIGIT, 0);
}

tree::TerminalNode* HTTPParser::UnreservedContext::Minus() {
  return getToken(HTTPParser::Minus, 0);
}

tree::TerminalNode* HTTPParser::UnreservedContext::Dot() {
  return getToken(HTTPParser::Dot, 0);
}

tree::TerminalNode* HTTPParser::UnreservedContext::Underscore() {
  return getToken(HTTPParser::Underscore, 0);
}

tree::TerminalNode* HTTPParser::UnreservedContext::Tilde() {
  return getToken(HTTPParser::Tilde, 0);
}


size_t HTTPParser::UnreservedContext::getRuleIndex() const {
  return HTTPParser::RuleUnreserved;
}

void HTTPParser::UnreservedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnreserved(this);
}

void HTTPParser::UnreservedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnreserved(this);
}

HTTPParser::UnreservedContext* HTTPParser::unreserved() {
  UnreservedContext *_localctx = _tracker.createInstance<UnreservedContext>(_ctx, getState());
  enterRule(_localctx, 40, HTTPParser::RuleUnreserved);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::ALPHA)
      | (1ULL << HTTPParser::DIGIT)
      | (1ULL << HTTPParser::Minus)
      | (1ULL << HTTPParser::Dot)
      | (1ULL << HTTPParser::Underscore)
      | (1ULL << HTTPParser::Tilde))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pct_encodedContext ------------------------------------------------------------------

HTTPParser::Pct_encodedContext::Pct_encodedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Pct_encodedContext::Percent() {
  return getToken(HTTPParser::Percent, 0);
}

std::vector<tree::TerminalNode *> HTTPParser::Pct_encodedContext::HEXDIG() {
  return getTokens(HTTPParser::HEXDIG);
}

tree::TerminalNode* HTTPParser::Pct_encodedContext::HEXDIG(size_t i) {
  return getToken(HTTPParser::HEXDIG, i);
}


size_t HTTPParser::Pct_encodedContext::getRuleIndex() const {
  return HTTPParser::RulePct_encoded;
}

void HTTPParser::Pct_encodedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPct_encoded(this);
}

void HTTPParser::Pct_encodedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPct_encoded(this);
}

HTTPParser::Pct_encodedContext* HTTPParser::pct_encoded() {
  Pct_encodedContext *_localctx = _tracker.createInstance<Pct_encodedContext>(_ctx, getState());
  enterRule(_localctx, 42, HTTPParser::RulePct_encoded);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    match(HTTPParser::Percent);
    setState(173);
    match(HTTPParser::HEXDIG);
    setState(174);
    match(HTTPParser::HEXDIG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sub_delimsContext ------------------------------------------------------------------

HTTPParser::Sub_delimsContext::Sub_delimsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::Sub_delimsContext::ExclamationMark() {
  return getToken(HTTPParser::ExclamationMark, 0);
}

tree::TerminalNode* HTTPParser::Sub_delimsContext::DollarSign() {
  return getToken(HTTPParser::DollarSign, 0);
}

tree::TerminalNode* HTTPParser::Sub_delimsContext::Ampersand() {
  return getToken(HTTPParser::Ampersand, 0);
}

tree::TerminalNode* HTTPParser::Sub_delimsContext::SQuote() {
  return getToken(HTTPParser::SQuote, 0);
}

tree::TerminalNode* HTTPParser::Sub_delimsContext::LColumn() {
  return getToken(HTTPParser::LColumn, 0);
}

tree::TerminalNode* HTTPParser::Sub_delimsContext::RColumn() {
  return getToken(HTTPParser::RColumn, 0);
}

tree::TerminalNode* HTTPParser::Sub_delimsContext::Star() {
  return getToken(HTTPParser::Star, 0);
}

tree::TerminalNode* HTTPParser::Sub_delimsContext::Plus() {
  return getToken(HTTPParser::Plus, 0);
}

tree::TerminalNode* HTTPParser::Sub_delimsContext::Comma() {
  return getToken(HTTPParser::Comma, 0);
}

tree::TerminalNode* HTTPParser::Sub_delimsContext::SemiColon() {
  return getToken(HTTPParser::SemiColon, 0);
}

tree::TerminalNode* HTTPParser::Sub_delimsContext::Equals() {
  return getToken(HTTPParser::Equals, 0);
}


size_t HTTPParser::Sub_delimsContext::getRuleIndex() const {
  return HTTPParser::RuleSub_delims;
}

void HTTPParser::Sub_delimsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub_delims(this);
}

void HTTPParser::Sub_delimsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub_delims(this);
}

HTTPParser::Sub_delimsContext* HTTPParser::sub_delims() {
  Sub_delimsContext *_localctx = _tracker.createInstance<Sub_delimsContext>(_ctx, getState());
  enterRule(_localctx, 44, HTTPParser::RuleSub_delims);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::Comma)
      | (1ULL << HTTPParser::ExclamationMark)
      | (1ULL << HTTPParser::LColumn)
      | (1ULL << HTTPParser::RColumn)
      | (1ULL << HTTPParser::SemiColon)
      | (1ULL << HTTPParser::Equals)
      | (1ULL << HTTPParser::DollarSign)
      | (1ULL << HTTPParser::Ampersand)
      | (1ULL << HTTPParser::SQuote)
      | (1ULL << HTTPParser::Star)
      | (1ULL << HTTPParser::Plus))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TcharContext ------------------------------------------------------------------

HTTPParser::TcharContext::TcharContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::TcharContext::ExclamationMark() {
  return getToken(HTTPParser::ExclamationMark, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::DollarSign() {
  return getToken(HTTPParser::DollarSign, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::Hashtag() {
  return getToken(HTTPParser::Hashtag, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::Percent() {
  return getToken(HTTPParser::Percent, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::Ampersand() {
  return getToken(HTTPParser::Ampersand, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::SQuote() {
  return getToken(HTTPParser::SQuote, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::DQuote() {
  return getToken(HTTPParser::DQuote, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::Star() {
  return getToken(HTTPParser::Star, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::Plus() {
  return getToken(HTTPParser::Plus, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::Minus() {
  return getToken(HTTPParser::Minus, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::Caret() {
  return getToken(HTTPParser::Caret, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::Underscore() {
  return getToken(HTTPParser::Underscore, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::BackQuote() {
  return getToken(HTTPParser::BackQuote, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::VBar() {
  return getToken(HTTPParser::VBar, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::Tilde() {
  return getToken(HTTPParser::Tilde, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::DIGIT() {
  return getToken(HTTPParser::DIGIT, 0);
}

tree::TerminalNode* HTTPParser::TcharContext::ALPHA() {
  return getToken(HTTPParser::ALPHA, 0);
}


size_t HTTPParser::TcharContext::getRuleIndex() const {
  return HTTPParser::RuleTchar;
}

void HTTPParser::TcharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTchar(this);
}

void HTTPParser::TcharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTchar(this);
}

HTTPParser::TcharContext* HTTPParser::tchar() {
  TcharContext *_localctx = _tracker.createInstance<TcharContext>(_ctx, getState());
  enterRule(_localctx, 46, HTTPParser::RuleTchar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::ALPHA)
      | (1ULL << HTTPParser::DIGIT)
      | (1ULL << HTTPParser::Minus)
      | (1ULL << HTTPParser::Underscore)
      | (1ULL << HTTPParser::Tilde)
      | (1ULL << HTTPParser::ExclamationMark)
      | (1ULL << HTTPParser::DollarSign)
      | (1ULL << HTTPParser::Hashtag)
      | (1ULL << HTTPParser::Ampersand)
      | (1ULL << HTTPParser::Percent)
      | (1ULL << HTTPParser::DQuote)
      | (1ULL << HTTPParser::SQuote)
      | (1ULL << HTTPParser::Star)
      | (1ULL << HTTPParser::Plus)
      | (1ULL << HTTPParser::Caret)
      | (1ULL << HTTPParser::BackQuote)
      | (1ULL << HTTPParser::VBar))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VCHARContext ------------------------------------------------------------------

HTTPParser::VCHARContext::VCHARContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HTTPParser::VCHARContext::ALPHA() {
  return getToken(HTTPParser::ALPHA, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::DIGIT() {
  return getToken(HTTPParser::DIGIT, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Equals() {
  return getToken(HTTPParser::Equals, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Minus() {
  return getToken(HTTPParser::Minus, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::DQuote() {
  return getToken(HTTPParser::DQuote, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Dot() {
  return getToken(HTTPParser::Dot, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Comma() {
  return getToken(HTTPParser::Comma, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Colon() {
  return getToken(HTTPParser::Colon, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::SemiColon() {
  return getToken(HTTPParser::SemiColon, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::QuestionMark() {
  return getToken(HTTPParser::QuestionMark, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Slash() {
  return getToken(HTTPParser::Slash, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::LColumn() {
  return getToken(HTTPParser::LColumn, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::RColumn() {
  return getToken(HTTPParser::RColumn, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Plus() {
  return getToken(HTTPParser::Plus, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::ExclamationMark() {
  return getToken(HTTPParser::ExclamationMark, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Hashtag() {
  return getToken(HTTPParser::Hashtag, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::DollarSign() {
  return getToken(HTTPParser::DollarSign, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Percent() {
  return getToken(HTTPParser::Percent, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Ampersand() {
  return getToken(HTTPParser::Ampersand, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::SQuote() {
  return getToken(HTTPParser::SQuote, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Star() {
  return getToken(HTTPParser::Star, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::LAngle() {
  return getToken(HTTPParser::LAngle, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::RAngle() {
  return getToken(HTTPParser::RAngle, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::At() {
  return getToken(HTTPParser::At, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::LBracket() {
  return getToken(HTTPParser::LBracket, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::RBracket() {
  return getToken(HTTPParser::RBracket, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::BSlash() {
  return getToken(HTTPParser::BSlash, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Caret() {
  return getToken(HTTPParser::Caret, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Underscore() {
  return getToken(HTTPParser::Underscore, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::BackQuote() {
  return getToken(HTTPParser::BackQuote, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::LBrace() {
  return getToken(HTTPParser::LBrace, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::RBrace() {
  return getToken(HTTPParser::RBrace, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::VBar() {
  return getToken(HTTPParser::VBar, 0);
}

tree::TerminalNode* HTTPParser::VCHARContext::Tilde() {
  return getToken(HTTPParser::Tilde, 0);
}


size_t HTTPParser::VCHARContext::getRuleIndex() const {
  return HTTPParser::RuleVCHAR;
}

void HTTPParser::VCHARContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVCHAR(this);
}

void HTTPParser::VCHARContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HTTPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVCHAR(this);
}

HTTPParser::VCHARContext* HTTPParser::vCHAR() {
  VCHARContext *_localctx = _tracker.createInstance<VCHARContext>(_ctx, getState());
  enterRule(_localctx, 48, HTTPParser::RuleVCHAR);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HTTPParser::ALPHA)
      | (1ULL << HTTPParser::DIGIT)
      | (1ULL << HTTPParser::Minus)
      | (1ULL << HTTPParser::Dot)
      | (1ULL << HTTPParser::Comma)
      | (1ULL << HTTPParser::Underscore)
      | (1ULL << HTTPParser::Tilde)
      | (1ULL << HTTPParser::QuestionMark)
      | (1ULL << HTTPParser::BSlash)
      | (1ULL << HTTPParser::Slash)
      | (1ULL << HTTPParser::ExclamationMark)
      | (1ULL << HTTPParser::Colon)
      | (1ULL << HTTPParser::LAngle)
      | (1ULL << HTTPParser::RAngle)
      | (1ULL << HTTPParser::LColumn)
      | (1ULL << HTTPParser::RColumn)
      | (1ULL << HTTPParser::LBrace)
      | (1ULL << HTTPParser::RBrace)
      | (1ULL << HTTPParser::LBracket)
      | (1ULL << HTTPParser::RBracket)
      | (1ULL << HTTPParser::SemiColon)
      | (1ULL << HTTPParser::Equals)
      | (1ULL << HTTPParser::At)
      | (1ULL << HTTPParser::DollarSign)
      | (1ULL << HTTPParser::Hashtag)
      | (1ULL << HTTPParser::Ampersand)
      | (1ULL << HTTPParser::Percent)
      | (1ULL << HTTPParser::DQuote)
      | (1ULL << HTTPParser::SQuote)
      | (1ULL << HTTPParser::Star)
      | (1ULL << HTTPParser::Plus)
      | (1ULL << HTTPParser::Caret)
      | (1ULL << HTTPParser::BackQuote)
      | (1ULL << HTTPParser::VBar))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> HTTPParser::_decisionToDFA;
atn::PredictionContextCache HTTPParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HTTPParser::_atn;
std::vector<uint16_t> HTTPParser::_serializedATN;

std::vector<std::string> HTTPParser::_ruleNames = {
  "http_message", "start_line", "request_line", "method", "request_target", 
  "origin_form", "absolute_path", "segment", "query", "http_version", "http_name", 
  "header_field", "field_name", "token", "field_value", "field_content", 
  "field_vchar", "obs_text", "obs_fold", "pchar", "unreserved", "pct_encoded", 
  "sub_delims", "tchar", "vCHAR"
};

std::vector<std::string> HTTPParser::_literalNames = {
  "", "'GET'", "'HEAD'", "'POST'", "'PUT'", "'DELETE'", "'CONNECT'", "'OPTIONS'", 
  "'TRACE'", "'HTTPS'", "'HTTP'", "", "", "", "", "'-'", "'.'", "','", "'_'", 
  "'~'", "'\u003F'", "'\\'", "'/'", "'!'", "':'", "'<'", "'>'", "'('", "')'", 
  "'{'", "'}'", "'['", "']'", "';'", "'='", "'@'", "'$'", "'#'", "'&'", 
  "'%'", "'\"'", "'''", "'*'", "'+'", "'^'", "'`'", "'|'", "", "' '", "'\t'"
};

std::vector<std::string> HTTPParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "ALPHA", "DIGIT", "HEXDIG", 
  "CRLF", "Minus", "Dot", "Comma", "Underscore", "Tilde", "QuestionMark", 
  "BSlash", "Slash", "ExclamationMark", "Colon", "LAngle", "RAngle", "LColumn", 
  "RColumn", "LBrace", "RBrace", "LBracket", "RBracket", "SemiColon", "Equals", 
  "At", "DollarSign", "Hashtag", "Ampersand", "Percent", "DQuote", "SQuote", 
  "Star", "Plus", "Caret", "BackQuote", "VBar", "OWS", "SP", "HTAB", "OBS_TEXT"
};

dfa::Vocabulary HTTPParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HTTPParser::_tokenNames;

HTTPParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x34, 0xb9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x39, 
       0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x3c, 0xb, 0x2, 0x3, 0x2, 0x5, 0x2, 
       0x3f, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x51, 0xa, 
       0x7, 0x3, 0x8, 0x3, 0x8, 0x6, 0x8, 0x55, 0xa, 0x8, 0xd, 0x8, 0xe, 
       0x8, 0x56, 0x3, 0x9, 0x7, 0x9, 0x5a, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 
       0x5d, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x62, 0xa, 
       0xa, 0xc, 0xa, 0xe, 0xa, 0x65, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 
       0xb, 0x69, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x6d, 0xa, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0x7a, 0xa, 
       0xd, 0xd, 0xd, 0xe, 0xd, 0x7b, 0x3, 0xd, 0x7, 0xd, 0x7f, 0xa, 0xd, 
       0xc, 0xd, 0xe, 0xd, 0x82, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
       0x6, 0xf, 0x87, 0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0x88, 0x3, 0x10, 0x3, 
       0x10, 0x6, 0x10, 0x8d, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0x8e, 0x3, 
       0x11, 0x3, 0x11, 0x6, 0x11, 0x93, 0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 
       0x94, 0x3, 0x11, 0x5, 0x11, 0x98, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
       0x5, 0x12, 0x9c, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 
       0x14, 0x6, 0x14, 0xa2, 0xa, 0x14, 0xd, 0x14, 0xe, 0x14, 0xa3, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xab, 
       0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
       0x3, 0x1a, 0x3, 0x1a, 0x2, 0x2, 0x1b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
       0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
       0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x2, 0x9, 0x3, 0x3, 
       0x10, 0x10, 0x3, 0x2, 0x3, 0xa, 0x3, 0x2, 0xb, 0xc, 0x5, 0x2, 0xd, 
       0xe, 0x11, 0x12, 0x14, 0x15, 0x9, 0x2, 0x13, 0x13, 0x19, 0x19, 0x1d, 
       0x1e, 0x23, 0x24, 0x26, 0x26, 0x28, 0x28, 0x2b, 0x2d, 0x7, 0x2, 0xd, 
       0xe, 0x11, 0x11, 0x14, 0x15, 0x19, 0x19, 0x26, 0x30, 0x4, 0x2, 0xd, 
       0xe, 0x11, 0x30, 0x2, 0xb7, 0x2, 0x34, 0x3, 0x2, 0x2, 0x2, 0x4, 0x40, 
       0x3, 0x2, 0x2, 0x2, 0x6, 0x42, 0x3, 0x2, 0x2, 0x2, 0x8, 0x49, 0x3, 
       0x2, 0x2, 0x2, 0xa, 0x4b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4d, 0x3, 0x2, 
       0x2, 0x2, 0xe, 0x54, 0x3, 0x2, 0x2, 0x2, 0x10, 0x5b, 0x3, 0x2, 0x2, 
       0x2, 0x12, 0x63, 0x3, 0x2, 0x2, 0x2, 0x14, 0x66, 0x3, 0x2, 0x2, 0x2, 
       0x16, 0x72, 0x3, 0x2, 0x2, 0x2, 0x18, 0x74, 0x3, 0x2, 0x2, 0x2, 0x1a, 
       0x83, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x86, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x8c, 
       0x3, 0x2, 0x2, 0x2, 0x20, 0x90, 0x3, 0x2, 0x2, 0x2, 0x22, 0x9b, 0x3, 
       0x2, 0x2, 0x2, 0x24, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x26, 0x9f, 0x3, 0x2, 
       0x2, 0x2, 0x28, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xac, 0x3, 0x2, 0x2, 
       0x2, 0x2c, 0xae, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xb2, 0x3, 0x2, 0x2, 0x2, 
       0x30, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x32, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x3a, 0x5, 0x4, 0x3, 0x2, 0x35, 0x36, 0x5, 0x18, 0xd, 0x2, 0x36, 
       0x37, 0x9, 0x2, 0x2, 0x2, 0x37, 0x39, 0x3, 0x2, 0x2, 0x2, 0x38, 0x35, 
       0x3, 0x2, 0x2, 0x2, 0x39, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 
       0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3e, 0x3, 0x2, 
       0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x9, 0x2, 0x2, 
       0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 
       0x3f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x5, 0x6, 0x4, 0x2, 0x41, 
       0x5, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x5, 0x8, 0x5, 0x2, 0x43, 0x44, 
       0x7, 0x31, 0x2, 0x2, 0x44, 0x45, 0x5, 0xa, 0x6, 0x2, 0x45, 0x46, 
       0x7, 0x31, 0x2, 0x2, 0x46, 0x47, 0x5, 0x14, 0xb, 0x2, 0x47, 0x48, 
       0x7, 0x10, 0x2, 0x2, 0x48, 0x7, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x9, 
       0x3, 0x2, 0x2, 0x4a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x5, 0xc, 
       0x7, 0x2, 0x4c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x50, 0x5, 0xe, 0x8, 
       0x2, 0x4e, 0x4f, 0x7, 0x16, 0x2, 0x2, 0x4f, 0x51, 0x5, 0x12, 0xa, 
       0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 
       0x51, 0xd, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x7, 0x18, 0x2, 0x2, 0x53, 
       0x55, 0x5, 0x10, 0x9, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 
       0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 
       0x3, 0x2, 0x2, 0x2, 0x57, 0xf, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5a, 0x5, 
       0x28, 0x15, 0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 0x3, 
       0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 
       0x2, 0x2, 0x5c, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 
       0x2, 0x5e, 0x62, 0x5, 0x28, 0x15, 0x2, 0x5f, 0x62, 0x7, 0x18, 0x2, 
       0x2, 0x60, 0x62, 0x7, 0x16, 0x2, 0x2, 0x61, 0x5e, 0x3, 0x2, 0x2, 
       0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x60, 0x3, 0x2, 0x2, 0x2, 
       0x62, 0x65, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 
       0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x13, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x66, 0x68, 0x5, 0x16, 0xc, 0x2, 0x67, 0x69, 
       0x7, 0x31, 0x2, 0x2, 0x68, 0x67, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x7, 
       0x18, 0x2, 0x2, 0x6b, 0x6d, 0x7, 0x31, 0x2, 0x2, 0x6c, 0x6b, 0x3, 
       0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 
       0x2, 0x2, 0x6e, 0x6f, 0x7, 0xe, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x12, 
       0x2, 0x2, 0x70, 0x71, 0x7, 0xe, 0x2, 0x2, 0x71, 0x15, 0x3, 0x2, 0x2, 
       0x2, 0x72, 0x73, 0x9, 0x4, 0x2, 0x2, 0x73, 0x17, 0x3, 0x2, 0x2, 0x2, 
       0x74, 0x75, 0x5, 0x1a, 0xe, 0x2, 0x75, 0x76, 0x7, 0x1a, 0x2, 0x2, 
       0x76, 0x79, 0x7, 0x31, 0x2, 0x2, 0x77, 0x7a, 0x5, 0x1e, 0x10, 0x2, 
       0x78, 0x7a, 0x7, 0x31, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 
       0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 
       0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x80, 
       0x3, 0x2, 0x2, 0x2, 0x7d, 0x7f, 0x7, 0x31, 0x2, 0x2, 0x7e, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 
       0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x19, 0x3, 0x2, 
       0x2, 0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x5, 0x1c, 
       0xf, 0x2, 0x84, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x85, 0x87, 0x5, 0x30, 
       0x19, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 
       0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 
       0x2, 0x89, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8d, 0x5, 0x20, 0x11, 
       0x2, 0x8b, 0x8d, 0x5, 0x26, 0x14, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 
       0x2, 0x8c, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 
       0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 
       0x1f, 0x3, 0x2, 0x2, 0x2, 0x90, 0x97, 0x5, 0x22, 0x12, 0x2, 0x91, 
       0x93, 0x7, 0x31, 0x2, 0x2, 0x92, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 
       0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 
       0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x98, 0x5, 
       0x22, 0x12, 0x2, 0x97, 0x92, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 
       0x2, 0x2, 0x2, 0x98, 0x21, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9c, 0x5, 0x32, 
       0x1a, 0x2, 0x9a, 0x9c, 0x5, 0x24, 0x13, 0x2, 0x9b, 0x99, 0x3, 0x2, 
       0x2, 0x2, 0x9b, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x23, 0x3, 0x2, 0x2, 
       0x2, 0x9d, 0x9e, 0x7, 0x34, 0x2, 0x2, 0x9e, 0x25, 0x3, 0x2, 0x2, 
       0x2, 0x9f, 0xa1, 0x7, 0x10, 0x2, 0x2, 0xa0, 0xa2, 0x7, 0x31, 0x2, 
       0x2, 0xa1, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 
       0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xab, 0x5, 0x2a, 0x16, 0x2, 0xa6, 
       0xab, 0x5, 0x2c, 0x17, 0x2, 0xa7, 0xab, 0x5, 0x2e, 0x18, 0x2, 0xa8, 
       0xab, 0x7, 0x1a, 0x2, 0x2, 0xa9, 0xab, 0x7, 0x25, 0x2, 0x2, 0xaa, 
       0xa5, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa7, 
       0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa9, 0x3, 
       0x2, 0x2, 0x2, 0xab, 0x29, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x9, 0x5, 
       0x2, 0x2, 0xad, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x29, 
       0x2, 0x2, 0xaf, 0xb0, 0x7, 0xf, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0xf, 0x2, 
       0x2, 0xb1, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x9, 0x6, 0x2, 0x2, 
       0xb3, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x9, 0x7, 0x2, 0x2, 0xb5, 
       0x31, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x9, 0x8, 0x2, 0x2, 0xb7, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x16, 0x3a, 0x3e, 0x50, 0x56, 0x5b, 0x61, 0x63, 
       0x68, 0x6c, 0x79, 0x7b, 0x80, 0x88, 0x8c, 0x8e, 0x94, 0x97, 0x9b, 
       0xa3, 0xaa, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HTTPParser::Initializer HTTPParser::_init;
