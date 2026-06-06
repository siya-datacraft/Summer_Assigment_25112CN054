#include <iostream>
int computeDigitSum(int current_number)
{
    if (current_number == 0)
    {
        return 0;
    }
    int last_digit = current_number % 10;
    int remaining_digits = current_number / 10;
    return last_digit + computeDigitSum(remaining_digits);
}
int main()
{
    int user_input;
    std::cout << "Enter a whole number: ";
    std::cin >> user_input;
    int absolute_value = std::abs(user_input);
    int total_sum = computeDigitSum(absolute_value);
    std::cout << "The sum of the digit is: " << total_sum << std::endl;
    return 0;
}