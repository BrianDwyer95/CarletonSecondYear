#include "song.h"
#include <string>
#include <vector>

using namespace std;

class SongLibrary{
    public:
        SongLibrary();
        ~SongLibrary();
        void addSong(Song *song);
        Song * getSong(int songID);
        void removeSong(Song *song);
        void printSongs();
    private:
        SongLibrary(SongLibrary& songLib);
        vector<Song*> library;
};