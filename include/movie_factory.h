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
    std::vector<Movie*> MovieFactory::CreateMovies(const std::vector<std::string>& titles, 
      const std::vector<std::string> directors, 
      const std::vector<int>& runtimes, 
      const std::vector<int>& ids,
      const std::vector<double>& ratings);
 };
