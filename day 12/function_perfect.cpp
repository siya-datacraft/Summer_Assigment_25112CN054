#include <iostream>
#include <cmath>
using namespace std;
bool isPerfectNumber(int num)
{
    if (num <= 1)
    {
        return false;
    }
    int divisorSum = 1;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            divisorSum += i;
            if (i != num / i) 
            {
                divisorSum += num / i;
            }
        }
    }
    return divisorSum == num;
}
int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (isPerfectNumber(number)) 
    {
        cout << number << "is a perfect number." <<endl;
    }
    else{
        cout << number << " is NOT a perfect number." <<endl;
    }
    return 0;
}