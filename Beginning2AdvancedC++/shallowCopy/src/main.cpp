#include <iostream>

#include "Shallow.h"

void display_shallow(Shallow s) {
    std::cout << s.get_data_value() << "\n";
}

int main()
{
    Shallow obj1(100);
    // When below function is called, Shallow s which is local
    // variable to display_shallow will call destructor which 
    // will delete the memory pointing by data
    //display_shallow(obj1); 

    //Shallow obj2(obj1);
    //obj2.set_data_value(1000);

    // if diplay_shallow is enabled again the destruct for obj1
    // be called and double free happen.
    return 0;
}
