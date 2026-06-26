#include <iostream>
#include <vector>
void bubbleSort(std::vector<int>& arr)
{
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    if (size <= 0) {
        std::cout << "Please enter a valid size greater than 0." << std::endl;
        return 1;
    }
    std::vector<int> data(size);
    std::cout << "Enter" << size << "numbers: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> data[i];
    }
    bubbleSort(data);
    std::cout << "Sorted array: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
