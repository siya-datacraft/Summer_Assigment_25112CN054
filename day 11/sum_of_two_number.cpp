#include <iostream>
double findSum(double num1, double num2) {
    return num1 + num2;
}
    int main(){
        double number1, number2;
        std::cout << "Enter the first number: ";
        std::cin >> number1;
        std::cout << "Enter the second number: ";
        std::cin >> number2;
        double result = findSum(number1, number2);
        std::cout << "The sum of " << number1 << " and " << number2 << " is: " << result << std::endl;
        return 0; 
    }
