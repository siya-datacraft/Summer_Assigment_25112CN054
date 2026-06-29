#include <iostream>
using namespace std;
int main() 
{
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    int freq[256] = {0}; 
    for (char ch : text) {
        freq[(int)ch]++;
    }
    cout << "Character Frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }
    return 0;
}