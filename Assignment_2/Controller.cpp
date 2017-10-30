#include <iostream>
#include "Controller.h"

using namespace std;

void receiveParse(vector<string> information){

}

void addSong(int sid, string title, string composer){
  Song* song(sid, title, composer);
  songLibrary.addSong(&song);
}

void addTracktoLibrary(int tid, int albumID, int songID, int track_number, int sid){

  Track* track(tid, albumID, songID, track_number, sid);
  trackLibrary.addTrack(&track);
}

void addRecordingtoLibrary(int id, string title, string artist, string year, string producer){
  Recroding* recroding(id, title, artist, year, producer);
  recordingLibrary.addrecording(&recording);
}

void addUsertoLibrary(int user_id, string name){
  User* user(user_id, name);
  userlibrary.addUser(&user);
}

void addPlaylisttoLibrary(int user_id, string name){
  Playlist* playlist(user_id, name);
  playlistLibrary.addPlaylist(&playlist);
}

void addTracktoPlaylist(int tid, string playlist_name){
  Track* track(tid, playlist_name);
  trackLibrary.addTrack(&track);
}

void removeSong(int sid){
  Song* song=songLibrary.getSong(sid);
  if(song==NULL){
    cout<<"Song does not exist."<<endl;
  }else{
    songLibrary.removeSong(&song);
    cout<<"Song is removed."<<endl;
  }
}

void removeTrackfromLibrary(int tid){
  Track* track=trackLibrary.getTrackByID(tid);
  if(track==NULL){
    cout<<"Track does not exist."<<endl;
  }else{
    trackLibrary.removeTrack(&track);
    cout<<"Track removed."<<endl;
  }
}

void removeRecordingfromLibrary(int id){
  Recording* recording=recordingLibrary.getRecord(id);
  if(recording==NULL){
    cout<<"Recording does not exist."<<endl;
  }else{
    recordingLibrary.removeRecord(&recording);
    cout<<"Recording removed."<<endl;
  }
}

void removeUserfromLibrary(int user_id){
  User* user=userLibrary.getUser(user_id);
  if(user==NULL){
    cout<<"User does not exist."<<endl;
  }else{
    userlibrary.removeUser(&user);
    cout<<"User removed."<<endl;
  }
}

void removePlaylistfromLibrary(int user_id){
  Playlist* playlist=playlistLibrary.getPlaylist(user_id);
  if(playlist==NULL){
    cout<<"Playlist does not exist."<<endl;
  }else{
    playlistLibrary.removePlaylist(&playlist);
    cout<<"Playlist removed."<<endl;
  }
}

void removeTrackfromPlaylist(int tid){
  Track* track= trackLibrary.getTrackbyID(tid);
  if(track==NULL){
    cout<<"Track does not exist."<<endl;
  }else{
    playlist.addTracktoPlaylist(&track);
    cout<<"Track added to Playlist"<<endl;
  }
}

void removeUser(int user_id){
  User* user= userLibrary.getUser(user_id);
  if(user==NULL){
    cout<< "User does not exist."<<endl;
  }else{
    userLibrary.removeUser(&user);
    cout<<"User removed."<<endl;
  }
}

void displaysongs(void){
  out<< * songlibrary;
}

void displayPlaylists(void){
  Playlist p;
  p.displayTracksinPlaylist();
}

void displayTracks(void){
  out<< * trackLibrary;
}

void displayUsers(void){
  User s;
  s.displayUserPlaylists();
}

void displayTracksinPlaylist(string playlist_name){
  out<< * playlist;
}

void displayPlaylistsinUser(int user_id){
  out<< * user;
}
