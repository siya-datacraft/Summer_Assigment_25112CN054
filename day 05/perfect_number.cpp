#include <iostream>
bool isPerfectNumber(int n)
{
    if (n <= 1)
    {
        return false;
    }
    int divisor_sum = 0;
    for (int i = 1; i <= n / 2; ++i){
        if (n % i == 0)
        {
            divisor_sum += i;
        }
    }
    return divisor_sum == n;
}
int main()
{
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    if (isPerfectNumber(num))
    {
        std::cout << num << " is a perfect number." << std::endl;
    }
    else {
        std::cout << num << " is not a perfect number." << std::endl;
    }
    return 0;
}
