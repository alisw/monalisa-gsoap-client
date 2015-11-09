/* soapMLWebService.h
   Generated by wsdl2h 1.2.10 from http://aliendb1.cern.ch:6004/axis/services/MLWebService?wsdl and typemap.dat
   2008-05-30 10:01:42 GMT
   Copyright (C) 2001-2008 Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL or Genivia's license for commercial use.
*/

/* NOTE:

 - Compile this file with soapcpp2 to complete the code generation process.
 - Use soapcpp2 option -I to specify paths for #import
   To build with STL, 'stlvector.h' is imported from 'import' dir in package.
 - Use wsdl2h options -c and -s to generate pure C code or C++ code without STL.
 - Use 'WS/typemap.dat' to control namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Use Doxygen (www.doxygen.org) to browse this file.
 - Use wsdl2h option -l to view the software license terms.

   DO NOT include this file directly into your project.
   Include only the soapcpp2-generated headers and source code files.
*/

//gsoapopt w

/******************************************************************************\
 *                                                                            *
 * urn:lia.ws                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


// STL vector containers (use option -s to disable)
#import "./stlvector.h"

/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "urn:lia.ws"
ns2 = "http://xml.apache.org/xml-soap"
ns3 = "http://ws.lia"

*/

//gsoap ns2   schema namespace:	http://xml.apache.org/xml-soap
//gsoap ns3   schema namespace:	http://ws.lia
//gsoap ns1   schema namespace:	urn:lia.ws
//gsoap ns2   schema form:	unqualified
//gsoap ns3   schema form:	unqualified
//gsoap ns1   schema form:	unqualified

/******************************************************************************\
 *                                                                            *
 * Schema Types                                                               *
 *                                                                            *
\******************************************************************************/

class xsd__anyType { _XML __item; struct soap *soap; };

/// Class wrapper for built-in type "xs:long" derived from xsd__anyType
class xsd__long : public xsd__anyType
{ public:
    LONG64                               __item;                       
};

/// Class wrapper for built-in type "xs:string" derived from xsd__anyType
class xsd__string : public xsd__anyType
{ public:
    std::string                          __item;                       
};


//  Forward declaration of class ns2__mapItem.
class ns2__mapItem;

//  Forward declaration of class ns2__Map.
class ns2__Map;

//  Forward declaration of class ns3__Result.
class ns3__Result;

//  Forward declaration of class ns3__WSNode.
class ns3__WSNode;

//  Forward declaration of class ns3__WSCluster.
class ns3__WSCluster;

//  Forward declaration of class ns3__WSFarm.
class ns3__WSFarm;

//  Forward declaration of class ns3__WSConf.
class ns3__WSConf;

//  Forward declaration of class ArrayOf_USCOREtns1_USCOREResult.
class ArrayOf_USCOREtns1_USCOREResult;

//  Forward declaration of class ArrayOf_USCORExsd_USCOREstring.
class ArrayOf_USCORExsd_USCOREstring;

//  Forward declaration of class ArrayOf_USCOREtns1_USCOREWSNode.
class ArrayOf_USCOREtns1_USCOREWSNode;

//  Forward declaration of class ArrayOf_USCOREtns1_USCOREWSCluster.
class ArrayOf_USCOREtns1_USCOREWSCluster;

//  Forward declaration of class ArrayOf_USCOREtns1_USCOREWSConf.
class ArrayOf_USCOREtns1_USCOREWSConf;

/// "http://xml.apache.org/xml-soap":mapItem is a complexType.
class ns2__mapItem : public xsd__anyType
{ public:
/// Element key of type xs:anyType.
    xsd__anyType*                        key                           ;	///< Nullable pointer.
/// Element value of type xs:anyType.
    xsd__anyType*                        value                         ;	///< Nullable pointer.
};

/// "http://xml.apache.org/xml-soap":Map is a complexType.
class ns2__Map : public xsd__anyType
{ public:
/// Vector of ns2__mapItem* with length 0..unbounded
    std::vector<ns2__mapItem*          > item                           0;
};

