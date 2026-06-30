#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary;
    float bonus;
    float deduction;
};

float calculateNetSalary(const Employee &e) {
    return e.basicSalary + e.bonus - e.deduction;
}

void addRecord(vector<Employee> &list) {
    Employee e;
    cout << "\nEnter Employee ID: ";
    cin >> e.id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, e.name);
    cout << "Enter Basic Salary: ";
    cin >> e.basicSalary;
    cout << "Enter Bonus: ";
    cin >> e.bonus;
    cout << "Enter Deduction: ";
    cin >> e.deduction;

    list.push_back(e);
    cout << "Record added successfully!\n";
}

void displayRecords(const vector<Employee> &list) {
    if (list.empty()) {
        cout << "\nNo records found!\n";
        return;
    }

    cout << "\n--- Salary Records ---\n";
    for (const auto &e : list) {
        cout << "ID: " << e.id
             << ", Name: " << e.name
             << ", Basic: " << e.basicSalary
             << ", Bonus: " << e.bonus
             << ", Deduction: " << e.deduction
             << ", Net Salary: " << calculateNetSalary(e)
             << endl;
    }
}

void searchRecord(const vector<Employee> &list) {
    int id;
    cout << "\nEnter Employee ID to search: ";
    cin >> id;

    for (const auto &e : list) {
        if (e.id == id) {
            cout << "Record Found:\n";
            cout << "Name: " << e.name
                 << ", Net Salary: " << calculateNetSalary(e)
                 << endl;
            return;
        }
    }
    cout << "Record not found!\n";
}

// Delete Record
void deleteRecord(vector<Employee> &list) {
    int id;
    cout << "\nEnter Employee ID to delete: ";
    cin >> id;

    for (auto it = list.begin(); it != list.end(); ++it) {
        if (it->id == id) {
            list.erase(it);
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "Record not found!\n";
}

int main() {
    vector<Employee> list;
    int choice;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Record\n";
        cout << "2. Display Records\n";
        cout << "3. Search Record\n";
        cout << "4. Delete Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addRecord(list); break;
            case 2: displayRecords(list); break;
            case 3: searchRecord(list); break;
            case 4: deleteRecord(list); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}