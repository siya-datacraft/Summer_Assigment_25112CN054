#include <iostream>
long long findMaxPrimeFactor(long long number)
{
    long long highestFactor = 1;
    for (long long candidate = 2; candidate * candidate <= number; candidate == 2 ? candidate++ : candidate +=2)
    {
        if (number % candidate == 0) {
            highestFactor = candidate;
            do {
                number /= candidate;
            } 
            while (number % candidate == 0);
        }
    }
    return (number > 1) ? number : highestFactor;
}
int main()
{
    long long target = 600851475143LL;
    std::cout << "Target Number: " << target << "\n";
    std::cout << "Largest Prime Factor: " << findMaxPrimeFactor(target) << std::endl;
    return 0;
}