#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // seed for random number generation
    int numberToGuess = rand() % 100 + 1; // generate a random number between 1 and 100
    int numberOfTries = 0; // number of tries the player has made

    cout << "Welcome to the number guessing game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    while (true) {
        int guess;
        cout << "Take a guess: ";
        cin >> guess;

        numberOfTries++;

        if (guess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (guess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You found the number in " << numberOfTries << " tries." << endl;
            break;
        }
    }

    return 0;
}


