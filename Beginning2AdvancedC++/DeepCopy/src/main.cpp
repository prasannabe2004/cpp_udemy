#include <iostream>

#include "Deep.h"

void display_Deep(Deep s) {
    std::cout << s.get_data_value() << "\n";
}

int main()
{
    Deep obj1(100);
    display_Deep(obj1); 

    Deep obj2(obj1);
    obj2.set_data_value(1000);

    // if diplay_Deep is enabled again the destruct for obj1
    // be called and double free happen.
    return 0;
}
