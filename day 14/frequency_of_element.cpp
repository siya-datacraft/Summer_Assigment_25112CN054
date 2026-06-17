#include <iostream>
using namespace std;
int main() {
    int n, target;
    int count = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int nums[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter element to check frequency: ";
    cin >> target;
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            count++;   
        }
    }
    cout << "Frequency of " << target << " = " << count;
    return 0;
}