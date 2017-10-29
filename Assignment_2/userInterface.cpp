//Created By:Sayar AL Attar 100899446   Brian Dwyer 100937372
#include "userInterface.h"

using namespace std;
/*Helper functions */
UserInterface::UserInterface(){
    isRunning = 1;
    logRunning = 0;
}

//Written by: Brian Dwyer
//Function Name: startLog
//purpose: sets isLogging flag to 1
//input:  N/A
//output: N/A
//Comments: This is ugly. and makes me sad dont judge me.
void UserInterface::startLog(){
    cout << "starting log" << endl;
    this -> logRunning = 1;
}

//Written by: Brian Dwyer
//Function Name: stopLog
//purpose: sets the isLogging flag to 0
//input:  N/A
//output: N/A
//Comments:
void UserInterface::stopLog(){
    cout << "stopping log" << endl;
    this -> logRunning = 0;
}

//Written by: Brian Dwyer
//Function Name: clearLog
//purpose: clears the log buffer (string vector)
//input:  N/A
//output: N/A
//Comments:
void UserInterface::clearLog(){
    cout << "clearing log" << endl;
    this -> usrLog.clear();
}

/* File IO functions */
//Written by: Brian Dwyer
//Function Name: Display Help
//purpose: displays help
//input:  N/A
//output: N/A
//Comments:
void UserInterface::displayHelp(){
	ifstream helpFile("HelpFile.txt", ifstream::in);
        if(!helpFile){
            cout << "ERROR: help file not found please ensure files are correctly installed";
            exit(1);
        }
        string contents;
    	while(getline(helpFile, contents)){
            cout << contents << endl;
        }
        helpFile.close();
}

//Written by: Brian Dwyer
//Function Name: printLog
//purpose: prints the log to standard out when requested by user
//input:  N/A
//output: N/A
//Comments:
void UserInterface::printLog(){
    if(usrLog.size() > 0){
        for(unsigned int i = 0; i < usrLog.size(); i++){
            cout << usrLog[i] << endl;
        }
    }else{
        cout << "Log is empty nothing to display" << endl;
    }
}
//Written by: Brian Dwyer
//Function Name: outputLog
//purpose: writes the log to an output file, with the name specified by user
//         if no file name is provided then the default "logFile.txt" is used
//input:  string fileName
//output: N/A
//Comments:
void UserInterface::outputLog(string fileName){
    if(fileName.empty()) fileName = "logFile.txt";
    ofstream file_1(fileName, ofstream::out);
    if(!file_1){
        cout << "Output file failed";
    }else{
        for(unsigned int i = 0; i < usrLog.size(); i++){
            file_1 << usrLog[i] << endl;
        }
    }
   file_1.close();
}

//Written by: Brian Dwyer
//Function Name: readScript
//purpose: redirects stdin to read from a file and then parse the command given
//input:  reference to string stream
//output: N/A
//Comments: Sayar, redirect \ add your parser object to this function as well as the redirection in the UI
void UserInterface::readScript(stringstream& ss){
    string scriptFileName;
    ss >> scriptFileName;
    ifstream scriptFile(scriptFileName, ifstream::in);
    if(!scriptFile){
        cout << "script file not found";
    }else{
        string contents;
        while(getline(scriptFile, contents)){
          parseInformation(contents);
        }
    }
    scriptFile.close();
}


//Written by: Brian Dwyer
//Function Name: commentLog
//purpose: writes a user comment into the log stream
//input:  reference to string stream
//output: N/A
//Comments:
void UserInterface::commentLog(stringstream& ss){
    string iterator, comment;
    comment.append("#");
    while(ss >> iterator){
        comment.append(iterator + " ");
    }
    this -> usrLog.push_back(comment);
}

//function reads in string commands and parses them by input of dashes to separate input
void UserInterface::parseInformation(string input){
  //Tell the function that whenever a '-' is spotted that it is a piece of data
  string delimiter = "-";
  vector<string> finished;
  size_t position = 0;
  string word;

  if(input.find("add ") == 0 || input.find("remove ") == 0 || input.find("show ") == 0){
    //Loop goes through the input and arranges it into the final vector
    while ((position = input.find(delimiter)) != string::npos) {
      word = input.substr(0, position);
      finished.push_back(word);
      input.erase(0, position + delimiter.length());
    }
    finished.push_back(input);

    for(unsigned i=0; i<finished.size(); i++){
      //output the parsed commands
      cout<<finished[i]<<endl;
    }
    }else{
      cout<<"Error: Invalid input."<<endl;
      return;
    }

}

//Written by: Brian Dwyer
//Function Name: parseConsoleControl
//purpose: takes in the console commands and determines which to execute
//input:  N/A
//output: N/A
//Comments: This is ugly. and makes me sad dont judge me.
void UserInterface::parseConsoleCommand(stringstream& ss){
    string command,fileName;
    ss >> command;
    if(command.compare(".quit") == 0){
        this -> isRunning = 0;
    }
    else if(command.compare(".help") == 0){
        displayHelp();
    }
    else if(command.compare(".stopLog") == 0){
        stopLog();
    }
    else if(command.compare(".startLog") == 0){
        startLog();
    }
    else if(command.compare(".printLog") == 0){
        printLog();
    }
    else if(command.compare(".clearLog") == 0){
        clearLog();
    }
    else if(command.compare(".commentLog") == 0){
        commentLog(ss);
    }
    else if(command.compare(".readScript") == 0){
        readScript(ss);
    }
    else if(command.compare(".outputLog") == 0){
        ss >> fileName;
        outputLog(fileName);
    }
    else{
        cout << "UNKNOWN COMMAND: " << command << endl;
    }
}

//Written by: Brian Dwyer
//Function Name: start
//purpose: dispalys the UI the end user sees.
//takes the commands and determines which parser to send them to
//input:  N/A
//output: N/A
//Comments:
void UserInterface::start(){
    cout << "Welcome, type .help for command information" << endl;
    while(isRunning != 0){
        //storeinput
        string input;
        //displaying prompt get input
        cout << "$" ;
        getline(cin,input);
        stringstream ss(input);

        //in case the user doesn't put anything
        if(input.empty()) continue;
        if(input[0] == '.'){
            parseConsoleCommand(ss);
        }else{
            if(logRunning){
                this -> usrLog.push_back(input);
            }
            parseInformation(input);
        }

        }
    }
