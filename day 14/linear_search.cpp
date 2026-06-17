#include <iostream>
using namespace std;
int main() {
    int total, key, position = -1;
    cout << "Enter total number of elements: ";
    cin >> total;
    int data[total];
    cout << "Input elements:\n";
    for (int i = 0; i < total; i++) {
        cin >> data[i];
    }
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < total; i++) {
        if (data[i] == key) {
            position = i;   
            break;          
        }
    }
    if (position != -1) {
        cout << "Element found at position: " << position + 1;
    }
     else {
        cout << "Element not found in the list.";
    }
    return 0;
}
