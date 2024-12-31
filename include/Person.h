#pragma once
#include <string>

class Person {
    private:
        std::string name;
        unsigned int age;
        int salary;
    public:
        std::string getname();
        unsigned int getAge();
        int getSalary();
        Person();
        Person(std::string n);
        Person(std::string name, unsigned int age);
        Person(std::string name, unsigned int age, int salary);
        Person(const Person &);
        ~Person();
};