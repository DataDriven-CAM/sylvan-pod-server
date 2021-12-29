
// Generated from HTTP.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "HTTPParser.h"


namespace sylvanmats {

/**
 * This interface defines an abstract listener for a parse tree produced by HTTPParser.
 */
class  HTTPListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterHttp_message(HTTPParser::Http_messageContext *ctx) = 0;
  virtual void exitHttp_message(HTTPParser::Http_messageContext *ctx) = 0;

  virtual void enterStart_line(HTTPParser::Start_lineContext *ctx) = 0;
  virtual void exitStart_line(HTTPParser::Start_lineContext *ctx) = 0;

  virtual void enterRequest_line(HTTPParser::Request_lineContext *ctx) = 0;
  virtual void exitRequest_line(HTTPParser::Request_lineContext *ctx) = 0;

  virtual void enterMethod(HTTPParser::MethodContext *ctx) = 0;
  virtual void exitMethod(HTTPParser::MethodContext *ctx) = 0;

  virtual void enterRequest_target(HTTPParser::Request_targetContext *ctx) = 0;
  virtual void exitRequest_target(HTTPParser::Request_targetContext *ctx) = 0;

  virtual void enterOrigin_form(HTTPParser::Origin_formContext *ctx) = 0;
  virtual void exitOrigin_form(HTTPParser::Origin_formContext *ctx) = 0;

  virtual void enterAbsolute_path(HTTPParser::Absolute_pathContext *ctx) = 0;
  virtual void exitAbsolute_path(HTTPParser::Absolute_pathContext *ctx) = 0;

  virtual void enterSegment(HTTPParser::SegmentContext *ctx) = 0;
  virtual void exitSegment(HTTPParser::SegmentContext *ctx) = 0;

  virtual void enterQuery(HTTPParser::QueryContext *ctx) = 0;
  virtual void exitQuery(HTTPParser::QueryContext *ctx) = 0;

  virtual void enterHttp_version(HTTPParser::Http_versionContext *ctx) = 0;
  virtual void exitHttp_version(HTTPParser::Http_versionContext *ctx) = 0;

  virtual void enterHttp_name(HTTPParser::Http_nameContext *ctx) = 0;
  virtual void exitHttp_name(HTTPParser::Http_nameContext *ctx) = 0;

  virtual void enterHeader_field(HTTPParser::Header_fieldContext *ctx) = 0;
  virtual void exitHeader_field(HTTPParser::Header_fieldContext *ctx) = 0;

  virtual void enterField_name(HTTPParser::Field_nameContext *ctx) = 0;
  virtual void exitField_name(HTTPParser::Field_nameContext *ctx) = 0;

  virtual void enterToken(HTTPParser::TokenContext *ctx) = 0;
  virtual void exitToken(HTTPParser::TokenContext *ctx) = 0;

  virtual void enterField_value(HTTPParser::Field_valueContext *ctx) = 0;
  virtual void exitField_value(HTTPParser::Field_valueContext *ctx) = 0;

  virtual void enterField_content(HTTPParser::Field_contentContext *ctx) = 0;
  virtual void exitField_content(HTTPParser::Field_contentContext *ctx) = 0;

  virtual void enterField_vchar(HTTPParser::Field_vcharContext *ctx) = 0;
  virtual void exitField_vchar(HTTPParser::Field_vcharContext *ctx) = 0;

  virtual void enterObs_text(HTTPParser::Obs_textContext *ctx) = 0;
  virtual void exitObs_text(HTTPParser::Obs_textContext *ctx) = 0;

  virtual void enterObs_fold(HTTPParser::Obs_foldContext *ctx) = 0;
  virtual void exitObs_fold(HTTPParser::Obs_foldContext *ctx) = 0;

  virtual void enterPchar(HTTPParser::PcharContext *ctx) = 0;
  virtual void exitPchar(HTTPParser::PcharContext *ctx) = 0;

  virtual void enterUnreserved(HTTPParser::UnreservedContext *ctx) = 0;
  virtual void exitUnreserved(HTTPParser::UnreservedContext *ctx) = 0;

  virtual void enterPct_encoded(HTTPParser::Pct_encodedContext *ctx) = 0;
  virtual void exitPct_encoded(HTTPParser::Pct_encodedContext *ctx) = 0;

  virtual void enterSub_delims(HTTPParser::Sub_delimsContext *ctx) = 0;
  virtual void exitSub_delims(HTTPParser::Sub_delimsContext *ctx) = 0;

  virtual void enterTchar(HTTPParser::TcharContext *ctx) = 0;
  virtual void exitTchar(HTTPParser::TcharContext *ctx) = 0;

  virtual void enterVCHAR(HTTPParser::VCHARContext *ctx) = 0;
  virtual void exitVCHAR(HTTPParser::VCHARContext *ctx) = 0;


};

}  // namespace sylvanmats
