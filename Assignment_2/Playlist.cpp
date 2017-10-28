#include "Playlist.h"
#include <iostream>

using namespace std;

Playlist::Playlist(int user_id, string playlist_name){
    this -> user_id = user_id;
    this -> playlist_name = playlist_name;
}

Playlist::Playlist(Playlist& playlist){
    user_id = playlist.user_id;
    playlist_name= playlist.playlist_name;
}

Playlist::~Playlist(){
 cout << "Destruct Playlist" << endl;
}

int Playlist::getID(void){
    return user_id;
}

string Playlist::getName(void){
    return playlist_name;
}

void Playlist::displayPlaylist(void){
    cout << "Playlist Name: " << playlist_name << " User ID: " << user_id << endl;
}
