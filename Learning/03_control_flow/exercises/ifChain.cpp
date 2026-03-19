#include <iostream>

int main() {
    char moveInput;

    std::cout << "Enter a movment key (w, a, s, d): ";
    std::cin >> moveInput;

    // Exercise:
    // Write a 'switch' statement (or an 'if/else if' chain) that checks the value of moveInput.
    // - If it's 'w', print "Moving North"
    // - If it's 'a', print "Moving West"
    // - If it's 's', print "Moving South"
    // - If it's 'd', print "Moving East"
    // - Add a default/else case that prints "Invalid action!" for any other key.
    
    // Passing the exact variable we want to check
    switch (moveInput)
    {
    case 'w': // If moveInput is 'w'
        std::cout << "Moving North\n";
        break;
    
    case 'a': // If moveInput is 'a'
        std::cout << "Moving West\n";
        break;
    
    case 's':  // If moveInput is 's'
        std::cout << "Moving South\n";
        break;

    case 'd':  // If moveInput is 'd'
        std::cout << "Moving East\n";
        break;
    
    default: //If it was none of the above
        std::cout << "Invalid action!\n";
        break;
    }

    return 0;
}