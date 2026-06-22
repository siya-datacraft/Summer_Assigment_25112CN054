#include <iostream>
#include <set>
using namespace std;
int main() 
{
    int n1, n2;
    cout << "Enter number of elements in first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "\n Enter number of elements in second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    set<int> set1;
    for (int i = 0; i < n1; i++) {
        set1.insert(arr1[i]);
    }
    set<int> intersection;
    for (int i = 0; i < n2; i++) {
        if (set1.find(arr2[i]) != set1.end()) {
            intersection.insert(arr2[i]);
        }
    }
    cout << "\nIntersection of arrays:\n";
    if (intersection.empty()) {
        cout << "No common elements";
    } else {
        for (int value : intersection) {
            cout << value << " ";
        }
    }
    cout << endl;
    return 0;
}