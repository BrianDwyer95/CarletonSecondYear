#include <iostream>
#include "Controller.h"

using namespace std;

void addSong(string sid, string title, string composer, string tid){

  Song* song(sid, title, composer, tid);
  songLibrary.addSong(&song);

}

void addTracktoLibrary(string tid, string albumID, string songID, string track_number){

  Track* track(tid, albumID, songID, track_number);
  trackLibrary.addTrack(&track);

}

void addRecordingtoLibrary(string id, string title, string artist, string year, string producer){

  Recroding* recroding(id, title, artist, year, producer);
  recordingLibrary.addrecording(&recording);

}

void addUsertoLibrary(string user_id, string name){

  User* user(user_id, name);
  userlibrary.addUser(&user);

}

void addPlaylisttoLibrary(string user_id, string name){

  Playlist* playlist(user_id, name);
  playlistLibrary.addPlaylist(&playlist);

}

void addTracktoPlaylist(string tid, string playlist_name){

  Track* track(tid, playlist_name);
  trackLibrary.addTrack(&track);

}
