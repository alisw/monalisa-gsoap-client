//////////////////////////////////////////////////////////////
// Author: Andreas-J. Peters @ CERN 2006
// email: Andreas.Joachim.Peters@cern.ch
//////////////////////////////////////////////////////////////

#include "monalisawsclient.h"
#include "soapH.h" // obtain the generated stub 
#include "MLWebServiceSoapBinding.nsmap" // obtain the namespace mapping table 
 


//////////////////////////////////////////////////////////////
// getValues(...);
// - return's the ML values from the given period
// - the result is a map which can be accessed like:
//     result['<farm>']['<cluster>']['<node>']['<parameter>'][<ml-time>]
//////////////////////////////////////////////////////////////

MonaLisaWsClient::Tresult* MonaLisaWsClient::getValues(const char* farmName, const char* clusterName, const char* nodeName, const char* paramName, long fromTime, long toTime, bool debug) {   
   struct soap soap; // gSOAP runtime environment 
   float quote; 
   
   struct ns1__getValuesResponse resp2;
   
   result.clear();
   soap_init(&soap); // initialize runtime environment (only once) 
   if (soap_call_ns1__getValues(&soap, (serviceUrl+std::string("/axis/services/MLWebService")).c_str(),NULL, (std::string)farmName, (std::string)clusterName, (std::string)nodeName, (std::string)paramName, (long long int)fromTime, (long long int)toTime, resp2) == SOAP_OK) {
     
     if (debug) {
       printf("number of results: %d\n",resp2._getValuesReturn->__size);
     }
     for(int i=0;i<resp2._getValuesReturn->__size;i++) {
       ns3__Result *results = resp2._getValuesReturn->__ptr[i];
       time_t epochtime = static_cast<time_t> (results->time/1000);
       char tstr[24];
       ctime_r(&epochtime,tstr); tstr[24]='\0';
       if (debug) {
	 printf("farm: %s\n |----cluster: %s\n      |----node: %s  (time: %lld ms = %s)\n",
	      results->farmName->c_str(),results->clusterName->c_str(),results->nodeName->c_str(),
	      results->time,tstr);
       }
       ns2__Map* params = results->param;       
       for(int j=0 ; j < params->item.size() ; j++) {
	 if (debug) {
	   printf("           |----%s\tValue: %s\n",(((xsd__string*)(params->item[j]->key))->__item).c_str(),(params->item[j]->value)->__item );
	 }
	 result[results->farmName->c_str()][results->clusterName->c_str()][results->nodeName->c_str()][(((xsd__string*)(params->item[j]->key))->__item).c_str()][static_cast<time_t> (results->time)] = std::string((params->item[j]->value)->__item);
       } // for
     } // for	
   } else { // an error occurred 
     soap_print_fault(&soap, stderr); // display the SOAP fault message on the stderr stream 
   } // if - else
   
   soap_destroy(&soap); // delete deserialized class instances (for C++ only) 
   soap_end(&soap); // remove deserialized data and clean up 
   soap_done(&soap); // detach the gSOAP environment 
   return &result;
 }

//////////////////////////////////////////////////////////////
// getFilteredLastValues(..);
// - return's only the last ML value
// - the result is a map which can be accessed like:
//     result['<farm>']['<cluster>']['<node>']['<parameter>'][<ml-time>]
//////////////////////////////////////////////////////////////

MonaLisaWsClient::Tresult* MonaLisaWsClient::getFilteredLastValues(const char* farmName, const char* clusterName, const char* nodeName, const char* paramName, bool debug) { 
   struct soap soap; // gSOAP runtime environment 
   float quote; 
   
   struct ns1__getFilteredLastValuesResponse resp2;
   
   result.clear();
   soap_init(&soap); // initialize runtime environment (only once) 
   if (soap_call_ns1__getFilteredLastValues(&soap, (serviceUrl+std::string("/axis/services/MLWebService")).c_str(),NULL, (std::string)farmName, (std::string)clusterName, (std::string)nodeName, (std::string)paramName, resp2) == SOAP_OK) {
     
     if (debug) {
       printf("number of results: %d\n",resp2._getFilteredLastValuesReturn->__size);
     }
     for(int i=0;i<resp2._getFilteredLastValuesReturn->__size;i++) {
       ns3__Result *results = resp2._getFilteredLastValuesReturn->__ptr[i];
       time_t epochtime = static_cast<time_t> (results->time/1000);
       char tstr[24];
       ctime_r(&epochtime,tstr); tstr[24]='\0';
       if (debug) {
	 printf("farm: %s\n |----cluster: %s\n      |----node: %s  (time: %lld ms = %s)\n",
	      results->farmName->c_str(),results->clusterName->c_str(),results->nodeName->c_str(),
	      results->time,tstr);
       }
       ns2__Map* params = results->param;       
       for(int j=0 ; j < params->item.size() ; j++) {
	 if (debug) {
	   printf("           |----%s\tValue: %s\n",(((xsd__string*)(params->item[j]->key))->__item).c_str(),(params->item[j]->value)->__item );
	 }
	 result[results->farmName->c_str()][results->clusterName->c_str()][results->nodeName->c_str()][(((xsd__string*)(params->item[j]->key))->__item).c_str()][static_cast<time_t> (results->time)] = std::string((params->item[j]->value)->__item);
       } // for
     } // for	
   } else { // an error occurred 
     soap_print_fault(&soap, stderr); // display the SOAP fault message on the stderr stream 
   } // if - else
   
   soap_destroy(&soap); // delete deserialized class instances (for C++ only) 
   soap_end(&soap); // remove deserialized data and clean up 
   soap_done(&soap); // detach the gSOAP environment 
   return &result;
 }



void MonaLisaWsClient::Dump() {
  Tresult::iterator riter;


  for (riter=result.begin(); riter!=result.end(); ++riter) {
    Tfarm::iterator fiter;
    for (fiter= (riter->second).begin(); fiter!=(riter->second).end(); ++fiter) {
      Tcluster::iterator citer;
      for (citer= (fiter->second).begin(); citer!=(fiter->second).end(); ++citer) {
	Tnode::iterator niter;
	for (niter= (citer->second).begin(); niter!=(citer->second).end(); ++niter) {
	  std::cout << riter->first << "::" << fiter->first << "::" << citer->first << "::" << niter->first << std::endl;
	  Tparameter::iterator piter;
	  for (piter= (niter->second).begin(); piter!=(niter->second).end(); ++piter) {
	    std::cout << "           " << piter->first << " : " << piter->second << std::endl;
	  }
	}
      }
    }
  }
}
