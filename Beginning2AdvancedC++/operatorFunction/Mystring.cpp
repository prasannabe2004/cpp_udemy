#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring() 
    : str(nullptr) {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str (nullptr) {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str(nullptr) {
        std::cout << "Copy constructor" << std::endl;
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
}

// Move constructor
Mystring::Mystring(Mystring &&source) 
    : str(source.str) {
        std::cout << "Move constructor" << std::endl;
        source.str = nullptr;
}

// Destructor
Mystring::~Mystring() {
    std::cout << "destructor for " << (this->str ? "this->str" : "nullptr") << std::endl;
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
 int Mystring::get_length() const { 
    return strlen(str); 
}
 const char *Mystring::get_str() const { 
    return str; 
}

// operator overloading as global functions
bool operator==(const Mystring& lhs, const Mystring& rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}




