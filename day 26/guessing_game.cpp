#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int number, guess, attempts = 0, maxAttempts;
    int choice;

    srand(time(0));

    cout << "🎮 Number Guessing Game\n";
    cout << "Choose Difficulty:\n";
    cout << "1. Easy (1-50, 10 attempts)\n";
    cout << "2. Medium (1-100, 7 attempts)\n";
    cout << "3. Hard (1-200, 5 attempts)\n";
    cout << "Enter choice: ";
    cin >> choice;

    int limit;
    if (choice == 1) {
        limit = 50;
        maxAttempts = 10;
    } 
    else if (choice == 2) {
        limit = 100;
        maxAttempts = 7;
    } 
    else {
        limit = 200;
        maxAttempts = 5;
    }

    number = rand() % limit + 1;

    cout << "\nGuess a number between 1 and " << limit << endl;

    while (attempts < maxAttempts) {
        cout << "Attempt " << (attempts + 1) << ": ";
        cin >> guess;
        attempts++;

        if (guess == number) {
            cout << "🎉 Correct! You won in " << attempts << " attempts.\n";
            return 0;
        } 
        else if (guess > number) {
            cout << "Too high!\n";
        } 
        else {
            cout << "Too low!\n";
        }
    }
    cout << "\n❌ Game Over! The number was: " << number << endl;
    return 0;
}
