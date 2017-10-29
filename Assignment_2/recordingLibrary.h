#ifndef _recordingLibrary_h
#define _recordingLibrary_h

using namespace std;

#include <string>
#include <iostream>
#include <vector>

class RecordingLibrary{
    public:
        RecordingLibrary();
        ~RecordingLibrary();
        void addRecording(Recording *record);
        void removeRecording(Recording *record);
        vector<Recording*> * getRecords();
        Recording* getRecord(int recordID);
        bool checkRecordingByID(int trackID);
        void printRecordings();

    private:
        vector<Recording*> records;
};

#endif