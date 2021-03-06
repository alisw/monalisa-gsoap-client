/* soapClient.cpp
   Generated by gSOAP 2.7.10 from soapMLWebService.h
   Copyright(C) 2000-2008, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.7.10 2008-05-30 10:01:42 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__getValues(struct soap *soap, const char *soap_endpoint, const char *soap_action, std::string _in0, std::string _in1, std::string _in2, std::string _in3, LONG64 _in4, LONG64 _in5, struct ns1__getValuesResponse &_param_1)
{	struct ns1__getValues soap_tmp_ns1__getValues;
	if (!soap_endpoint)
		soap_endpoint = "http://aliendb1:6004/axis/services/MLWebService";
	if (!soap_action)
		soap_action = "";
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_tmp_ns1__getValues._in0 = _in0;
	soap_tmp_ns1__getValues._in1 = _in1;
	soap_tmp_ns1__getValues._in2 = _in2;
	soap_tmp_ns1__getValues._in3 = _in3;
	soap_tmp_ns1__getValues._in4 = _in4;
	soap_tmp_ns1__getValues._in5 = _in5;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_ns1__getValues(soap, &soap_tmp_ns1__getValues);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns1__getValues(soap, &soap_tmp_ns1__getValues, "ns1:getValues", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns1__getValues(soap, &soap_tmp_ns1__getValues, "ns1:getValues", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	soap_default_ns1__getValuesResponse(soap, &_param_1);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_ns1__getValuesResponse(soap, &_param_1, "ns1:getValuesResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__getConfiguration(struct soap *soap, const char *soap_endpoint, const char *soap_action, LONG64 _in0, LONG64 _in1, struct ns1__getConfigurationResponse &_param_2)
{	struct ns1__getConfiguration soap_tmp_ns1__getConfiguration;
	if (!soap_endpoint)
		soap_endpoint = "http://aliendb1:6004/axis/services/MLWebService";
	if (!soap_action)
		soap_action = "";
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_tmp_ns1__getConfiguration._in0 = _in0;
	soap_tmp_ns1__getConfiguration._in1 = _in1;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_ns1__getConfiguration(soap, &soap_tmp_ns1__getConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns1__getConfiguration(soap, &soap_tmp_ns1__getConfiguration, "ns1:getConfiguration", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns1__getConfiguration(soap, &soap_tmp_ns1__getConfiguration, "ns1:getConfiguration", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	soap_default_ns1__getConfigurationResponse(soap, &_param_2);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_ns1__getConfigurationResponse(soap, &_param_2, "ns1:getConfigurationResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__getLatestConfiguration(struct soap *soap, const char *soap_endpoint, const char *soap_action, std::string _in0, struct ns1__getLatestConfigurationResponse &_param_3)
{	struct ns1__getLatestConfiguration soap_tmp_ns1__getLatestConfiguration;
	if (!soap_endpoint)
		soap_endpoint = "http://aliendb1:6004/axis/services/MLWebService";
	if (!soap_action)
		soap_action = "";
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_tmp_ns1__getLatestConfiguration._in0 = _in0;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_ns1__getLatestConfiguration(soap, &soap_tmp_ns1__getLatestConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns1__getLatestConfiguration(soap, &soap_tmp_ns1__getLatestConfiguration, "ns1:getLatestConfiguration", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns1__getLatestConfiguration(soap, &soap_tmp_ns1__getLatestConfiguration, "ns1:getLatestConfiguration", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	soap_default_ns1__getLatestConfigurationResponse(soap, &_param_3);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_ns1__getLatestConfigurationResponse(soap, &_param_3, "ns1:getLatestConfigurationResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__getLastValues(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct ns1__getLastValuesResponse &_param_4)
{	struct ns1__getLastValues soap_tmp_ns1__getLastValues;
	if (!soap_endpoint)
		soap_endpoint = "http://aliendb1:6004/axis/services/MLWebService";
	if (!soap_action)
		soap_action = "";
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_ns1__getLastValues(soap, &soap_tmp_ns1__getLastValues);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns1__getLastValues(soap, &soap_tmp_ns1__getLastValues, "ns1:getLastValues", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns1__getLastValues(soap, &soap_tmp_ns1__getLastValues, "ns1:getLastValues", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	soap_default_ns1__getLastValuesResponse(soap, &_param_4);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_ns1__getLastValuesResponse(soap, &_param_4, "ns1:getLastValuesResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__getFilteredLastValues(struct soap *soap, const char *soap_endpoint, const char *soap_action, std::string _in0, std::string _in1, std::string _in2, std::string _in3, struct ns1__getFilteredLastValuesResponse &_param_5)
{	struct ns1__getFilteredLastValues soap_tmp_ns1__getFilteredLastValues;
	if (!soap_endpoint)
		soap_endpoint = "http://aliendb1:6004/axis/services/MLWebService";
	if (!soap_action)
		soap_action = "";
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_tmp_ns1__getFilteredLastValues._in0 = _in0;
	soap_tmp_ns1__getFilteredLastValues._in1 = _in1;
	soap_tmp_ns1__getFilteredLastValues._in2 = _in2;
	soap_tmp_ns1__getFilteredLastValues._in3 = _in3;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_ns1__getFilteredLastValues(soap, &soap_tmp_ns1__getFilteredLastValues);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns1__getFilteredLastValues(soap, &soap_tmp_ns1__getFilteredLastValues, "ns1:getFilteredLastValues", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns1__getFilteredLastValues(soap, &soap_tmp_ns1__getFilteredLastValues, "ns1:getFilteredLastValues", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	soap_default_ns1__getFilteredLastValuesResponse(soap, &_param_5);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_ns1__getFilteredLastValuesResponse(soap, &_param_5, "ns1:getFilteredLastValuesResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns3__networkMeasurementSet(struct soap *soap, const char *soap_endpoint, const char *soap_action, ns2__Map *_in0, struct ns3__networkMeasurementSetResponse &_param_6)
{	struct ns3__networkMeasurementSet soap_tmp_ns3__networkMeasurementSet;
	if (!soap_endpoint)
		soap_endpoint = "http://aliendb1:6004/axis/services/MLWebService";
	if (!soap_action)
		soap_action = "";
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_tmp_ns3__networkMeasurementSet._in0 = _in0;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_ns3__networkMeasurementSet(soap, &soap_tmp_ns3__networkMeasurementSet);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns3__networkMeasurementSet(soap, &soap_tmp_ns3__networkMeasurementSet, "ns3:networkMeasurementSet", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns3__networkMeasurementSet(soap, &soap_tmp_ns3__networkMeasurementSet, "ns3:networkMeasurementSet", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	soap_default_ns3__networkMeasurementSetResponse(soap, &_param_6);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_ns3__networkMeasurementSetResponse(soap, &_param_6, "ns3:networkMeasurementSetResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

/* End of soapClient.cpp */
