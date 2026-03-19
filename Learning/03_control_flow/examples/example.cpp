#include <iostream>

int main() {
    int playerHealth = 50;
    bool hasKey = true;

    // --- Conditionals ---
    std::cout << "--- Approaching the Door ---\n";
    if (playerHealth <= 0) {
        std::cout << "Game Over. You are dead.\n";
    } else if (hasKey) {
        std::cout << "You unlocked the door!\n";
    } else {
        std::cout << "The door is locked. Find a key.\n";
    }

    // --- Loops ---
    std::cout << "\n--- Leveling Up ---\n";
    // A standard 'for' loop: (starting point; condition to keep going; what to do after each loop)
    for (int i = 1; i <= 3; i++) {
        std::cout << "Gained " << i * 10 << " XP points!" << std::endl;
    }

    return 0;
}