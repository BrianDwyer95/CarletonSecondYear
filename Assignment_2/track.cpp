#include "track.h"

Track::Track(int trackID, string mp3, int albumID, int songID, int trackNumber){
    this -> trackID     = trackID;
    this -> mp3         = mp3;
    this -> albumID     = albumID;
    this -> songID      = songID;
    this -> trackNumber = trackNumber;
}

Track::Track(Track & anTrack){
    this -> trackID     = anTrack.trackID;    
    this -> mp3         = anTrack.mp3;
    this -> albumID     = anTrack.albumID;
    this -> songID      = anTrack.songID;
    this -> trackNumber = anTrack.trackNumber;
}


Track::~Track(){
    this -> tSong = NULL;
}

void Track::addSongToTrack(Song * s){
    if(this -> tSong == NULL){
        this -> tSong = s;
    }else{
        cout << "Song has already been defined for track: " << this -> trackID << endl;
    }
}

//if integer passed in is 1 then it will remove the song from the Song Library

void Track::removeSongFromTrack(){
        this -> tSong = NULL;
}

//Getters and such
string Track::getFileName(void){
    return mp3;
}
int Track::getTrackID(void){
    return trackID;
}
int Track::getSongID(void){
    return songID;
}
int Track::getTrackNumber(void){
    return trackNumber;
}
int Track::getAlbumID(void){
    return albumID;
}

void Track::printTrack(ostream & out){
    out << "MP3 file: " << mp3 << " SongID: " << songID << " Track Number: " << trackNumber << endl;
}