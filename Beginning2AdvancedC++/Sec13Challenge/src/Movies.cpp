#include <iostream>
#include "Movies.h"

Movies::Movies() {

}
Movies::~Movies() {

}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for(auto m: movies) {
        if(m.get_name().compare(name) == 0) {
            return false;
        }
    }
    Movie m(name, rating, watched);
    movies.push_back(m);
    return true;
}

bool Movies::increment_watched(std::string name) {
    for(auto m: movies) {
        if(m.get_name().compare(name) == 0) {
            m.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const {
    for(auto m: movies) {
        std::cout << m.get_name() << std::endl;
    }
}