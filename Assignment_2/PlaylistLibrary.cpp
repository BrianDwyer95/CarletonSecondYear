#include <iostream>
#include <string>
#include "PlaylistLibrary.h"

using namespace std;

PlaylistLibrary::PlaylistLibrary(){
  vector<Playlist*> library;
}

PlaylistLibrary::~PlaylistLibrary(){
  for(unsigned int i = 0; i< library.size(); ++i){
      delete library[i];
  }
}

void PlaylistLibrary::addPlaylist(Playlist *playlist){
  library.push_back(playlist);
}

Playlist * PlaylistLibrary::getPlaylist(int user_id){
  for(unsigned int i = 0; i < library.size(); ++i){
        Playlist * temp = library[i];
        if(temp -> getID() == user_id) return temp;
  }
  return NULL;
}

void PlaylistLibrary::removePlaylist(Playlist *playlist){
  for(unsigned int i = 0; i < library.size(); ++i){
      Playlist * temp = library[i];
      if(temp == playlist){
          library.erase(library.begin() + i);
          delete temp;
      }
    }
}

void PlaylistLibrary::displayPlaylists(void){
    for(unsigned int i = 0; i < library.size(); ++i){
        library[i] -> displayPlaylist();
    }
}
