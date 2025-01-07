#include <iostream>

#include "Move.h"

using namespace std;

Move::Move(int d) {
    std::cout << "1 Parameter constructor for " << d << "\n";
    data = new int;
    *data = d;
}

void Move::set_data_value(int v) {
    *data = v;
}

int Move::get_data_value(void) {
    return *data;
}

Move::Move(const Move &s) : Move(*s.data) {
    std::cout << "Deep Copy constructor for " << *s.data << "\n";
}

Move::Move(Move &&s) noexcept : data(s.data) {
    std::cout << "Move constructor for " << *s.data << "\n";
    s.data = nullptr;
}

Move::~Move() {
    if (data != nullptr) {
        cout << "Destructor freeing data for: " << *data << endl;
    } else {
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}