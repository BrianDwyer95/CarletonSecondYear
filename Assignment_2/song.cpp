#include "song.h"
#include <iostream>

using namespace std;

Song::Song(int songID,string title, string composer){
    this -> songID = songID;
    this -> title = title;
    this -> composer = composer;
}

Song::Song(Song& anSong){
    songID   = anSong.songID;
    title    = anSong.title;
    composer = anSong.composer;
}

Song::~Song(){
 cout << "Delete song" << endl;
}

//gets the title
string Song::getTitle(void){
    return title;
}

//Gets the composer
string Song::getComposer(void){
    return composer;
}

//Gets the ID
int Song::getSongID(void){
    return songID;
}