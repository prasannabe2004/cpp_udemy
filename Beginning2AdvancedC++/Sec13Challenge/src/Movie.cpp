#include "Movie.h"
#include <string>
#include <iostream>

Movie::Movie(std::string n, std::string r, int w): name(n), rating(r), watched(w) {

}

Movie::Movie(const Movie &s) : Movie(s.name, s.rating, s.watched) {

}

Movie::~Movie() {

}

void Movie::display(void) const {
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}

