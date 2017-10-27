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
        void printTracks(void);
    private:
        TrackLibrary(TrackLibrary & anTracks){}        
        vector<Track*> tracks;
};