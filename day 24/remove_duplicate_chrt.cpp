#include <iostream>
using namespace std;
int main() 
{
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);
    int seen[256] = {0};
    for (char ch : str) {
        if (seen[(int)ch] == 0) {
            result += ch;          
            seen[(int)ch] = 1;
        }
    }
    cout << "After removing duplicates: " << result;
    return 0;
}