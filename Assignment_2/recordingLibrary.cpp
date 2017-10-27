#include "recordingLibrary.h"


RecordingLibrary::RecordingLibrary(){
    vector<Recording*> records;
}

RecordingLibrary::~RecordingLibrary(){
    for(unsigned int i = 0; i < records.size(); ++i){
        delete records[i];
    }
}

vector<Record*> * RecordingLibrary::getRecordLib(){
    return &records;
}

void RecordingLibrary::addRecord(Recording* record){
    //like jesus idk what im doing     
    records.push_back(record);
}

void RecordingLibrary::removeRecord(Record* r){
    for(unsigned int i = 0; i < library.size(); ++i){
        Record * tempSong = records[i];
        if(tempSong == r){ 
            records.erase(records.begin() + i);
            delete tempSong;
        }
    } 
}

Record * RecordingLibrary::getRecord(int recordID){
    for(unsigned int i = 0; i < library.size(); ++i){
          Record * tempRecord = records[i];
          if(tempRecord -> getSongID() == recordID) return tempRecord;
    }
    return NULL;
}


void RecordingLibrary::printRecords(ostream & out){
    for(unsigned int i = 0; i < library.size(); ++i){
        Song * tempRecord = records[i];
        out << *tempRecord;
    }
}
