 //movie_factory.cpp
 #include "movie_factory.h"

 std::vector<std::shared_ptr<Movie>> MovieFactory::CreateMovies(std::vector<std::string> titles, 
                                std::vector<std::string> directors, 
                                std::vector<int> runtimes, 
                                std::vector<int> ids,
                                std::vector<double> ratings) {
      
    std::vector<std::shared_ptr<Movie>> movies;

    //make sure everything is the same size
    if(titles.size() == directors.size() && 
    directors.size() == runtimes.size() && 
    runtimes.size() == ids.size() && 
    ids.size() == ratings.size()) {


        for(int i = 0; i < titles.size(); i++) {
            movies.push_back(std::make_shared<Movie>(titles[i], directors[i], runtimes[i], ids[i], ratings[i]));
        }

        return movies;
    }
    else {
      throw std::invalid_argument("Movie property vectors are not the same size!");
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
