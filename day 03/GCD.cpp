#include <iostream>
int calculateGreatestCommonDivisor(int x, int y) {
    if (x == 0) return y;
    if (y == 0) return x;
    while (x != y) {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }
    return x;
}
int main()
{
    int firstInput = 0;
    int secondInput = 0;
    std::cout << "Please provide two integer: ";
    std::cin >> firstInput >> secondInput;
    int finalGcd = calculateGreatestCommonDivisor(firstInput, secondInput);
    std::cout << "Resulting GCD: " << finalGcd << std::endl;
    return 0; 
}