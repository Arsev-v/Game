#include <iostream>

// 1. 'attack' takes damage as parameter, returns nothing (void)
//    It only prints the damage dealt
void attack(int damage) {
    std::cout << "You dealt " << damage << " points of damage!" << std::endl;
}

// 2. 'isAlive' takes health as parameter, returns a bool
//    The expression (health > 0) itself IS a bool — no if needed
//    true if health > 0, false if health is 0 or less
bool isAlive(int health) {
    return health > 0;
}

// 3. Main game logic
int main() {
    int playerHealth = 20;  // store health in a variable so we can reuse it
    int damage = 15;        // store damage in a variable so we can reuse it

    attack(damage);         // call attack — prints the damage line

    // call isAlive with playerHealth and STORE the result in a bool variable
    bool alive = isAlive(playerHealth);

    // now use the bool variable in the if condition
    if (alive) {
        std::cout << "You win! You have " << playerHealth << " health left and dealt " << damage << " damage. Congratulations!" << std::endl;
    } else {
        std::cout << "You lose! You have " << playerHealth << " health left and dealt " << damage << " damage. Restart?" << std::endl;
    }

    return 0;
}
