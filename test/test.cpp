#define CATCH_CONFIG_MAIN			// this line tells Catch to provide a main() function
#define CATCH_CONFIG_COLOUR_NONE	// this line avoids problems due to color-coding the output
#include "catch2/catch.hpp"
//#include "movie.h"
#include "movie_factory.h"

TEST_CASE("parameterized constructor", "[Movie]") {
    Movie test1 = Movie("Title", "Dir", 120, 4, 8.3);

    REQUIRE(test1.GetTitle() == "Title");
    REQUIRE(test1.GetDirector() == "Dir");
    REQUIRE(test1.GetRating() == 8.3);
    REQUIRE(test1.GetRuntime() == 120);
   
}

TEST_CASE("create movies", "[MovieFactory]") {
    std::vector<std::string> titles{"Movie 1", "Movie 2", "Movie 3"};
    std::vector<std::string> directors{"Director 1", "Director 2", "Director 3"};
    std::vector<int> runtimes{140, 175, 130};
    std::vector<int> ids{1, 2, 3};
    std::vector<double> ratings{9.1, 9.2, 9.0};

    MovieFactory mvf;

    std::vector<std::shared_ptr<Movie>> moviest = mvf.CreateMovies(titles, directors, runtimes, ids, ratings);

    REQUIRE(moviest.size() == 3);

    REQUIRE(moviest[0]->GetTitle() == "Movie 1");
    REQUIRE(moviest[1]->GetTitle() == "Movie 2");
    REQUIRE(moviest[2]->GetTitle() == "Movie 3");

    REQUIRE(moviest[0]->GetDirector() == "Director 1");
    REQUIRE(moviest[1]->GetDirector() == "Director 2");
    REQUIRE(moviest[2]->GetDirector() == "Director 3");

    REQUIRE(moviest[0]->GetRuntime() == 140);
    REQUIRE(moviest[1]->GetRuntime() == 175);
    REQUIRE(moviest[2]->GetRuntime() == 130);

    REQUIRE(moviest[0]->GetRating() == 9.1);
    REQUIRE(moviest[1]->GetRating() == 9.2);
    REQUIRE(moviest[2]->GetRating() == 9.0);

}