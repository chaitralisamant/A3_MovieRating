//movie_factory.h

#include <stdio.h>
#include <string>
#include <vector>
#include <memory>
#include "movie.h"

 /*
 Write function declaration CreateMovies() that 
 accepts (attributes in the below order)
   vector of titles, 
   vector of directors, 
   vector of runtimes, 
   vector of ids, 
   vector of ratings and 
 return 
   vector of pointers of Movie objects
 */

 class MovieFactory {
    public:
    std::vector<std::shared_ptr<Movie>> CreateMovies(
      std::vector<std::string> titles,
      std::vector<std::string> directors,
      std::vector<int> runtimes,
      std::vector<int> ids,
      std::vector<double> ratings);
 };
