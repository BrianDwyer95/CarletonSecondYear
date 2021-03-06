#ifndef _TrackLibrary_h
#define _TrackLibrary_h

#include "track.h"
#include <vector>

class TrackLibrary{
    public:
        TrackLibrary();
        ~TrackLibrary();
        Track * getTrackByID(int trackID);
        Track * getTrackBySongID(int songID);
        void addTrack(Track *track);
        void removeTrack(Track *track);
        vector<Track*>* getTrackLib(void);
        void printTracks(ostream & out);     
        void   printTracksByAlbumID(ostream& out, int albumID);        
        friend ostream & operator<<(ostream & out, TrackLibrary & lib) {
            lib.printTracks(out);
            return out;
        }
    private:
        TrackLibrary(TrackLibrary & anTracks){}        
        vector<Track*> tracks;
};

#endif