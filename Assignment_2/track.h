#ifndef _track_h
#define _track_h

 #include "songLibrary.h"
 #include <iostream>
 using namespace std;

 class Track{
     public:
         Track(int trackID, string mp3, int albumID, int songID, int trackNumber);
         Track(Track& antrack);
         ~Track();
         Song * getTrackSong();
         string getFileName(void);
         int    getTrackID(void);
         int    getSongID(void);
         int    getTrackNumber(void);
         int    getAlbumID(void);
         void   printTrack(ostream & out);
         void   addSongToTrack(Song * s);
         void   removeSongFromTrack();
         friend ostream & operator<<(ostream & out, Track & t) {
            t.printTrack(out);
            return out;
        }

        Track & operator=(Track & anTrack) {
            if(&anTrack != this) {
               delete &this -> trackID;
               delete &this -> mp3;
               delete &this -> albumID;
               delete &this -> songID;
               delete &this -> trackNumber;

               this -> trackID     = anTrack.trackID;
               this -> mp3         = anTrack.mp3;
               this -> albumID     = anTrack.albumID;
               this -> songID      = anTrack.songID;
               this -> trackNumber = anTrack.trackNumber;    
            }
            return *this;
        }

     private:
         Song * tSong;
         string mp3;
         int    trackID;
         int    albumID;
         int    songID;
         int    trackNumber;
 };

#endif