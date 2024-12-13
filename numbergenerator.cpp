#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    srand(time(NULL)); // Seed the random number generator
    
    int num, guess;
    int tries = 0;

    guess = (rand() % 110) + 1; // Generate a random number between 1 and 110

    std::cout << "Player is guessing a random number between 1 and 110.\n";

    do {
        std::cout << "Enter a number: ";
        std::cin >> num;
        tries++; // Increment the attempt counter

        if (num > guess) {
            std::cout << "Too high! Try again.\n";
        } else if (num < guess) {
            std::cout << "Too low! Try again.\n";
        }
    } while (num != guess);

    std::cout << "Player has guessed the right number!\n";
    std::cout << "It took " << tries << " attempts to guess correctly.\n";

    return 0;
}
