// Section 14
// Overloading copy assignment
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a("Hello");
    a = Mystring("Hola");   
    a = "Hell";
    Mystring b("Hell");  
    std::cout << "Is a and b same? " << (a==b) << std::endl;  
    return 0;
}

