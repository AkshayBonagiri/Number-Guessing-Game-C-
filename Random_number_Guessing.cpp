#include <iostream>
#include <ctime>

int main() {
    // Game introduction
    std::cout << "************GAME STARTING************" << "\n";
    std::cout << "Guess a Number from (1-100) in the least number of tries!" << "\n";

    srand(time(NULL)); // Seed random number generator with current time
    int user_input;
    int num = (rand() % 100) + 1; // Generate random number between 1 and 100
    int guesses = 1; // Track number of guesses

    // Game loop
    while (true) {
        std::cout << "Enter a Guess from (1-100): ";
        std::cin >> user_input;

        // Check if guess is correct
        if (user_input == num) {
            std::cout << "Correct Guess!! In " << guesses << " tries" << "\n";
            std::cout << "************GAME ENDED************";
            break;
        }
        // Hint if guess is too high
        else if (user_input > num) {
            std::cout << "Almost there, try a lower number!" << "\n";
        }
        // Hint if guess is too low
        else if (user_input < num) {
            std::cout << "Almost there, try a higher number!" << "\n";
        }
        else {
            std::cout << "Something went wrong" << "\n"; // Should not occur
        }

        guesses++; // Increment guess count
    }

    return 0;
}
