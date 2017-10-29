//Created By:Sayar AL Attar 100899446   Brian Dwyer 100937372
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>


using namespace std;

class UserInterface{
    //flags for UI behaviour
    int isRunning,logRunning;
    //vector to store logFile
    vector<string> usrLog;
    public:
        UserInterface ();
        void start();
        //passing string stream by reference
        void parseConsoleCommand(stringstream& ss);
        void startLog();
        void stopLog();
        void printLog();
        void outputLog(string fileName);
        void commentLog(stringstream& ss);
        void clearLog();
        void displayHelp();
        void readScript(stringstream& ss);
        void parseInformation(string information);
};
