#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, temp;
    int choice;

    do {
        cout << "\n===== String Operation System =====\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Check Palindrome\n";
        cout << "6. Concatenate String\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter string: ";
                cin.ignore();
                getline(cin, str);
                break;

            case 2:
                cout << "String: " << str << endl;
                break;

            case 3:
                cout << "Length: " << str.length() << endl;
                break;

            case 4: {
                string rev = str;
                int n = rev.length();
                for (int i = 0; i < n / 2; i++) {
                    char ch = rev[i];
                    rev[i] = rev[n - i - 1];
                    rev[n - i - 1] = ch;
                }
                cout << "Reversed String: " << rev << endl;
                break;
            }

            case 5: {
                string rev = str;
                int n = rev.length();
                for (int i = 0; i < n / 2; i++) {
                    char ch = rev[i];
                    rev[i] = rev[n - i - 1];
                    rev[n - i - 1] = ch;
                }

                if (str == rev)
                    cout << "Palindrome String\n";
                else
                    cout << "Not a Palindrome\n";
                break;
            }

            case 6:
                cout << "Enter another string: ";
                cin.ignore();
                getline(cin, temp);
                cout << "Concatenated String: " << str + temp << endl;
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