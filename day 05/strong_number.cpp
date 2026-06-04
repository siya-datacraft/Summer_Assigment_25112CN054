#include <iostream>
const int DIGIT_FACTORIALS[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
int main()
{
    int targetValue = 0;
    std::cout << "Please provide a whole number: ";
    std::cin >> targetValue;
    if (targetValue <= 0){
        std::cout << targetValue << " does not qualify as a strong number." << std::endl;
        return 0;
    }
    int remainingDigits = targetValue;
    int accumulatedSum = 0;
    while (remainingDigits > 0) {
        int currentDigit = remainingDigits % 10;
        accumulatedSum += DIGIT_FACTORIALS[currentDigit];
        remainingDigits /= 10;
    }
    if (accumulatedSum == targetValue) {
        std::cout << "Verification successful: " << targetValue << " is a strong number !" << std::endl;
    }
    else
    {
        std::cout << "Verification failed: " << targetValue << " is ordinary." << std::endl;
    }
    return 0;
}