#include <iostream>
using namespace std;
int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string result = "";
    int count = 1;
    for (int i = 0; i < str.length(); i++) {
        if (i + 1 < str.length() && str[i] == str[i + 1]) {
            count++;
        } else {
            result += str[i];                
            result += to_string(count);       
            count = 1;                        
        }
    }
    cout << "Compressed string: " << result;
    return 0;
}