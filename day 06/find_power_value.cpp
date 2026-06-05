#include <iostream>
double calculatePower(double base, int exponent)
{
    if (exponent == 0)
    {
        return 1.0;
    }
    long long absExponent = exponent;
    if (absExponent < 0)
    {
        base = 1.0 / base;
        absExponent = -absExponent;
    }
    double totalResult = 1.0;
    double currentMultiplier = base;
    while (absExponent > 0) {
        if (absExponent % 2 == 1)
        {
            totalResult *= currentMultiplier;
        }
        currentMultiplier *= currentMultiplier;
        absExponent /= 2;
    }
    return totalResult;
}
int main()
{
    double userBase;
    int userExponent;
    std::cout << "Enter the base value (x): ";
    std::cin >> userBase;
    std::cout << "Enter the exponent integer (n): ";
    std::cin >> userExponent;
    double finalAnswer = calculatePower(userBase, userExponent);
    std::cout << userBase << " raised to the power of " << userExponent << " is: " << finalAnswer << std::endl;
    return 0;

}