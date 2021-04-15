#include <iostream>

#include "videogame.h"


using namespace std;

videogame::videogame() {

  database();
  publisher = new char[40];

}


char* videogame::getPublisher() {

  return publisher;
  
}

void videogame::setPublisher(char* userinput) {

  strcpy(publisher, userinput);

}

float videogame::getRating() {

  return rating;
  
}

void videogame::setRating(float userinput) {

  rating = userinput;

}

int videogame::getType() {

  return 1;

}

