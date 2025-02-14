//main.cpp
#include "movie_factory.h"
#include <iostream>
#include <vector>
#include <limits>

//Function to find the `movie` with the highest rating using `FindHighestRatedMovie`
/*
FindHighestRatedMovie() that 
accepts 
  vector of pointers of Movie objects created by using CreateMovies() and 
returns 
  Movie pointer of the best movie.
*/
// Function `CalculateAverageRuntime` to calculate the average runtime of `movies`

Movie FindHighestRatedMovie(std::vector<std::shared_ptr<Movie>> movies) {
    int highindex = 0;

    for(int i = 0; i < movies.size(); i++) {
      double currrate = movies[i]->GetRating();

      if(currrate > movies[highindex]->GetRating()) {
        highindex = i;
      }
    }

    return *movies[highindex];

}

int CalculateAverageRuntime(std::vector<std::shared_ptr<Movie>> movies) {
  
    int num = movies.size();
    int total = 0;

    for(int i = 0; i < movies.size(); i++) {
      total += movies[i]->GetRuntime();
    }

    return total / num;
}

int main() {
  // Vectors representing movie data
  std::vector<std::string> titles{"Movie 1", "Movie 2", "Movie 3", "Movie 4", "Movie 5"};

  std::vector<std::string> directors{"Director 1", "Director 2", "Director 3", "Director 4", "Director 5"};

  std::vector<int> runtimes{140, 175, 150, 160, 140};
  std::vector<int> ids{1, 2, 3, 4, 5};
  std::vector<double> ratings{9.1, 9.2, 9.0, 8.8, 8.9};

  // Create `movies` using the factory function `CreateMovies` X

  MovieFactory mvs;

  std::vector<std::shared_ptr<Movie>> movies = mvs.CreateMovies(titles, directors, runtimes, ids, ratings);

  // Perform analysis
  // Find `highest_rated` movie using `FindHighestRatedMovie`

  Movie highest_rated = FindHighestRatedMovie(movies);
  // Find `average_runtime` using `CalculateAverageRuntime`

  int avg_runtime = CalculateAverageRuntime(movies);

  // Print data of the `highest_rated` movie
  std::cout << "Highest Rated Movie!" << std::endl;
  highest_rated.PrintMovieData();

  // Print Average Runtime `average_runtime` X

  std::cout << "Average Runtime: " << avg_runtime << std::endl;

}