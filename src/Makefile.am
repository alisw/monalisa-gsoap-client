AUTOMAKE_OPTIONS = foreign 1.4

# needed for 64bit long long int
CXXFLAGS = -D_GNU_SOURCE 

bin_PROGRAMS = testWS

lib_LTLIBRARIES = libmonalisawsclient.la
include_HEADERS = monalisawsclient.h

libmonalisawsclient_la_SOURCES = soapC.cpp soapH.h monalisawsclient.cxx monalisawsclient.h stdsoap2.cpp soapClient.cpp  

libmonalisawsclient_la_LIBADD = 
libmonalisawsclient_la_LDFLAGS = -version-info 1:0:0
testWS_SOURCES = testWS.cxx
testWS_LDADD = -L./ -lmonalisawsclient -lgcc

EXTRA_DIST = stdsoap2.cpp stdsoap2.h stlvector.h MLWebServiceSoapBinding.getConfiguration.req.xml MLWebServiceSoapBinding.getConfiguration.res.xml \
	MLWebServiceSoapBinding.getFilteredLastValues.req.xml \
	MLWebServiceSoapBinding.getFilteredLastValues.res.xml \
	MLWebServiceSoapBinding.getLastValues.req.xml \
	MLWebServiceSoapBinding.getLastValues.res.xml \
	MLWebServiceSoapBinding.getLatestConfiguration.req.xml \
	MLWebServiceSoapBinding.getLatestConfiguration.res.xml \
 	MLWebServiceSoapBinding.getValues.req.xml \
	MLWebServiceSoapBinding.getValues.res.xml \
	MLWebServiceSoapBinding.networkMeasurementSet.req.xml \
	MLWebServiceSoapBinding.networkMeasurementSet.res.xml \
	MLWebServiceSoapBinding.nsmap \
	soapH.h \
	soapMLWebService.h \
	soapMLWebServiceSoapBindingProxy.h \
	soapStub.h 



soapC.cpp:
	wsdl2h -I. -o soapMLWebService.h "$(WEBSERVICE)?wsdl"; $(SOAP_CPP) -C  soapMLWebService.h


clean:	
	rm -f soap* 
	rm -f  *.xml
	rm -f *.nsmap
