#ifndef _recording_h
#define _recording_h

using namespace std;

#include <string>
#include <iostream>
#include <vector>
#include "trackLibrary.h"

class Recording{
    public:
        Recording(int recordingId, string title, string artist, string year, string producer);
        Recording(Recording& anRecording);
        ~Recording();
        int    getRecordingId(void);
        string getTitle(void);
        string getArtist(void);
        string getYear(void);
        string getProducer(void);
        void   printRecord(ostream & out);
        friend ostream & operator<<(ostream & out, Recording & r) {
            r.printRecord(out);
            return out;
        }
                
    private:
        int recordingId;
        string  title;
        string  artist;
        string  year;
        string  producer;
};


#endif
