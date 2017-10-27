#include <string>
using namespace std;

class Song{
    public:
        Song(int songID,string title, string composer);
        Song(Song& song);    

        Song & operator=(const Song & anSong) {
            if(&anSong != this) {
               delete &this -> title;
               delete &this -> composer;
               this -> title = anSong.title;
               this -> composer = anSong.composer;     
            }
            return *this;
        }        
        ~Song();
        string getTitle(void);
        string getComposer(void);
        int getSongID(void);
    private:
        int songID;
        string title;
        string composer;
};