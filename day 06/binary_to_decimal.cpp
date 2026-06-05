#include <iostream>
#include <string>
using namespace std;
int main()
{
    string binaryString;
    cout << "Please enter a binary sequence: ";
    cin >> binaryString;
    int totalDecimal = 0;
    int currentMultiplier = 1;
    for (int i = binaryString.length() - 1; i >= 0; i--)
    {
        if (binaryString[i] == '1') 
        {
            totalDecimal += currentMultiplier;
        }
        else if (binaryString[i] != '0')
        {
            cout << "Error: Invalid character '" << binaryString[i] << "' found. This is not binary." << endl;
            return 1;
        }
        currentMultiplier *= 2;
    }
    cout << "Converted decimal value: " << totalDecimal << endl;
    return 0;
}