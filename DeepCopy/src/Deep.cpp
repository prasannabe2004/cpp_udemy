#include <iostream>

#include "Deep.h"

Deep::Deep(int d) {
    std::cout << "1 Parameter constructor\n";
    data = new int;
    *data = d;
}

void Deep::set_data_value(int v) {
    *data = v;
}

int Deep::get_data_value(void) {
    return *data;
}

Deep::Deep(const Deep &s) : Deep(*s.data) {
    std::cout << "Copy constructor" << "\n";
}

Deep::~Deep() {
    delete data;
    std::cout << "inside Destructor for " << "\n";
}