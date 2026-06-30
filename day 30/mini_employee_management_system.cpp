#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

int main() {
    Employee emp[50];
    int n = 0;
    int choice;

    do {
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                if (n >= 50) {
                    cout << "Storage full!\n";
                } else {
                    cout << "\nEnter Employee ID: ";
                    cin >> emp[n].id;
                    cout << "Enter Name: ";
                    cin.ignore();
                    getline(cin, emp[n].name);
                    cout << "Enter Department: ";
                    getline(cin, emp[n].department);
                    cout << "Enter Salary: ";
                    cin >> emp[n].salary;
                    n++;
                    cout << "Employee added successfully!\n";
                }
                break;

            case 2:
                if (n == 0) {
                    cout << "No records found!\n";
                } else {
                    cout << "\n--- Employee Records ---\n";
                    for (int i = 0; i < n; i++) {
                        cout << "ID: " << emp[i].id
                             << ", Name: " << emp[i].name
                             << ", Department: " << emp[i].department
                             << ", Salary: " << emp[i].salary << endl;
                    }
                }
                break;

            case 3: {
                int id, found = 0;
                cout << "Enter Employee ID to search: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        cout << "Record Found:\n";
                        cout << "Name: " << emp[i].name
                             << ", Department: " << emp[i].department
                             << ", Salary: " << emp[i].salary << endl;
                        found = 1;
                        break;
                    }
                }
                if (!found) cout << "Employee not found!\n";
                break;
            }

            case 4: {
                int id, found = 0;
                cout << "Enter Employee ID to delete: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        for (int j = i; j < n - 1; j++) {
                            emp[j] = emp[j + 1];
                        }
                        n--;
                        cout << "Employee deleted successfully!\n";
                        found = 1;
                        break;
                    }
                }
                if (!found) cout << "Employee not found!\n";
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