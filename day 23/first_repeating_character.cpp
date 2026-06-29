#include <iostream>
using namespace std;
int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int seen[256] = {0};  
    for (char ch : str) {
        if (seen[(int)ch] == 1) {
            cout << "First repeating character: " << ch;
            return 0;
        }
        seen[(int)ch] = 1;
    }
    cout << "No repeating character found";
    return 0;
}
