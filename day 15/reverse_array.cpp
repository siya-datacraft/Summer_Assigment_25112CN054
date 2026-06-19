#include <iostream>
#include <vector>
#include <algorithm>
void reverseArray(std::vector<int>& arr) 
{
    int left = 0;
    int right = arr.size() - 1;
    while (left < right) 
    {
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
int main()
{
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    std::vector<int> nums(size);
    std::cout << "Enter" << size << "numbers: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> nums[i];
    }
    reverseArray(nums);
    std::cout << "Reversed array: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
