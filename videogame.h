#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <iostream>
#include <cstring>

#include "database.h"

class videogame: public database {

public:


  videogame(); //declaring the cpp file for video games

  char* getPublisher(); //getter for director
  void setPublisher(char*); //setter for director
  float getRating(); //getter for rating
  void setRating(float); //setter for rating

  int getType();

private:

  char* publisher;
  float rating;



};


#endif // VIDEOGAME_H


