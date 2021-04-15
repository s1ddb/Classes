#include <iostream>
#include <cstring>
#include <iomanip>
#include <vector>

#include "database.h"
#include "videogame.h"
#include "movie.h"
#include "music.h"

using namespace std;


void add(vector<database*>* StoreData, int mediatype);
void search(vector<database*>* StoreData);
void del(vector<database*>* storeData);


int main() {

  // vector<database*> StoreData; //Vector to store all the data in the database

  vector<database*>* storeData = new vector<database*>();

  bool replay = true; //boolean to set program running true or false

  while (replay == true) {

    int inpt = 0;
    int mediatype = 0; //for choosing the type of media
    cout << "TYPE IN 1 TO ADD" << endl;
    cout << "TYPE IN 2 TO SEARCH" << endl;
    cout << "TYPE IN 3 TO DELETE" << endl;
    cout << "TYPE IN 4 TO QUIT" << endl;

    cin >> inpt; //stores user's input into inpt variable

    cin.ignore(100, '\n'); //clears the memory for next usage


    if (inpt == 1)  { //if is 1

      cout << "TYPE IN 1 FOR VIDEO GAMES" << endl;
      cout << "TYPE IN 2 TO MUSIC" << endl;
      cout << "TYPE IN 3 TO MOVIES" << endl;

      cin >> inpt; //stores user's input into inpt variable

      cin.ignore(100, '\n');

      if (mediatype == 1) {

	add(storeData, 1); //add function for video games

      } 

      else if (mediatype == 2) { //add function for music

	add(storeData, 2); 
      } 

      else if (mediatype == 3) {

	add(storeData, 3); // add function for movies
	
      }


    } // end if input = 1
    else if (inpt == 2) { // if user wants search function

      search(storeData); // search
	}
    else if (inpt == 3)  {// if user wants delete function
      
      del(storeData); // delete
      
    }


    
      
  } // end while
 

} // end main

//function for add function
void add(vector<database*>* storeData, int mediatype) {


  if (mediatype == 2) {

    music* newMusic = new music; //new music variable for music class inside the add function

    //TITLE
    
    cout << "What is the title of the track" << endl;
    cout << endl;
    cout << "SONG/ALBUM TITLE: " << endl;

    char title[40];
    cin.get(title, 40);
    newMusic->setTitle(title);
    
    //cin.get(newMusic->getTitle(), 40);
    cin.ignore(100, '\n'); //terminating character

    
    //artist
    cout << "Who is the artist?" << endl;
    cout << endl;
    cout << "NAME OF THE ARTIST: " << endl;


    char artist[40];
    cin.get(artist, 40);
    newMusic->setArtist(artist);
    //cin.get(newMusic->getArtist(), 40);
    cin.ignore(100, '\n'); //terminating character

    
    cout << "When was the music released?" << endl;
    cout << endl; //space
    cout << "YEAR OF RELEASE: " << endl;

    int year;
    cin >> year;
    (newMusic -> setYear(year));
    cin.ignore(100, '\n'); // clear memory | terminating char

    
    //DURATION
    
    
    cout << "What is the duration of the track/album?" << endl;
    cout << endl;
    cout << "DURATION: " << endl;
    
    float duration;
    cin >> duration;
    newMusic->setDuration(duration);
    
    //cin >> fixed >> setprecision(2) >> newMusic->setDuration(); //sets precision to 2 decimal points for the float and gets the duration entered into getDuration
    cin.ignore(100, '\n');


    //PUBLISHER
    
    cout << "Who is the publisher?" << endl;
    cout << endl;
    cout << "NAME OF THE PUBLISHER: " << endl;


    char publisher[40];
    cin >> publisher;
    newMusic->setPublisher(publisher);
    
    //cin.get(newMusic->getPublisher(), 40);
    cin.ignore(100, '\n'); //terminating character



    storeData->push_back(newMusic);
  }

  
  else if (mediatype == 3) {


    movie* newMovie = new movie; //object for movie




    // TITLE

    cout << "What is the name of the movie?" << endl;
    cout << endl;
    cout << "TITLE: " << endl;

    char title[40];
    cin.get(title, 40);
    newMovie->setTitle(title);
    
    // cin.get(*newMovie->setDuration(), 40);
    cin.ignore(100, '\n');

    
    //YEAR OF RELEASE
    
    cout << "When was the movie released?" << endl;
    cout << endl; //space
    cout << "YEAR OF RELEASE: " << endl;


    int year;
    cin >> year;
    newMovie->setYear(year);
    
    //cin >> *newMovie->getYear();
    cin.ignore(100, '\n');


    
    // DIRECTOR
    
    cout << "Who directed the movie?" << endl;
    cout << endl;
    cout << "DIRECTOR: " << endl;


    char director[40];
    cin.get(director, 40);
    newMovie->setDirector(director);
    
    //cin.get(newMovie->getDirector(), 40);
    cin.ignore(100, '\n');


    // DURATION

    cout << "How long is the movie?" << endl;
    cout << endl;
    cout << "DURATION: " << endl;

    float duration;
    cin >> duration;
    newMovie->setDuration(duration);
    
    //cin >> *newMovie->getDuration();
    cin.ignore(100, '\n');


    // RATING

    cout << "How was the movie recieved>" << endl;
    cout << endl;
    cout << "RATING: " << endl;

    float rating;
    cin >> rating;
    newMovie->setRating(rating);
    
    //cin >> fixed >> setPrecision(2) >> *newMovie-getRating();
    cin.ignore(100, '\n');


    storeData -> push_back(newMovie);
  }
  
else if (mediatype == 1) {
    
    
    videogame* newVideogame = new videogame(); //object
    
    //TITLE
    
    cout << "What is the title of the game" << endl;
    cout << endl;
    cout << "TITLE: " << endl;

    char title[40];
    cin.get(title, 40);
    newVideogame->setTitle(title);
    
    //cin.get(newVideogame->getTitle(), 40);
    cin.ignore(100, '\n'); //terminating character
    
    
    
    cout << "When was the videogame released?" << endl;
    cout << endl; //space
    cout << "YEAR OF RELEASE: " << endl;
    
    int year;
    cin >> year;
    newVideogame -> setYear(year);
    cin.ignore(100, '\n'); // clear memory | terminating char


    

    //PUBLISHER
    
    cout << "Who is the publisher?" << endl;
    cout << endl;
    cout << "NAME OF THE PUBLISHER: " << endl;


    char publisher[40];
    cin >> publisher;
    newVideogame->setPublisher(publisher);
    
    //cin.get(newMusic->getPublisher(), 40);
    cin.ignore(100, '\n'); //terminating character


// RATING

    cout << "How was the movie recieved>" << endl;
    cout << endl;
    cout << "RATING: " << endl;

    float rating;
    cin >> rating;
    newVideogame->setRating(rating);
    
    //cin >> fixed >> setPrecision(2) >> *newMovie-getRating();
    cin.ignore(100, '\n');

    
    
    storeData->push_back(newVideogame);
 } 
  
}


void search(vector<database*>* StoreData) {

  cout << "searching.." << endl;


}


void del(vector<database*>* storeData) {

  cout << "deleting.." << endl;


}
