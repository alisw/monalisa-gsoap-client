#include "monalisawsclient.h"


int main(int argc, char* argv[]) {
  if (argc < 8) {
    fprintf(stderr,"You have to give the parameters <web-service-url> <farm> <cluster> <node> <param> <from-time> <to-time> [<debug>]\n");
    fprintf(stderr,"Try f.e.: ./testWS http://lxgate35.cern.ch:61004 arda_cms_ml MonaLisa localhost \\* -100000 -1 1\n");
    exit(-1);
  }
  int i=0;
  for (int i=0; i<argc; i++) {
    printf("Argv[%d] = %s\n",i,argv[i]);
  }
	  
  MonaLisaWsClient* client= new MonaLisaWsClient(argv[1]);
  int debug=0;
  if (argc == 9) {
    debug=atoi(argv[8]);
  }

  printf("------------------------------------- get Values ------------------------------------------------\n");
  MonaLisaWsClient::Tresult* result = client->getValues(argv[2],argv[3],argv[4],argv[5],atol(argv[6]),atol(argv[7]),debug);
  client->Dump();
  printf("------------------------------------- get FilteredLastValues ------------------------------------\n");
  result =  client->getFilteredLastValues(argv[2],argv[3],argv[4],argv[5],debug);
  client->Dump();
  delete client;
}
