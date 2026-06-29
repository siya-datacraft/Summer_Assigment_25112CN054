#include <iostream>
using namespace std;
int main() 
{
    string line;
    cout << "Enter a string: ";
    getline(cin, line);
    for (int i = 0; i < line.length(); i++) {
        if (line[i] >= 'a' && line[i] <= 'z') {
            line[i] = line[i] - 32;  
        }
    }
    cout << "After conversion: " << line;
    return 0;
}