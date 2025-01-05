#include <iostream>

#include "Const.h"

using namespace std;

Player::Player() 
    : Player {"None",0,0} {
}

Player::Player(std::string name_val) 
   : Player {name_val,0, 0}  {
}
  
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
}

std::string Player::get_name() const {         // consty method
    return name;
}

void Player::set_name(std::string name_val)   {
    name = name_val;
}