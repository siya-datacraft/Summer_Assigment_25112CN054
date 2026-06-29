#include <iostream>
using namespace std;
int main() 
{
    string line, word = "", longest = "";
    cout << "Enter a sentence: ";
    getline(cin, line);
    for (int i = 0; i <= line.length(); i++) {
        if (i < line.length() && line[i] != ' ') {
            word += line[i];   
        } else {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";  
        }
    }
    cout << "Longest word: " << longest;
    return 0;
}