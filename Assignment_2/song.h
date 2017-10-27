#include <string>
#include <iostream>

using namespace std;

class Song{
    public:
        Song(int songID,string title, string composer);
        Song(Song& song);         
        ~Song();
        string  getTitle(void);
        string  getComposer(void);
        int     getSongID(void);
        void    printSong(ostream & ostr);
        
        friend ostream & operator<<(ostream & out, Song & s) {
            s.printSong(out);
            return out;
        }

        Song & operator=(Song & anSong) {
            if(&anSong != this) {
               delete &this -> title;
               delete &this -> composer;
               this -> title = anSong.title;
               this -> composer = anSong.composer;     
            }
            return *this;
        }
                
    private:
        int songID;
        string title;
        string composer;
};



 