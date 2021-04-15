#include <iostream>
#include "database.h"


using namespace std;

//funt header
database::database() {

  title = new char[20];

}

//title header
char* database::getTitle() {

  return title;
}

void database::setTitle(char* userinput) {

  strcpy(title, userinput); //sets the title to userinput
  
}

int database::getYear() {

  return year; //returning the integer year when called

}

void database::setYear(int userinput) {

  year = userinput;

}
