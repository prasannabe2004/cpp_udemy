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
    return 0;
}

