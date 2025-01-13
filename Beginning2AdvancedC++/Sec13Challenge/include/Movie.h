#ifndef _MOVIE_H_
#define _MOVIE_H_
#include<string>

class Movie {
    private:
        std::string name;
        std::string rating;
        int watched;
    public:
        Movie(std::string n, std::string r, int w);
        Movie(const Movie &s);
        ~Movie();

        void set_name(std::string n) { name = n;}
        std::string get_name() const { return name; }

        void set_rating(std::string r) { rating = r; }
        std::string get_rating() const { return rating; }

        void set_watched(int w) { watched = w; }
        int get_watched() const { return watched; }

        void increment_watched() { ++watched; }
        void display() const;
};
#endif