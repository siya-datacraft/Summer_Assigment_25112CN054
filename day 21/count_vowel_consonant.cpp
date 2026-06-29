#include <iostream>
using namespace std;
int main() 
{
    string str;
    int vowels = 0, consonants = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for (char ch : str) 
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        {
            if (ch >= 'A' && ch <= 'Z') 
            {
                ch = ch + 32;
            }
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowels++;
            } else 
            {
                consonants++;
            }
        }
    }
    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    return 0;
}