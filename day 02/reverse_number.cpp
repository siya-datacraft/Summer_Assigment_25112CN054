#include <iostream>
using namespace std;
int reverseNumber(int n) 
{
    int rev = 0;
    while (n)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    return rev;
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Reverse = " << reverseNumber(num);
}