#include <iostream>
using namespace std;
int main() 
{
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    int count[256] = {0};
    for (char ch : str1) {
        if (ch != ' ') {   
            count[(int)ch]++;
        }
    }
    for (char ch : str2) {
        if (ch != ' ') {   
            count[(int)ch]--;
        }
    }
    bool isAnagram = true;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = false;
            break;
        }
    }
    if (isAnagram) {
        cout << "Strings are Anagrams";
    } else {
        cout << "Not Anagrams";
    }
    return 0;
}