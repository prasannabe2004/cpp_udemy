#include <iostream>

#include "Person.h"

void displayPerson(Person a)
{
    std::cout << a.getname() << "\n";
    std::cout << a.getAge() << "\n";
}

int main()
{
    Person empty;
    Person frank("Frank");
    Person hero("Hero", 43);
    Person villan("Villan", 50, 100);
    displayPerson(empty); 

    Person new_obj(empty);
    
    return 0;
}
