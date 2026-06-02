#include <iostream>
int verifyPrimeStatus(long long targetValue)
{
    if (targetValue < 2)
    return 0;
    if(targetValue == 2 || targetValue == 3)
    return 1;
    if(targetValue % 2 == 0 || targetValue % 3 == 0)
    return 0;
    for (long long factor = 5; factor * factor <= targetValue; factor += 6){
        if(targetValue % factor == 0 || targetValue % (factor + 2) == 0){
            return 0;
        }
    }
    return 1;
}
int main() {
    long long userInput = 0;
    std::cout << "Input a whole number: ";
    if (std::cin >> userInput){
        if (verifyPrimeStatus(userInput) == 1)
        {
            std::cout << userInput << " qualifies as a prime.\n";
        }
        else {
            std::cout << userInput << " does not qualify as a prime.\n";
        }
    }
    return 0;
}
