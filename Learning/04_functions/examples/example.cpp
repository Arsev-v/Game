#include <iostream>
#include <string>

// This function returns nothing (void) and takes one string parameter
void greetPlayer(std::string name) {
    std::cout << "Welcome to the Realm, " << name << "!" << std::endl;
}

// This function returns an integer
int addScore(int currentScore, int pointsToAdd) {
    return currentScore + pointsToAdd;
}

int main() {
    greetPlayer("Arsev");

    int score =0;
    score = addScore(score, 50);
    score = addScore(score, 25);

    std::cout << "Final Score: " << score << std::endl;

    return 0;
}