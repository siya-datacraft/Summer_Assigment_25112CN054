#include <iostream>
int fibonacciIterative(int n)
{
    if (n <= 0) return 0;
    if (n == 1) return 1;
    int prev2 = 0;
    int prev1 = 1;
    int current = 0;
    for (int i = 2; i <= n; ++i) 
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}
int main()
{
    int n;
    std::cout << "Enter the position number (n): ";
    std::cin >> n;
    std::cout << "Fibonacci number at position " << n << " is: " << fibonacciIterative(n) << std::endl;
    return 0;
}