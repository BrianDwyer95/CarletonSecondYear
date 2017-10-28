#include <string>

using namespace std;

class Playlist{
    public:
        Playlist(int user_id, string playlist_name);
        Playlist(Playlist& playlist);
        Playlist & operator=(const Playlist & playlist) {
            if(&playlist != this) {
               delete &this -> user_id;
               delete &this -> playlist_name;
               this -> playlist_name = playlist.playlist_name;
               this -> user_id = playlist.user_id;
            }
            return *this;
        }
        ~Playlist();
        string getName(void);
        int getID(void);
        void displayPlaylist(void);
    private:
        int user_id;
        string playlist_name;
};
