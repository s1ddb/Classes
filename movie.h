#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <cstring>

#include "database.h"

class movie : public database {

public:

  movie(); //declaring the cpp file for the movies

  char* getDirector();
  void setDirector(char*);
  float getDuration(); //get the duration
  void setDuration(float);
  float getRating(); //get the rating
  void setRating(float); 

  int getType();
  
private:

  char* director;  ;
  float duration;
  float rating;




};


#endif // MOVIE_H
