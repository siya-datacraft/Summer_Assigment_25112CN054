#include <iostream>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    int seen[256] = {0};
    for (char ch : str1) {
        seen[(int)ch] = 1;
    }
    cout << "Common characters: ";
    for (char ch : str2) {
        if (seen[(int)ch] == 1) {
            cout << ch << " ";
            seen[(int)ch] = 0; 
        }
    }
    return 0;
}