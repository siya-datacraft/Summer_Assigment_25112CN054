#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, original, sum = 0, digit = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while(num != 0) {
        num /= 10;
        digit++;
    }
    num = original;
    while(num != 0) {
        int rem = num % 10;
        sum += pow(rem, digit);
        num /= 10;
    }
    if(sum == original)
    cout << "It is an Armstrong number";
    else
    cout << "Not an Armstrong number";
    return 0;
}