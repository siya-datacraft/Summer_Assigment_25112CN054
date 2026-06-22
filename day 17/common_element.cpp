#include <iostream>
using namespace std;
int main() 
{
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "\nEnter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    cout << "\nCommon elements are:\n";
    bool found = false;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                bool alreadyPrinted = false;
                for (int k = 0; k < i; k++) {
                    if (arr1[k] == arr1[i]) {
                        alreadyPrinted = true;
                        break;
                    }
                }
                if (!alreadyPrinted) {
                    cout << arr1[i] << " ";
                    found = true;
                }
                break;
            }
        }
    }
    if (!found) {
        cout << "No common elements";
    }
    cout << endl;
    return 0;
}