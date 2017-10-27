#include <iostream>
#include "songLibrary.h"

using namespace std;
    
int main(){
    cout << "Creating new Libary" << endl;
    SongLibrary * lib = new SongLibrary();
    Song * newSong = new Song(1234,"bob","Collection");
    cout << "adding song to lib" << endl;
    lib -> addSong(newSong);
    cout << newSong -> getSongID() << endl;
    //delete newSong;
    delete lib;
    return 0;
}