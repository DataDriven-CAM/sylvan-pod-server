
// Generated from HTTP.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "HTTPListener.h"


namespace sylvanmats {

/**
 * This class provides an empty implementation of HTTPListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HTTPBaseListener : public HTTPListener {
public:

  virtual void enterHttp_message(HTTPParser::Http_messageContext * /*ctx*/) override { }
  virtual void exitHttp_message(HTTPParser::Http_messageContext * /*ctx*/) override { }

  virtual void enterStart_line(HTTPParser::Start_lineContext * /*ctx*/) override { }
  virtual void exitStart_line(HTTPParser::Start_lineContext * /*ctx*/) override { }

  virtual void enterRequest_line(HTTPParser::Request_lineContext * /*ctx*/) override { }
  virtual void exitRequest_line(HTTPParser::Request_lineContext * /*ctx*/) override { }

  virtual void enterMethod(HTTPParser::MethodContext * /*ctx*/) override { }
  virtual void exitMethod(HTTPParser::MethodContext * /*ctx*/) override { }

  virtual void enterRequest_target(HTTPParser::Request_targetContext * /*ctx*/) override { }
  virtual void exitRequest_target(HTTPParser::Request_targetContext * /*ctx*/) override { }

  virtual void enterOrigin_form(HTTPParser::Origin_formContext * /*ctx*/) override { }
  virtual void exitOrigin_form(HTTPParser::Origin_formContext * /*ctx*/) override { }

  virtual void enterAbsolute_path(HTTPParser::Absolute_pathContext * /*ctx*/) override { }
  virtual void exitAbsolute_path(HTTPParser::Absolute_pathContext * /*ctx*/) override { }

  virtual void enterSegment(HTTPParser::SegmentContext * /*ctx*/) override { }
  virtual void exitSegment(HTTPParser::SegmentContext * /*ctx*/) override { }

  virtual void enterQuery(HTTPParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(HTTPParser::QueryContext * /*ctx*/) override { }

  virtual void enterHttp_version(HTTPParser::Http_versionContext * /*ctx*/) override { }
  virtual void exitHttp_version(HTTPParser::Http_versionContext * /*ctx*/) override { }

  virtual void enterHttp_name(HTTPParser::Http_nameContext * /*ctx*/) override { }
  virtual void exitHttp_name(HTTPParser::Http_nameContext * /*ctx*/) override { }

  virtual void enterHeader_field(HTTPParser::Header_fieldContext * /*ctx*/) override { }
  virtual void exitHeader_field(HTTPParser::Header_fieldContext * /*ctx*/) override { }

  virtual void enterField_name(HTTPParser::Field_nameContext * /*ctx*/) override { }
  virtual void exitField_name(HTTPParser::Field_nameContext * /*ctx*/) override { }

  virtual void enterToken(HTTPParser::TokenContext * /*ctx*/) override { }
  virtual void exitToken(HTTPParser::TokenContext * /*ctx*/) override { }

  virtual void enterField_value(HTTPParser::Field_valueContext * /*ctx*/) override { }
  virtual void exitField_value(HTTPParser::Field_valueContext * /*ctx*/) override { }

  virtual void enterField_content(HTTPParser::Field_contentContext * /*ctx*/) override { }
  virtual void exitField_content(HTTPParser::Field_contentContext * /*ctx*/) override { }

  virtual void enterField_vchar(HTTPParser::Field_vcharContext * /*ctx*/) override { }
  virtual void exitField_vchar(HTTPParser::Field_vcharContext * /*ctx*/) override { }

  virtual void enterObs_text(HTTPParser::Obs_textContext * /*ctx*/) override { }
  virtual void exitObs_text(HTTPParser::Obs_textContext * /*ctx*/) override { }

  virtual void enterObs_fold(HTTPParser::Obs_foldContext * /*ctx*/) override { }
  virtual void exitObs_fold(HTTPParser::Obs_foldContext * /*ctx*/) override { }

  virtual void enterPchar(HTTPParser::PcharContext * /*ctx*/) override { }
  virtual void exitPchar(HTTPParser::PcharContext * /*ctx*/) override { }

  virtual void enterUnreserved(HTTPParser::UnreservedContext * /*ctx*/) override { }
  virtual void exitUnreserved(HTTPParser::UnreservedContext * /*ctx*/) override { }

  virtual void enterPct_encoded(HTTPParser::Pct_encodedContext * /*ctx*/) override { }
  virtual void exitPct_encoded(HTTPParser::Pct_encodedContext * /*ctx*/) override { }

  virtual void enterSub_delims(HTTPParser::Sub_delimsContext * /*ctx*/) override { }
  virtual void exitSub_delims(HTTPParser::Sub_delimsContext * /*ctx*/) override { }

  virtual void enterTchar(HTTPParser::TcharContext * /*ctx*/) override { }
  virtual void exitTchar(HTTPParser::TcharContext * /*ctx*/) override { }

  virtual void enterVCHAR(HTTPParser::VCHARContext * /*ctx*/) override { }
  virtual void exitVCHAR(HTTPParser::VCHARContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace sylvanmats
