#include "recording.h"

Recording::Recording(int recordingId, string title, string artist, string year, string producer){
    this -> recordingId = recordingId;
    this -> title       = title;
    this -> artist      = artist;
    this -> year        = year;
    this -> producer    = producer;
}

Recording::~Recording(){}

Recording::Recording(Recording & anRecording){
    this -> recordingId = anRecording.recordingId;
    this -> title       = anRecording.title;
    this -> artist      = anRecording.artist;
    this -> year        = anRecording.year;
    this -> producer    = anRecording.producer;
}

void Recording::printRecord(ostream & out){
    out << "Recording ID: " << recordingId << " Recording Title: " << title << " Artist: " << artist << " Release Year: " << year << "Produced by: " << producer << endl;
}

//getters 
int    Recording::getRecordingId(void){ return recordingId; }
string Recording::getTitle(void)      { return title; }
string Recording::getArtist(void)     { return artist; }
string Recording::getYear(void)       { return year; }
string Recording::getProducer(void)   { return producer;}