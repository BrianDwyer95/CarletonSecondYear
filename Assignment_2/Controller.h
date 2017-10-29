#include <string>
#include <vector>
#include "UserLibrary.h"
#include "PlaylistLibrary.h"
#include "trackLibrary.h"
#include "songLibrary.h"
//#include "RecordingLibrary.h"

using namespace std;

class Controller{

public:
  void receiveParse(vector<string> information);
  //When song is added provide song info and track info
  void addSong(string sid, string title, string composer, string tid);
  void addTracktoLibrary(string tid, string albumID, string songID, string track_number);
  void addRecordingtoLibrary(string id, string title, string artist, string year, string producer);
  void addUsertoLibrary(string user_id, string name);
  void addPlaylisttoLibrary(string user_id, string playlist_name);
  void addTracktoPlaylist(string tid, string playlist_name);
  void addUser(string user_id, string name);

  /*
  void displaySongs(void);
  void displayPlaylists(void);
  void displayTracks(void);
  void displayUsers(void);
  void displayTracksinPlaylist(int user_id, string name);
  void displayPlaylistsinUser(int user_id);
  */

private:
  SongLibrary songLibrary;
  PlaylistLibrary playlistLibrary;
  TrackLibrary trackLibrary;
  RecordingLibrary recordingLibrary;
  UserLibrary userlibrary;


}
