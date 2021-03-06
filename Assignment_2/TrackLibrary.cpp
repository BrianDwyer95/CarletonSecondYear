#include "trackLibrary.h"

TrackLibrary::TrackLibrary(){
    vector<Track*> tracks;
}

TrackLibrary::~TrackLibrary(){
    for(unsigned int i; i < tracks.size(); ++i){
        delete tracks[i];
    }
}

//adds track to tracks
void TrackLibrary::addTrack(Track *track){
    tracks.push_back(track);
}

//returns pointer to trackLibrary
vector<Track*>*TrackLibrary::getTrackLib(void){
    return &tracks;
}

//returns pointer to track in library
Track * TrackLibrary::getTrackByID(int trackID){
    for(unsigned int i = 0; i < tracks.size(); ++i){
        Track * tempTrack = tracks[i];
        if(tempTrack -> getTrackID() == trackID) return tempTrack;
  }
  return NULL;
}

//returns pointer to track in library
Track * TrackLibrary::getTrackBySongID(int songID){
    for(unsigned int i = 0; i < tracks.size(); ++i){
        Track * tempTrack = tracks[i];
        if(tempTrack -> getSongID() == songID) return tempTrack;
  }
  return NULL;
}

void  TrackLibrary::printTracksByAlbumID(ostream& out, int albumID){
    for(unsigned int i = 0; i < tracks.size(); ++i){
        Track * tempTrack = tracks[i];
        if(tempTrack -> getAlbumID() == albumID) out << *tempTrack; 
    }
}

//removes the track from the Track library vector as well as the reference in the vector 
void TrackLibrary::removeTrack(Track* track){
    for(unsigned int i = 0; i < tracks.size(); ++i){
        Track * tempTrack = tracks[i];
        if(tempTrack == track){ 
            tracks.erase(tracks.begin() + i);
            delete track;
        }
    } 
}

void TrackLibrary::printTracks(ostream & out){
    for(unsigned int i = 0; i < tracks.size(); ++i){
        Track * tempTrack = tracks[i];
        out << *tempTrack;
    }
}

