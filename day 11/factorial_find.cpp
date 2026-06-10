#include <iostream>
using namespace std;
long long findFactorial(int n)
{
    if (n < 0)
    {
        return - 1;
    }
    long long factorial = 1;
    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    long long result = findFactorial(num);
    if (result == -1)
    {
        cout << "Factorial does not exist for negative numbers." << endl;
    }
    else{
        cout << "The factorial of" << num << " is " << result << endl;
    }
    return 0;
}