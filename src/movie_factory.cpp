 //movie_factory.cpp
 #include "movie_factory.h"

  std::vector<Movie*> MovieFactory::CreateMovies(const std::vector<std::string>& titles, 
                                const std::vector<std::string> directors, 
                                const std::vector<int>& runtimes, 
                                const std::vector<int>& ids,
                                const std::vector<double>& ratings) {
      
    std::vector<Movie*> movies; //initialized return array

    //make sure everything is the same size
    if(titles.size() == directors.size() && 
    directors.size() == runtimes.size() && 
    runtimes.size() == ids.size() && 
    ids.size() == ratings.size()) {


        for(std::size_t i = 0; i < titles.size(); i++) {
            movies.push_back(new Movie(titles[i], directors[i], runtimes[i], ids[i], ratings[i]));
            //initialize new movie at each index
        }

        return movies;
    }
    else {
      throw std::invalid_argument("Movie property vectors are not the same size!"); 
      //invalid if all movies cant be made
    }

 }
 /*
 Write function definition CreateMovies() that 
 accepts (attributes in the below order)
   vector of titles, 
   vector of directors, 
   vector of runtimes, 
   vector of ids, 
   vector of ratings and 
 return 
   vector of pointers of Movie objects
 */
