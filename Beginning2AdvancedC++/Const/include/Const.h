#pragma once
#include <string>

class Player
{
private:
    std::string name;
    int health;
     int xp;  
public:
    std::string get_name() const;
    void set_name(std::string name_val);
// Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};
