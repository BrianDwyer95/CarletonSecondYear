#include <iostream>
#include "songLibrary.h"

using namespace std;
    
int main(){
    cout << "Creating new Libary" << endl;
    
    
    SongLibrary * lib = new SongLibrary();

    Song * newSong =    new Song(1234,"bob","Collection");
    Song * newSong2 =   new Song(1235,"bobSTANLDER","Collection");
    Song * newSong3 =   new Song(1236,"boDDDDD","Collection");
    
    cout << "adding song to lib" << endl;

    lib -> addSong(newSong);
    lib -> addSong(newSong2);
    lib -> addSong(newSong3);
    
    cout << * lib;
    
    lib -> removeSong(newSong2);
    

    cout << * lib;

    delete lib;
    return 0;
}