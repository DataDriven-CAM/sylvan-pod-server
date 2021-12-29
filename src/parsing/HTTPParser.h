
// Generated from HTTP.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"


namespace sylvanmats {


class  HTTPParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, ALPHA = 11, DIGIT = 12, HEXDIG = 13, 
    CRLF = 14, Minus = 15, Dot = 16, Comma = 17, Underscore = 18, Tilde = 19, 
    QuestionMark = 20, BSlash = 21, Slash = 22, ExclamationMark = 23, Colon = 24, 
    LAngle = 25, RAngle = 26, LColumn = 27, RColumn = 28, LBrace = 29, RBrace = 30, 
    LBracket = 31, RBracket = 32, SemiColon = 33, Equals = 34, At = 35, 
    DollarSign = 36, Hashtag = 37, Ampersand = 38, Percent = 39, DQuote = 40, 
    SQuote = 41, Star = 42, Plus = 43, Caret = 44, BackQuote = 45, VBar = 46, 
    OWS = 47, SP = 48, HTAB = 49, OBS_TEXT = 50
  };

  enum {
    RuleHttp_message = 0, RuleStart_line = 1, RuleRequest_line = 2, RuleMethod = 3, 
    RuleRequest_target = 4, RuleOrigin_form = 5, RuleAbsolute_path = 6, 
    RuleSegment = 7, RuleQuery = 8, RuleHttp_version = 9, RuleHttp_name = 10, 
    RuleHeader_field = 11, RuleField_name = 12, RuleToken = 13, RuleField_value = 14, 
    RuleField_content = 15, RuleField_vchar = 16, RuleObs_text = 17, RuleObs_fold = 18, 
    RulePchar = 19, RuleUnreserved = 20, RulePct_encoded = 21, RuleSub_delims = 22, 
    RuleTchar = 23, RuleVCHAR = 24
  };

  explicit HTTPParser(antlr4::TokenStream *input);
  ~HTTPParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Http_messageContext;
  class Start_lineContext;
  class Request_lineContext;
  class MethodContext;
  class Request_targetContext;
  class Origin_formContext;
  class Absolute_pathContext;
  class SegmentContext;
  class QueryContext;
  class Http_versionContext;
  class Http_nameContext;
  class Header_fieldContext;
  class Field_nameContext;
  class TokenContext;
  class Field_valueContext;
  class Field_contentContext;
  class Field_vcharContext;
  class Obs_textContext;
  class Obs_foldContext;
  class PcharContext;
  class UnreservedContext;
  class Pct_encodedContext;
  class Sub_delimsContext;
  class TcharContext;
  class VCHARContext; 

  class  Http_messageContext : public antlr4::ParserRuleContext {
  public:
    Http_messageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Start_lineContext *start_line();
    std::vector<Header_fieldContext *> header_field();
    Header_fieldContext* header_field(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CRLF();
    antlr4::tree::TerminalNode* CRLF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOF();
    antlr4::tree::TerminalNode* EOF(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Http_messageContext* http_message();

  class  Start_lineContext : public antlr4::ParserRuleContext {
  public:
    Start_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Request_lineContext *request_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Start_lineContext* start_line();

  class  Request_lineContext : public antlr4::ParserRuleContext {
  public:
    Request_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodContext *method();
    std::vector<antlr4::tree::TerminalNode *> OWS();
    antlr4::tree::TerminalNode* OWS(size_t i);
    Request_targetContext *request_target();
    Http_versionContext *http_version();
    antlr4::tree::TerminalNode *CRLF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Request_lineContext* request_line();

  class  MethodContext : public antlr4::ParserRuleContext {
  public:
    MethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodContext* method();

  class  Request_targetContext : public antlr4::ParserRuleContext {
  public:
    Request_targetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Origin_formContext *origin_form();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Request_targetContext* request_target();

  class  Origin_formContext : public antlr4::ParserRuleContext {
  public:
    Origin_formContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Absolute_pathContext *absolute_path();
    antlr4::tree::TerminalNode *QuestionMark();
    QueryContext *query();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Origin_formContext* origin_form();

  class  Absolute_pathContext : public antlr4::ParserRuleContext {
  public:
    Absolute_pathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Slash();
    antlr4::tree::TerminalNode* Slash(size_t i);
    std::vector<SegmentContext *> segment();
    SegmentContext* segment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Absolute_pathContext* absolute_path();

  class  SegmentContext : public antlr4::ParserRuleContext {
  public:
    SegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PcharContext *> pchar();
    PcharContext* pchar(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SegmentContext* segment();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PcharContext *> pchar();
    PcharContext* pchar(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Slash();
    antlr4::tree::TerminalNode* Slash(size_t i);
    std::vector<antlr4::tree::TerminalNode *> QuestionMark();
    antlr4::tree::TerminalNode* QuestionMark(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QueryContext* query();

  class  Http_versionContext : public antlr4::ParserRuleContext {
  public:
    Http_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Http_nameContext *http_name();
    antlr4::tree::TerminalNode *Slash();
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);
    antlr4::tree::TerminalNode *Dot();
    std::vector<antlr4::tree::TerminalNode *> OWS();
    antlr4::tree::TerminalNode* OWS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Http_versionContext* http_version();

  class  Http_nameContext : public antlr4::ParserRuleContext {
  public:
    Http_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Http_nameContext* http_name();

  class  Header_fieldContext : public antlr4::ParserRuleContext {
  public:
    Header_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Field_nameContext *field_name();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> OWS();
    antlr4::tree::TerminalNode* OWS(size_t i);
    std::vector<Field_valueContext *> field_value();
    Field_valueContext* field_value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Header_fieldContext* header_field();

  class  Field_nameContext : public antlr4::ParserRuleContext {
  public:
    Field_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokenContext *token();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_nameContext* field_name();

  class  TokenContext : public antlr4::ParserRuleContext {
  public:
    TokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TcharContext *> tchar();
    TcharContext* tchar(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TokenContext* token();

  class  Field_valueContext : public antlr4::ParserRuleContext {
  public:
    Field_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Field_contentContext *> field_content();
    Field_contentContext* field_content(size_t i);
    std::vector<Obs_foldContext *> obs_fold();
    Obs_foldContext* obs_fold(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_valueContext* field_value();

  class  Field_contentContext : public antlr4::ParserRuleContext {
  public:
    Field_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Field_vcharContext *> field_vchar();
    Field_vcharContext* field_vchar(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OWS();
    antlr4::tree::TerminalNode* OWS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_contentContext* field_content();

  class  Field_vcharContext : public antlr4::ParserRuleContext {
  public:
    Field_vcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VCHARContext *vCHAR();
    Obs_textContext *obs_text();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_vcharContext* field_vchar();

  class  Obs_textContext : public antlr4::ParserRuleContext {
  public:
    Obs_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBS_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Obs_textContext* obs_text();

  class  Obs_foldContext : public antlr4::ParserRuleContext {
  public:
    Obs_foldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CRLF();
    std::vector<antlr4::tree::TerminalNode *> OWS();
    antlr4::tree::TerminalNode* OWS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Obs_foldContext* obs_fold();

  class  PcharContext : public antlr4::ParserRuleContext {
  public:
    PcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnreservedContext *unreserved();
    Pct_encodedContext *pct_encoded();
    Sub_delimsContext *sub_delims();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *At();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PcharContext* pchar();

  class  UnreservedContext : public antlr4::ParserRuleContext {
  public:
    UnreservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALPHA();
    antlr4::tree::TerminalNode *DIGIT();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Underscore();
    antlr4::tree::TerminalNode *Tilde();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnreservedContext* unreserved();

  class  Pct_encodedContext : public antlr4::ParserRuleContext {
  public:
    Pct_encodedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Percent();
    std::vector<antlr4::tree::TerminalNode *> HEXDIG();
    antlr4::tree::TerminalNode* HEXDIG(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pct_encodedContext* pct_encoded();

  class  Sub_delimsContext : public antlr4::ParserRuleContext {
  public:
    Sub_delimsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ExclamationMark();
    antlr4::tree::TerminalNode *DollarSign();
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *SQuote();
    antlr4::tree::TerminalNode *LColumn();
    antlr4::tree::TerminalNode *RColumn();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *Equals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sub_delimsContext* sub_delims();

  class  TcharContext : public antlr4::ParserRuleContext {
  public:
    TcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ExclamationMark();
    antlr4::tree::TerminalNode *DollarSign();
    antlr4::tree::TerminalNode *Hashtag();
    antlr4::tree::TerminalNode *Percent();
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *SQuote();
    antlr4::tree::TerminalNode *DQuote();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *Underscore();
    antlr4::tree::TerminalNode *BackQuote();
    antlr4::tree::TerminalNode *VBar();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *DIGIT();
    antlr4::tree::TerminalNode *ALPHA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TcharContext* tchar();

  class  VCHARContext : public antlr4::ParserRuleContext {
  public:
    VCHARContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALPHA();
    antlr4::tree::TerminalNode *DIGIT();
    antlr4::tree::TerminalNode *Equals();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *DQuote();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *QuestionMark();
    antlr4::tree::TerminalNode *Slash();
    antlr4::tree::TerminalNode *LColumn();
    antlr4::tree::TerminalNode *RColumn();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *ExclamationMark();
    antlr4::tree::TerminalNode *Hashtag();
    antlr4::tree::TerminalNode *DollarSign();
    antlr4::tree::TerminalNode *Percent();
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *SQuote();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *LAngle();
    antlr4::tree::TerminalNode *RAngle();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *LBracket();
    antlr4::tree::TerminalNode *RBracket();
    antlr4::tree::TerminalNode *BSlash();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *Underscore();
    antlr4::tree::TerminalNode *BackQuote();
    antlr4::tree::TerminalNode *LBrace();
    antlr4::tree::TerminalNode *RBrace();
    antlr4::tree::TerminalNode *VBar();
    antlr4::tree::TerminalNode *Tilde();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VCHARContext* vCHAR();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace sylvanmats
