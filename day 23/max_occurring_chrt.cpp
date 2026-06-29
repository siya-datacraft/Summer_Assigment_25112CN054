#include <iostream>
using namespace std;
int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int freq[256] = {0};
    for (char ch : str) {
        freq[(int)ch]++;
    }
    int maxCount = 0;
    char maxChar;
    for (char ch : str) {
        if (freq[(int)ch] > maxCount) {
            maxCount = freq[(int)ch];
            maxChar = ch;
        }
    }
    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxCount;
    return 0;
}