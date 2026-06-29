#include <iostream>
using namespace std;

int main() 
{
    int score = 0;
    char answer;

    cout << " Welcome to Quiz Game\n";

    cout << "\n1. What is the capital of India?\n";
    cout << "a) Mumbai  b) Delhi  c) Kolkata  d) Chennai\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Delhi\n";
    }

    cout << "\n2. Which language is used for C++?\n";
    cout << "a) Procedural  b) Object-Oriented  c) Both  d) None\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Both\n";
    }

    cout << "\n3. What is 5 + 3?\n";
    cout << "a) 6  b) 7  c) 8  d) 9\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 8\n";
    }

    cout << "\n Quiz Finished!\n";
    cout << "Your Score: " << score << "/3\n";

    if (score == 3) {
        cout << "Excellent!\n";
    } else if (score == 2) {
        cout << "Good job!\n";
    } else {
        cout << "Keep practicing!\n";
    }

    return 0;
}