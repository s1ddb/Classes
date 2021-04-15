#include <iostream>

#include "movie.h"


// this is for the movies / the cpp file


using namespace std;

movie::movie() {

  database();
  director = new char[40];

}


char* movie::getDirector() {
  
  return director;
  
}

void movie::setDirector(char* userinput) {

  strcpy(director, userinput);
  
}


float movie::getDuration() {

  return duration; //returns the duration variable when called

}

void movie::setDuration(float userinput) {

  duration = userinput; //sets duration variable to userinput

}

float movie::getRating() {

  return rating;
  
}

void movie::setRating(float userinput) {

  rating = userinput;
}

int movie::getType() {

  return 3;
  
}
