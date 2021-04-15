#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <cstring>

#include "database.h"

class music : public database { //child of database using the colon{

  
public:

  music(); //declaring the cpp file for the music

  char* getArtist();
  void setArtist(char*); 
  float getDuration(); //get the duration
  void setDuration(float);
  char* getPublisher(); //get the publisher for the music
  void setPublisher(char*); 

  int getType();
  
private:

  char* artist;
  float duration;
  char* publisher;



};


#endif // MUSIC_H
