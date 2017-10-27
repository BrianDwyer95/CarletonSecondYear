#include <iostream>
#include "trackLibrary.h"
using namespace std;
    
int main(){
    cout << "Creating new Libary" << endl;
    
    
    SongLibrary * lib = new SongLibrary();
    TrackLibrary * tLib = new TrackLibrary();

    Song * newSong =    new Song(1234,"bob","Collection");
    Song * newSong2 =   new Song(1235,"bobSTANLDER","Collection");
    Song * newSong3 =   new Song(1236,"boDDDDD","Collection");
    
    cout << "adding song to lib" << endl;

    lib -> addSong(newSong);
    lib -> addSong(newSong2);
    lib -> addSong(newSong3);
    
    cout << * lib;
    
    lib -> removeSong(newSong2);
    
    
    Track * newTrack =    new Track(1,"Bob.mp3",1000,1234,1);
    Track * newTrack2 =   new Track(2,"bob2.mp3",1000,1235,2);
    Track * newTrack3 =   new Track(3,"bob3.mp3",1000,1236,3);

    tLib -> addTrack(newTrack);
    tLib -> addTrack(newTrack2);
    tLib -> addTrack(newTrack3);
    
    cout << *tLib;
    tLib -> removeTrack(newTrack2);
    cout << * tLib;

    delete lib;
    delete tLib;
    return 0;
}