/// "http://ws.lia":Result is a complexType.
class ns3__Result : public xsd__anyType
{ public:
/// Element clusterName of type xs:string.
    std::string*                         clusterName                   ;	///< Nullable pointer.
/// Element farmName of type xs:string.
    std::string*                         farmName                      ;	///< Nullable pointer.
/// Element nodeName of type xs:string.
    std::string*                         nodeName                      ;	///< Nullable pointer.
/// Element param of type "http://xml.apache.org/xml-soap":Map.
    ns2__Map*                            param                         ;	///< Nullable pointer.
/// Element time of type xs:long.
    LONG64                               time                           1;	///< Required element.
};

/// "http://ws.lia":WSNode is a complexType.
class ns3__WSNode : public xsd__anyType
{ public:
/// Element nodeName of type xs:string.
    std::string*                         nodeName                      ;	///< Nullable pointer.
/// Element paramList of type "urn:lia.ws":ArrayOf_xsd_string.
    ArrayOf_USCORExsd_USCOREstring*      paramList                     ;	///< Nullable pointer.
};

/// "http://ws.lia":WSCluster is a complexType.
class ns3__WSCluster : public xsd__anyType
{ public:
/// Element clusterName of type xs:string.
    std::string*                         clusterName                   ;	///< Nullable pointer.
/// Element nodeList of type "urn:lia.ws":ArrayOf_tns1_WSNode.
    ArrayOf_USCOREtns1_USCOREWSNode*     nodeList                      ;	///< Nullable pointer.
};

/// "http://ws.lia":WSFarm is a complexType.
class ns3__WSFarm : public xsd__anyType
{ public:
/// Element clusterList of type "urn:lia.ws":ArrayOf_tns1_WSCluster.
    ArrayOf_USCOREtns1_USCOREWSCluster*  clusterList                   ;	///< Nullable pointer.
/// Element farmName of type xs:string.
    std::string*                         farmName                      ;	///< Nullable pointer.
};

/// "http://ws.lia":WSConf is a complexType.
class ns3__WSConf : public xsd__anyType
{ public:
/// Element confTime of type xs:long.
    LONG64                               confTime                       1;	///< Required element.
/// Element wsFarm of type "http://ws.lia":WSFarm.
    ns3__WSFarm*                         wsFarm                        ;	///< Nullable pointer.
};

/// "urn:lia.ws":ArrayOf_tns1_Result is a complexType with complexContent restriction of SOAP-ENC:Array.
/// SOAP encoded array of "http://ws.lia":Result
class ArrayOf_USCOREtns1_USCOREResult : public xsd__anyType
{ public:
/// Pointer to array of ns3__Result*.
    ns3__Result*                        *__ptr                         ;
/// Size of the dynamic array.
    int                                  __size                        ;
/// Offset for partially transmitted arrays (uncomment only when required).
//  int                                  __offset                      ;
};

/// "urn:lia.ws":ArrayOf_xsd_string is a complexType with complexContent restriction of SOAP-ENC:Array.
/// SOAP encoded array of xs:string
class ArrayOf_USCORExsd_USCOREstring : public xsd__anyType
{ public:
/// Pointer to array of std::string.
    std::string                         *__ptr                         ;
/// Size of the dynamic array.
    int                                  __size                        ;
/// Offset for partially transmitted arrays (uncomment only when required).
//  int                                  __offset                      ;
};

/// "urn:lia.ws":ArrayOf_tns1_WSNode is a complexType with complexContent restriction of SOAP-ENC:Array.
/// SOAP encoded array of "http://ws.lia":WSNode
class ArrayOf_USCOREtns1_USCOREWSNode : public xsd__anyType
{ public:
/// Pointer to array of ns3__WSNode*.
    ns3__WSNode*                        *__ptr                         ;
/// Size of the dynamic array.
    int                                  __size                        ;
/// Offset for partially transmitted arrays (uncomment only when required).
//  int                                  __offset                      ;
};

