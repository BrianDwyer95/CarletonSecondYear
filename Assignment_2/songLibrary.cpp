#include "songLibrary.h"

using namespace std;

SongLibrary::SongLibrary(){
    vector<Song*> library;
}

SongLibrary::~SongLibrary(){
    for(unsigned int i = 0; i< library.size(); ++i){
        delete library[i];
    }
}

void SongLibrary::addSong(Song* song){
    //like jesus idk what im doing     
    library.push_back(song);
}

void SongLibrary::printSongs(void){
    for(unsigned int i = 0; i < library.size(); ++i){
        library[i] -> printSong();
    }
}

void SongLibrary::removeSong(Song* song){
    for(unsigned int i = 0; i < library.size(); ++i){
        Song * tempSong = library[i];
        if(tempSong == song){ 
            library.erase(library.begin() + i);
            delete tempSong;
        }
    } 
}

Song * SongLibrary::getSong(int songID){
    for(unsigned int i = 0; i < library.size(); ++i){
          Song * tempSong = library[i];
          if(tempSong -> getSongID() == songID) return tempSong;
    }
    return NULL;
}
