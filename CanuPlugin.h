#ifndef CANUPLUGIN_H
#define CANUPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class CanuPlugin : public Plugin
{
public: 
 std::string toString() {return "Canu";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
 std::string dataFile;
 std::string method;
 std::string genomeSize;
 std::string dataType;
};

#endif
