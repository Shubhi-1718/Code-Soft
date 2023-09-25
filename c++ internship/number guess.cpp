#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));  // Seed the random number generator with the current time
    int secretNumber = rand() % 100 + 1;  // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I have selected a random number between 1 and 100. Try to guess it." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
