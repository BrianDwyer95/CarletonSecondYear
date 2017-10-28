#include <string>
#include <vector>
#include "Playlist.h"


using namespace std;

class PlaylistLibrary{
    public:
        PlaylistLibrary();
        ~PlaylistLibrary();
        void addPlaylist(Playlist *playlist);
        Playlist * getPlaylist(int user_id);
        void removePlaylist(Playlist *playlist);
        void displayPlaylists();
    private:
        PlaylistLibrary(Playlist& playlist);
        vector<Playlist*> library;
};
