#include <iostream>
int invertNumber(int num, int reversedAccumulator = 0)
{
    if (num == 0)
    {
        return reversedAccumulator;
    }
    int lastDigit = num % 10;
    int updatedAccumulator = (reversedAccumulator * 10) + lastDigit;
    return invertNumber(num / 10, updatedAccumulator);
}
int main()
{
    int inputVal = 74631;
    int outputVal = invertNumber(inputVal);
    std::cout << "Input: " << inputVal << std::endl;
    std::cout << "Result: " << outputVal << std::endl;
    return 0;
}