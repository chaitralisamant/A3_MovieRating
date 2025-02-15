//movie.h
#include <stdio.h>
#include <iostream>
#include <string>

#ifndef MOVIE_H
#define MOVIE_H

class Movie {
    private:
      int id;
    
      std::string title;
      std::string director;
      int runtime; // runtime in minutes >= 0
      double rating; // range 0-10​

    public:

    Movie(std::string ttl, std::string dir, int r, int i, double rate); //parameterized constructor

    std::string GetTitle(); // returns title
    std::string GetDirector(); // returns director
    double GetRating(); // returns rating
    int GetRuntime(); // returns the runtime

    void PrintMovieData(); // to print details
  };

  #endif