
// Generated from HTTP.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace sylvanmats {


class  httpLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, SP = 10, ALPHA = 11, DIGIT = 12, Pct_encoded = 13, 
    HEXDIG = 14, LColumn = 15, RColumn = 16, SemiColon = 17, Equals = 18, 
    Period = 19, CRLF = 20, Minus = 21, Dot = 22, Underscore = 23, Tilde = 24, 
    QuestionMark = 25, Slash = 26, ExclamationMark = 27, Colon = 28, At = 29, 
    DollarSign = 30, Hashtag = 31, Ampersand = 32, Percent = 33, SQuote = 34, 
    Star = 35, Plus = 36, Caret = 37, BackQuote = 38, VBar = 39, OWS = 40, 
    HTAB = 41, VCHAR = 42, OBS_TEXT = 43
  };

  httpLexer(antlr4::CharStream *input);
  ~httpLexer();

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
