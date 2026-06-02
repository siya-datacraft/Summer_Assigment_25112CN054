#include <iostream>
#include <numeric>
#include <vector>
int main()
{
    int low, high;
    std::cout << "Min value: ";
    std::cin >> low;
    std::cout << "Max value: ";
    std::cin >> high;
    if (low < 2) low = 2;
    if (low > high)
    return 0;
    std::vector<int> numbers(high - low + 1);
    std::iota(numbers.begin(), numbers.end(), low);
    std::cout << "Result: ";
    for (const int val : numbers) {
        auto checkDivisors = [](int target){
            int div = 2;
            while (div * div <= target){
                if (target % div == 0)
                return false;
                ++div;
            }
            return true;
        };
        if (checkDivisors(val)) {
            std::cout << val << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}