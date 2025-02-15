#include "movie.h"

Movie::Movie(std::string ttl, std::string dir, int r, int i, double rate) {
    
    title = ttl;
    director = dir;
    runtime = r;
    id = i;
    rating = rate;

}
//getters
std::string Movie::GetTitle() {
    return title;

}

std::string Movie::GetDirector() {
    return director;

}

double Movie::GetRating() {
    return rating;

}

int Movie::GetRuntime() {
    return runtime;

}

void Movie::PrintMovieData() {

    std::cout << "Title: " << title << std::endl;
    std::cout << "Director: " << director << std::endl;
    std::cout << "Rating: " << rating << std::endl;
    std::cout << "Runtime: " << runtime << std::endl;

}

