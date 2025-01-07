// Section 13
// Const in Classes
#include <iostream>
#include <string>
#include "Const.h"

using namespace std;

void display_player_name(const Player &p) {
    cout << p.get_name() << endl;
}

int main() {
    
    const Player villain {"Villain", 100, 55};    
    Player hero {"Hero", 100, 15};
    
   // villain.set_name("Super villain");
    cout << villain.get_name() << endl;
    cout << hero.get_name() << endl;   
    
    display_player_name(villain);
    display_player_name(hero);

    
  
    return 0;
}

