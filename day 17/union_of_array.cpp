#include <iostream>
#include <set>
using namespace std;
int main() {
    int n1, n2;
    cout << "Enter number of elements in first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements:\n";
    for (int i = 0; i < n1; i++) 
    {
        cin >> arr1[i];
    }
    cout << "\nEnter number of elements in second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements:\n";
    for (int i = 0; i < n2; i++) 
    {
        cin >> arr2[i];
    }
    set<int> result;
    for (int i = 0; i < n1; i++) 
    {
        result.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++) 
    {
        result.insert(arr2[i]);
    }
    cout << "\nUnion of arrays:\n";
    for (int value : result) 
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}