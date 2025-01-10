#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random seed based on the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;

    int playerGuess = 0;
    int numberOfTries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    // Loop until the player guesses the correct number
    while (playerGuess != numberToGuess) {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        numberOfTries++;

        // Check if the guess is correct, too high, or too low
        if (playerGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (playerGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << numberToGuess << " in " << numberOfTries << " tries." << endl;
        }
    }

    return 0;
}

