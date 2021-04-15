#include <iostream>

#include "music.h"

using namespace std;

music::music() {

  database();
  artist = new char[20];
  publisher = new char[40];
}

char* music::getArtist() {

  return artist;
}

void music::setArtist(char* userinput) {
  
  strcpy(artist, userinput); //sets the artist to what userinput is
  
}

float music::getDuration() {

  return duration; //returns the duration variable when called

}

void music::setDuration(float userinput) {

  duration = userinput; //sets duration variable to userinput

}

			 
char* music::getPublisher() {

  return publisher;
  
}

void music::setPublisher(char* userinput) {

  strcpy(publisher, userinput);

}

int music::getType() {

  return 2;

}

