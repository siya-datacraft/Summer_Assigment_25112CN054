#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0;
    int choice, value, pos;

    do {
        cout << "\n===== Array Operation System =====\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Insert Element\n";
        cout << "4. Delete Element\n";
        cout << "5. Search Element\n";
        cout << "6. Find Maximum & Minimum\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter number of elements: ";
                cin >> n;
                cout << "Enter elements:\n";
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                break;

            case 2:
                if (n == 0) {
                    cout << "Array is empty!\n";
                } else {
                    cout << "Array elements: ";
                    for (int i = 0; i < n; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                if (n >= 100) {
                    cout << "Array is full!\n";
                } else {
                    cout << "Enter position (0 to " << n << "): ";
                    cin >> pos;
                    cout << "Enter value: ";
                    cin >> value;

                    for (int i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                    cout << "Element inserted successfully!\n";
                }
                break;

            case 4:
                if (n == 0) {
                    cout << "Array is empty!\n";
                } else {
                    cout << "Enter position to delete (0 to " << n - 1 << "): ";
                    cin >> pos;

                    for (int i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    cout << "Element deleted successfully!\n";
                }
                break;

            case 5:
                if (n == 0) {
                    cout << "Array is empty!\n";
                } else {
                    cout << "Enter value to search: ";
                    cin >> value;
                    bool found = false;

                    for (int i = 0; i < n; i++) {
                        if (arr[i] == value) {
                            cout << "Element found at position " << i << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Element not found!\n";
                    }
                }
                break;

            case 6:
                if (n == 0) {
                    cout << "Array is empty!\n";
                } else {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    cout << "Maximum = " << max << endl;
                    cout << "Minimum = " << min << endl;
                }
                break;

            case 7:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}