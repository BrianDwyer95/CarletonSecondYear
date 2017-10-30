#include <string>
#include <vector>
#include "UserLibrary.h"
#include "PlaylistLibrary.h"
#include "recordingLibrary.h"
#include "songLibrary.h"
#include "trackLibrary.h"

//#include "RecordingLibrary.h"

using namespace std;

class Controller{

public:
  void receiveParse(vector<string> information);
  //When song is added provide song info and track info
  void addSong(int sid, string title, string composer, int tid);
  void addTracktoLibrary(int tid, int albumID, int songID, int track_number);
  void addRecordingtoLibrary(int id, string title, string artist, int year, string producer);
  void addUsertoLibrary(int user_id, string name);
  void addPlaylisttoLibrary(int user_id, string playlist_name);
  void addTracktoPlaylist(int tid, string playlist_name);
  void addUser(int user_id, string name);

  void removeSong(int sid);
  void removeTrackfromLibrary(int tid);
  void removeRecordingfromLibrary(int id);
  void removeUsertoLibrary(int user_id);
  void removePlaylisttoLibrary(int user_id);
  void removeTracktoPlaylist(int tid);
  void removeUser(int user_id);


  void displaySongs(void);
  void displayPlaylists(void);
  void displayTracks(void);
  void displayUsers(void);
  void displayTracksinPlaylist(string name);
  void displayPlaylistsinUser(int user_id);


private:
  songLibrary songLibrary;
  PlaylistLibrary playlistLibrary;
  trackLibrary trackLibrary;
  recordingLibrary recordingLibrary;
  UserLibrary userlibrary;
  user user;
  playlist playlist;


}
