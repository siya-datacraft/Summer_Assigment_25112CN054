#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
    float marks;
};

int main() {
    Student s[100];
    int n = 0;
    int choice;

    do {
        cout << "\n===== Student Record System (Array) =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                if (n >= 100) {
                    cout << "Storage full!\n";
                } else {
                    cout << "\nEnter ID: ";
                    cin >> s[n].id;
                    cout << "Enter Name: ";
                    cin.ignore();
                    getline(cin, s[n].name);
                    cout << "Enter Age: ";
                    cin >> s[n].age;
                    cout << "Enter Marks: ";
                    cin >> s[n].marks;
                    n++;
                    cout << "Student added successfully!\n";
                }
                break;

            case 2:
                if (n == 0) {
                    cout << "No records found!\n";
                } else {
                    cout << "\n--- Student Records ---\n";
                    for (int i = 0; i < n; i++) {
                        cout << "ID: " << s[i].id
                             << ", Name: " << s[i].name
                             << ", Age: " << s[i].age
                             << ", Marks: " << s[i].marks << endl;
                    }
                }
                break;

            case 3: {
                int id, found = 0;
                cout << "Enter ID to search: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (s[i].id == id) {
                        cout << "Record Found:\n";
                        cout << "Name: " << s[i].name
                             << ", Age: " << s[i].age
                             << ", Marks: " << s[i].marks << endl;
                        found = 1;
                        break;
                    }
                }
                if (!found) cout << "Student not found!\n";
                break;
            }

            case 4: {
                int id, found = 0;
                cout << "Enter ID to delete: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (s[i].id == id) {
                        for (int j = i; j < n - 1; j++) {
                            s[j] = s[j + 1];
                        }
                        n--;
                        cout << "Record deleted successfully!\n";
                        found = 1;
                        break;
                    }
                }
                if (!found) cout << "Student not found!\n";
                break;
            }

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
