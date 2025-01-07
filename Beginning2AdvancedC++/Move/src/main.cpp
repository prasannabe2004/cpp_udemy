#include <iostream>
#include <vector>

#include "Move.h"

using namespace std;

void display_Move(Move s) {
    std::cout << s.get_data_value() << "\n";
}

int main()
{
    vector<Move> v;
    v.push_back(Move(10));
    cout << "\n";

    v.push_back(Move(20));
    return 0;
}
