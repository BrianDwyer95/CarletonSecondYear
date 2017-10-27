#include "recording.h"
#include "trackLibrary.h"

Recording::Recording(int recordingId, string title, string artist, string year, string producer){
    this -> recordingId = recordingId;
    this -> title       = title;
    this -> artist      = artist;
    this -> year        = year;
    this -> producer    = producer;
}

Recording::Recording(Recording & anRecording){
    this -> recordingId = anRecording.recordingId;
    this -> title       = anRecording.title;
    this -> artist      = anRecording.artist;
    this -> year        = anRecording.year;
    this -> producer    = anRecording.producer;
}


