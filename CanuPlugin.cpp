#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "CanuPlugin.h"


void CanuPlugin::input(std::string file) {
	 inputfile = file;
 std::ifstream ifile(inputfile.c_str(), std::ios::in);


 std::string temp;
 ifile >> dataFile;
 ifile >> method; 
 ifile >> genomeSize;
 ifile >> dataType;
}

void CanuPlugin::run() {
   
}

void CanuPlugin::output(std::string file) {
	 std::string outputfile = file;
	 std::string command = "canu -p "+method+" -d "+outputfile+" genomeSize="+genomeSize+" -"+dataType+" "+std::string(PluginManager::prefix())+"/"+dataFile;
	 std::cout << command << std::endl;
 //canu -p canu -d 01_Canu genomeSize=7.2m -nanopore-raw $1
 system(command.c_str());
}

PluginProxy<CanuPlugin> CanuPluginProxy = PluginProxy<CanuPlugin>("Canu", PluginManager::getInstance());
