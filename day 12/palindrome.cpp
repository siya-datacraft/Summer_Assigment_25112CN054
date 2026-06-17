#include <iostream>
using namespace std;
bool isPalindrome(int num)
{
    int original = num;
    int reversed = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    return (original == reversed);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPalindrome(n))
    {
        cout << "It is a Palindrome number." << endl;
    }
    else {
        cout << "It is NOT a Palindrome number." << endl;
    }
    return 0;
}
