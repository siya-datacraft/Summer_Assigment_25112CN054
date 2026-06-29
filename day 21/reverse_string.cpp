#include <iostream>
using namespace std;
int main() 
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int start = 0;
    int end = input.length() - 1;
    while (start < end) 
    {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
    cout << "Reversed string: " << input;
    return 0;
}