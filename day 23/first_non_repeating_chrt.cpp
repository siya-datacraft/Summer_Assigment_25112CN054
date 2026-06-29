#include <iostream>
using namespace std;
int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int count[256] = {0};
    for (char ch : str) {
        count[(int)ch]++;
    }
    for (char ch : str) {
        if (count[(int)ch] == 1) {
            cout << "First non-repeating character: " << ch;
            return 0;
        }
    }
    cout << "No non-repeating character found";
    return 0;
}