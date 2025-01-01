#include <iostream>

#include "Person.h"

Person::Person() {
    std::cout << "0 Parameter constructor\n";
    name = "None";
    age = 0;
    salary= 0;
}

Person::Person (std::string n) : name(n) {
    std::cout << "1 Parameter constructor\n";
}

Person::Person (std::string n, unsigned int a) : name(n), age(a) {
    std::cout << "2 Parameter constructor\n";
}

Person::Person (std::string n, unsigned int a, int s) : name(n), age(a), salary(s) {
    std::cout << "3 Parameter constructor\n";
}

Person::Person(const Person &s) : name(s.name), age(s.age), salary(s.salary) {
    std::cout << "Copy constructor" << "\n";
}

std::string Person::getname() {
    return name;
}

unsigned int Person::getAge() {
    return age;
}

int Person::getSalary() {
    return salary;
}

Person::~Person() {
    std::cout << "inside Destructor for " << name << "\n";
}