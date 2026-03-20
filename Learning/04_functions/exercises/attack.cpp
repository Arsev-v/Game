#include <iostream>

// EXERCISE:
// 1. Create a function called 'attack' that:
//    - Takes an integer 'damage' as a parameter.
//    - Returns nothing (void).
//    - Prints: "You dealt [damage] points of damage!"
//
// 2. Create a function called 'isAlive' that:
//    - Takes an integer 'health' as a parameter.
//    - Returns a boolean (true if health > 0, false otherwise).

void attack(int damage) {
    // Added a space before "points" so it doesn't print "15points"
    std::cout << "You dealt " << damage << " points of damage!" << std::endl;
}

int isAlive() {
    
}