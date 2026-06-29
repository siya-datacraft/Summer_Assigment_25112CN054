#include <iostream>
using namespace std;
int main() 
{
    string text;
    int count = 0;
    cout << "Type something: ";
    getline(cin, text);
    for (char ch : text) 
    {
        count++;   
    }
    cout << "Total characters = " << count;
    return 0;
}