/// "urn:lia.ws":ArrayOf_tns1_WSCluster is a complexType with complexContent restriction of SOAP-ENC:Array.
/// SOAP encoded array of "http://ws.lia":WSCluster
class ArrayOf_USCOREtns1_USCOREWSCluster : public xsd__anyType
{ public:
/// Pointer to array of ns3__WSCluster*.
    ns3__WSCluster*                     *__ptr                         ;
/// Size of the dynamic array.
    int                                  __size                        ;
/// Offset for partially transmitted arrays (uncomment only when required).
//  int                                  __offset                      ;
};

/// "urn:lia.ws":ArrayOf_tns1_WSConf is a complexType with complexContent restriction of SOAP-ENC:Array.
/// SOAP encoded array of "http://ws.lia":WSConf
class ArrayOf_USCOREtns1_USCOREWSConf : public xsd__anyType
{ public:
/// Pointer to array of ns3__WSConf*.
    ns3__WSConf*                        *__ptr                         ;
/// Size of the dynamic array.
    int                                  __size                        ;
/// Offset for partially transmitted arrays (uncomment only when required).
//  int                                  __offset                      ;
};

/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns1  service name:	MLWebServiceSoapBinding 
//gsoap ns1  service type:	MLWebService 
//gsoap ns1  service port:	http://aliendb1:6004/axis/services/MLWebService 
//gsoap ns1  service namespace:	urn:lia.ws 
//gsoap ns1  service transport:	http://schemas.xmlsoap.org/soap/http 

//gsoap ns3  service name:	MLWebServiceSoapBinding 
//gsoap ns3  service type:	MLWebService 
//gsoap ns3  service port:	http://aliendb1:6004/axis/services/MLWebService 
//gsoap ns3  service namespace:	http://ws.lia 
//gsoap ns3  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_bindings Bindings
  - @ref MLWebServiceSoapBinding
  - @ref MLWebServiceSoapBinding

*/

/**

@page MLWebServiceSoapBinding Binding "MLWebServiceSoapBinding"

@section MLWebServiceSoapBinding_operations Operations of Binding  "MLWebServiceSoapBinding"
  - @ref ns1__getValues
  - @ref ns1__getConfiguration
  - @ref ns1__getLatestConfiguration
  - @ref ns1__getLastValues
  - @ref ns1__getFilteredLastValues

@section MLWebServiceSoapBinding_ports Endpoints of Binding  "MLWebServiceSoapBinding"
  - http://aliendb1:6004/axis/services/MLWebService

Note: use wsdl2h option -N to change the service binding prefix name

*/

/**

@page MLWebServiceSoapBinding Binding "MLWebServiceSoapBinding"

@section MLWebServiceSoapBinding_operations Operations of Binding  "MLWebServiceSoapBinding"
  - @ref ns3__networkMeasurementSet

@section MLWebServiceSoapBinding_ports Endpoints of Binding  "MLWebServiceSoapBinding"
  - http://aliendb1:6004/axis/services/MLWebService

Note: use wsdl2h option -N to change the service binding prefix name

*/

/******************************************************************************\
 *                                                                            *
 * MLWebServiceSoapBinding                                                    *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * ns1__getValues                                                             *
 *                                                                            *
\******************************************************************************/

/// Operation response struct "ns1__getValuesResponse" of service binding "MLWebServiceSoapBinding" operation "ns1__getValues"
struct ns1__getValuesResponse
{
    ArrayOf_USCOREtns1_USCOREResult*    _getValuesReturn;
};

/// Operation "ns1__getValues" of service binding "MLWebServiceSoapBinding"

/**

Operation details:

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns1__getValues(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    std::string                         in0,
    std::string                         in1,
    std::string                         in2,
    std::string                         in3,
    LONG64                              in4,
    LONG64                              in5,
    // response parameters:
    struct ns1__getValuesResponse&
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns1__getValues(
    struct soap *soap,
    // request parameters:
    std::string                         in0,
    std::string                         in1,
    std::string                         in2,
    std::string                         in3,
    LONG64                              in4,
    LONG64                              in5,
    // response parameters:
    struct ns1__getValuesResponse&
  );
@endcode

C++ proxy class (defined in soapMLWebServiceSoapBindingProxy.h):
  class MLWebServiceSoapBinding;

Note: use soapcpp2 option '-i' to generate improved proxy and service classes;

*/

