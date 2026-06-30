#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

void addEmployee(vector<Employee> &empList) {
    Employee e;
    cout << "\nEnter Employee ID: ";
    cin >> e.id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, e.name);
    cout << "Enter Department: ";
    getline(cin, e.department);
    cout << "Enter Salary: ";
    cin >> e.salary;

    empList.push_back(e);
    cout << "Employee added successfully!\n";
}

void displayEmployees(const vector<Employee> &empList) {
    if (empList.empty()) {
        cout << "\nNo employee records found!\n";
        return;
    }

    cout << "\n--- Employee Records ---\n";
    for (const auto &e : empList) {
        cout << "ID: " << e.id
             << ", Name: " << e.name
             << ", Department: " << e.department
             << ", Salary: " << e.salary << endl;
    }
}

void searchEmployee(const vector<Employee> &empList) {
    int id;
    cout << "\nEnter Employee ID to search: ";
    cin >> id;

    for (const auto &e : empList) {
        if (e.id == id) {
            cout << "Record Found:\n";
            cout << "Name: " << e.name
                 << ", Department: " << e.department
                 << ", Salary: " << e.salary << endl;
            return;
        }
    }
    cout << "Employee not found!\n";
}

void deleteEmployee(vector<Employee> &empList) {
    int id;
    cout << "\nEnter Employee ID to delete: ";
    cin >> id;

    for (auto it = empList.begin(); it != empList.end(); ++it) {
        if (it->id == id) {
            empList.erase(it);
            cout << "Employee deleted successfully!\n";
            return;
        }
    }
    cout << "Employee not found!\n";
}

int main() {
    vector<Employee> empList;
    int choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addEmployee(empList); break;
            case 2: displayEmployees(empList); break;
            case 3: searchEmployee(empList); break;
            case 4: deleteEmployee(empList); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}