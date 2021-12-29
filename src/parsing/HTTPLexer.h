
// Generated from HTTP.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"


namespace sylvanmats {


class  HTTPLexer : public antlr4::Lexer {
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

  explicit HTTPLexer(antlr4::CharStream *input);
  ~HTTPLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace sylvanmats
