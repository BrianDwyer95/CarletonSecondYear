
#include <string>
#include <vector>
#include "song.h"

using namespace std;

class SongLibrary{
    public:
        SongLibrary();
        ~SongLibrary();
        void addSong(Song *song);
        vector<Song*> * getSongLib(void);
        Song * getSong(int songID);
        void removeSong(Song *song);
        void printSongs(ostream & out);
        friend ostream & operator<<(ostream & out, SongLibrary & lib) {
            lib.printSongs(out);
            return out;
        }
    private:
        SongLibrary(SongLibrary& songLib);
        vector<Song*> library;
};


