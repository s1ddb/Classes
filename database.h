#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <cstring>

class database {

  
public:

  database(); //declaring the cpp file for database
  
  //all variables that are in common for all child classes in database
  
  char* getTitle(); //gets the title
  void setTitle(char*); //set the title to whatever is entered in char pointer
  int getYear(); // get the year
  void setYear(int); //set the year to whatever is entered for the integer

  virtual int getType();
  
private:

  char* title; //variable to store the title
  int year; //variable to store the year 

};

#endif // DATABASE_H
