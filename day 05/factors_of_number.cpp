#include <iostream>
using namespace std;
int main()
{
    int userInput = 0;
    cout << "Enter a positive integer: ";
    cin >> userInput;
    if (userInput <= 0) {
        cout << "Please enter a number greater than 0." << endl;
        return 1;
    }
    cout << "Factors of " << userInput << " are: ";
    for (int currentDivisor = 1; currentDivisor <= userInput; currentDivisor++)
    {
        if (userInput % currentDivisor == 0) 
        {
            cout << currentDivisor << " ";
        }
    }
    cout << endl;
    return 0;
}