//////////////////////////////////////////////////////////////
// Author: Andreas-J. Peters @ CERN 2006
// email: Andreas.Joachim.Peters@cern.ch
//////////////////////////////////////////////////////////////

#include <string>
#include <map>
#include <list>

class MonaLisaWsClient {
 public:
  MonaLisaWsClient(const char* surl=0) {
    serviceUrl=surl;
  };
  virtual ~MonaLisaWsClient() {};
  
  typedef std::map<time_t,std::string> Tparameter;
  typedef std::map<std::string,Tparameter> Tnode;
  typedef std::map<std::string,Tnode> Tcluster;
  typedef std::map<std::string,Tcluster> Tfarm;
  typedef std::map<std::string,Tfarm> Tresult;
  
  Tresult result;
  std::string serviceUrl;

  Tresult* getValues(const char* farmName, const char* clusterName, const char* nodeName, const char* paramName, long fromTime, long toTime, bool debug=false);
  Tresult* getFilteredLastValues(const char* farmName, const char* clusterName, const char* nodeName, const char* paramName, bool debug=false);
  void Dump();
  
};
