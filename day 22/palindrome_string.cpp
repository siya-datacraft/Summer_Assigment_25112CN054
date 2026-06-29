#include <iostream>
using namespace std;
int main() 
{
    string str;
    bool isPalindrome = true;
    cout << "Enter a string: ";
    getline(cin, str);
    int left = 0;
    int right = str.length() - 1;
    while (left < right) 
    {
        if (str[left] != str[right]) 
        {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome) 
    {
        cout << "It is a Palindrome";
    } else 
    {
        cout << "Not a Palindrome";
    }
    return 0;
}