//gsoap ns1  service method-style:	getValues rpc
//gsoap ns1  service method-encoding:	getValues http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns1  service method-action:	getValues ""
int ns1__getValues(
    std::string                         _in0,	///< Request parameter
    std::string                         _in1,	///< Request parameter
    std::string                         _in2,	///< Request parameter
    std::string                         _in3,	///< Request parameter
    LONG64                              _in4,	///< Request parameter
    LONG64                              _in5,	///< Request parameter
    struct ns1__getValuesResponse      &	///< Response struct parameter
);

/******************************************************************************\
 *                                                                            *
 * ns1__getConfiguration                                                      *
 *                                                                            *
\******************************************************************************/

/// Operation response struct "ns1__getConfigurationResponse" of service binding "MLWebServiceSoapBinding" operation "ns1__getConfiguration"
struct ns1__getConfigurationResponse
{
    ArrayOf_USCOREtns1_USCOREWSConf*    _getConfigurationReturn;
};

/// Operation "ns1__getConfiguration" of service binding "MLWebServiceSoapBinding"

/**

Operation details:

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns1__getConfiguration(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    LONG64                              in0,
    LONG64                              in1,
    // response parameters:
    struct ns1__getConfigurationResponse&
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns1__getConfiguration(
    struct soap *soap,
    // request parameters:
    LONG64                              in0,
    LONG64                              in1,
    // response parameters:
    struct ns1__getConfigurationResponse&
  );
@endcode

C++ proxy class (defined in soapMLWebServiceSoapBindingProxy.h):
  class MLWebServiceSoapBinding;

Note: use soapcpp2 option '-i' to generate improved proxy and service classes;

*/

//gsoap ns1  service method-style:	getConfiguration rpc
//gsoap ns1  service method-encoding:	getConfiguration http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns1  service method-action:	getConfiguration ""
int ns1__getConfiguration(
    LONG64                              _in0,	///< Request parameter
    LONG64                              _in1,	///< Request parameter
    struct ns1__getConfigurationResponse&	///< Response struct parameter
);

/******************************************************************************\
 *                                                                            *
 * ns1__getLatestConfiguration                                                *
 *                                                                            *
\******************************************************************************/

/// Operation response struct "ns1__getLatestConfigurationResponse" of service binding "MLWebServiceSoapBinding" operation "ns1__getLatestConfiguration"
struct ns1__getLatestConfigurationResponse
{
    ArrayOf_USCOREtns1_USCOREWSConf*    _getLatestConfigurationReturn;
};

/// Operation "ns1__getLatestConfiguration" of service binding "MLWebServiceSoapBinding"

/**

Operation details:

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns1__getLatestConfiguration(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    std::string                         in0,
    // response parameters:
    struct ns1__getLatestConfigurationResponse&
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns1__getLatestConfiguration(
    struct soap *soap,
    // request parameters:
    std::string                         in0,
    // response parameters:
    struct ns1__getLatestConfigurationResponse&
  );
@endcode

C++ proxy class (defined in soapMLWebServiceSoapBindingProxy.h):
  class MLWebServiceSoapBinding;

Note: use soapcpp2 option '-i' to generate improved proxy and service classes;

*/

//gsoap ns1  service method-style:	getLatestConfiguration rpc
//gsoap ns1  service method-encoding:	getLatestConfiguration http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns1  service method-action:	getLatestConfiguration ""
int ns1__getLatestConfiguration(
    std::string                         _in0,	///< Request parameter
    struct ns1__getLatestConfigurationResponse&	///< Response struct parameter
);

/******************************************************************************\
 *                                                                            *
 * ns1__getLastValues                                                         *
 *                                                                            *
\******************************************************************************/

/// Operation response struct "ns1__getLastValuesResponse" of service binding "MLWebServiceSoapBinding" operation "ns1__getLastValues"
struct ns1__getLastValuesResponse
{
    ArrayOf_USCOREtns1_USCOREResult*    getLastValuesReturn;
};

/// Operation "ns1__getLastValues" of service binding "MLWebServiceSoapBinding"

