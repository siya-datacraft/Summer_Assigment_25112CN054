#include <iostream>
int computeActiveBits(int currentNumber)
{
    int totalBits = 0;
    while (currentNumber > 0)
    {
        if (currentNumber % 2 != 0)
        {
            totalBits++;
        }
        currentNumber = currentNumber / 2;
    }
    return totalBits;
}
int main()
{
    int targetValue = 29;
    std::cout << "Enter an integer: ";
    int result = computeActiveBits(targetValue);
    std::cout << "The total number of set bits is: " << result << std::endl;
    return 0;
}