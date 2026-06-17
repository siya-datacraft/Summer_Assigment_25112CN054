#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int number)
{
    int originalNumber = number;
    int temp = number;
    int numDigits = 0; 
    int totalSum = 0;
    while (temp > 0)
    {
        temp /= 10;
        numDigits++;
    }
    temp = number;
    while (temp > 0)
    {
        int digit = temp % 10;
        totalSum += round(pow(digit, numDigits));
        temp /= 10;
    }
    return totalSum == originalNumber;
}
int main()
{
    int inputNum;
    cout << "Enter an integer: ";
    cin >> inputNum;
    if (isArmstrong(inputNum))
    {
        cout << inputNum << "is an Armstrong number." << endl;
    }
    else {
        cout << inputNum << "is NOT an Armstrong number." << endl;
    }
    return 0;
}