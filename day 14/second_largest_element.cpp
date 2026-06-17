#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n < 2) {
        cout << "Need at least 2 elements!";
        return 0;
    }
    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int first = -999999, second = -999999;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == -999999) {
        cout << "No second largest element (all values may be same).";
    } else {
        cout << "Second largest element = " << second;
    }
    return 0;
}