/**

Operation details:

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns1__getLastValues(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    // response parameters:
    struct ns1__getLastValuesResponse&
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns1__getLastValues(
    struct soap *soap,
    // request parameters:
    // response parameters:
    struct ns1__getLastValuesResponse&
  );
@endcode

C++ proxy class (defined in soapMLWebServiceSoapBindingProxy.h):
  class MLWebServiceSoapBinding;

Note: use soapcpp2 option '-i' to generate improved proxy and service classes;

*/

//gsoap ns1  service method-style:	getLastValues rpc
//gsoap ns1  service method-encoding:	getLastValues http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns1  service method-action:	getLastValues ""
int ns1__getLastValues(
    struct ns1__getLastValuesResponse  &	///< Response struct parameter
);

/******************************************************************************\
 *                                                                            *
 * ns1__getFilteredLastValues                                                 *
 *                                                                            *
\******************************************************************************/

/// Operation response struct "ns1__getFilteredLastValuesResponse" of service binding "MLWebServiceSoapBinding" operation "ns1__getFilteredLastValues"
struct ns1__getFilteredLastValuesResponse
{
    ArrayOf_USCOREtns1_USCOREResult*    _getFilteredLastValuesReturn;
};

/// Operation "ns1__getFilteredLastValues" of service binding "MLWebServiceSoapBinding"

/**

Operation details:

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns1__getFilteredLastValues(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    std::string                         in0,
    std::string                         in1,
    std::string                         in2,
    std::string                         in3,
    // response parameters:
    struct ns1__getFilteredLastValuesResponse&
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns1__getFilteredLastValues(
    struct soap *soap,
    // request parameters:
    std::string                         in0,
    std::string                         in1,
    std::string                         in2,
    std::string                         in3,
    // response parameters:
    struct ns1__getFilteredLastValuesResponse&
  );
@endcode

C++ proxy class (defined in soapMLWebServiceSoapBindingProxy.h):
  class MLWebServiceSoapBinding;

Note: use soapcpp2 option '-i' to generate improved proxy and service classes;

*/

//gsoap ns1  service method-style:	getFilteredLastValues rpc
//gsoap ns1  service method-encoding:	getFilteredLastValues http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns1  service method-action:	getFilteredLastValues ""
int ns1__getFilteredLastValues(
    std::string                         _in0,	///< Request parameter
    std::string                         _in1,	///< Request parameter
    std::string                         _in2,	///< Request parameter
    std::string                         _in3,	///< Request parameter
    struct ns1__getFilteredLastValuesResponse&	///< Response struct parameter
);

/******************************************************************************\
 *                                                                            *
 * MLWebServiceSoapBinding                                                    *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * ns3__networkMeasurementSet                                                 *
 *                                                                            *
\******************************************************************************/

/// Operation response struct "ns3__networkMeasurementSetResponse" of service binding "MLWebServiceSoapBinding" operation "ns3__networkMeasurementSet"
struct ns3__networkMeasurementSetResponse
{
    ns2__Map*                           _networkMeasurementSetReturn;
};

/// Operation "ns3__networkMeasurementSet" of service binding "MLWebServiceSoapBinding"

/**

Operation details:

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns3__networkMeasurementSet(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    ns2__Map*                           in0,
    // response parameters:
    struct ns3__networkMeasurementSetResponse&
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns3__networkMeasurementSet(
    struct soap *soap,
    // request parameters:
    ns2__Map*                           in0,
    // response parameters:
    struct ns3__networkMeasurementSetResponse&
  );
@endcode

C++ proxy class (defined in soapMLWebServiceSoapBindingProxy.h):
  class MLWebServiceSoapBinding;

Note: use soapcpp2 option '-i' to generate improved proxy and service classes;

*/

//gsoap ns3  service method-style:	networkMeasurementSet rpc
//gsoap ns3  service method-encoding:	networkMeasurementSet http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns3  service method-action:	networkMeasurementSet ""
int ns3__networkMeasurementSet(
    ns2__Map*                           _in0,	///< Request parameter
    struct ns3__networkMeasurementSetResponse&	///< Response struct parameter
);

/* End of soapMLWebService.h */
