#include <iostream>

#include "Shallow.h"

Shallow::Shallow(int d) {
    std::cout << "1 Parameter constructor\n";
    data = new int;
    *data = d;
}

void Shallow::set_data_value(int v) {
    *data = v;
}

int Shallow::get_data_value(void) {
    return *data;
}

Shallow::Shallow(const Shallow &s) : data(s.data) {
    std::cout << "Copy constructor" << "\n";
}

Shallow::~Shallow() {
    delete data;
    std::cout << "inside Destructor for " << "\n";
}