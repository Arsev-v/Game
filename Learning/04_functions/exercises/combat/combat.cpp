//  Requirements
#include <iostream>


//  Create these 4 functions, in this order, before main:
//  1. int dealDamage(int health, int damage)
    //  Takes a health value and a damage value.
    //  Returns the new health after subtracting damage.
    //  Does NOT print anything.
int dealDamage(int health, int damage) {
    int subHealth = health-damage;
    return subHealth;
}


//  2. bool isAlive(int health)
    //  Same as the last exercise.
    //  Returns true if health > 0, false otherwise.
bool isAlive(int subHealth) {
    return subHealth > 0;
}


//  3. void printStatus(int playerHealth, int enemyHealth)
    //  Takes both health values.
    //  Prints the "Round Result" block shown above.
    //  Uses isAlive() inside it to print true or false.
void printStatus(int playerHealth, int enemyHealth) {
    std::cout << "--- Round Results ---" << std::endl;
    std::cout << "Player Health: " << playerHealth << std::endl;
    std::cout << "Enemy Health: " << enemyHealth << std::endl;
    std::cout << "Player is alive: " << isAlive(playerHealth) << std::endl;
    std::cout << "Enemy is alive: " << isAlive(enemyHealth) << std::endl;
}


//  4. int main()
    //  Declare starting values:
        //  playerHealth = 100
        //  enemyHealth = 100
        //  playerDamage = 20
        //  enemyDamage = 8
    //  Call dealDamage for both characters and store the results back into their health variables.
    //  Print the attack lines manually with std::cout.
    //  Call printStatus to show the result.
int main() {
    int playerHealth = 100;
    int enemyHealth = 100;
    int playerDamage = 20;
    int enemyDamage = 8;

    dealDamage(playerDamage, enemyDamage);
}