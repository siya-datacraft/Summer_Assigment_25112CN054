#include <iostream>
using namespace std;
int main() 
{
    string line;
    int words = 0;
    bool inWord = false;
    cout << "Enter a sentence: ";
    getline(cin, line);
    for (char ch : line) {
        if (ch != ' ') {
            if (!inWord) {
                words++;      
                inWord = true;
            }
        } else {
            inWord = false;  
        }
    }
    cout << "Number of words = " << words;
    return 0;
}