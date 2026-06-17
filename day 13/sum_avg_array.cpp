#include <iostream>
int main()
{
    int n;
    double sum = 0.0;
    double average;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    if (n <= 0) {
        std::cout << "Invalid array size." << std::endl;
        return 1;
    }
    double* arr = new double[n];
    std::cout << "Enter " << n << "numbers: "<< std::endl;
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; ++i){
        sum += arr[i];
    }
    average = sum / n;
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Average = " << average << std::endl;
    delete[] arr;
    return 0;
}