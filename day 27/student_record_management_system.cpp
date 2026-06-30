#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
    float marks;
};

void addStudent(vector<Student> &students) {
    Student s;
    cout << "\nEnter ID: ";
    cin >> s.id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter Age: ";
    cin >> s.age;
    cout << "Enter Marks: ";
    cin >> s.marks;

    students.push_back(s);
    cout << "Student added successfully!\n";
}

void displayStudents(const vector<Student> &students) {
    if (students.empty()) {
        cout << "\nNo records found!\n";
        return;
    }

    cout << "\n--- Student Records ---\n";
    for (const auto &s : students) {
        cout << "ID: " << s.id
             << ", Name: " << s.name
             << ", Age: " << s.age
             << ", Marks: " << s.marks << endl;
    }
}

void searchStudent(const vector<Student> &students) {
    int id;
    cout << "\nEnter ID to search: ";
    cin >> id;

    for (const auto &s : students) {
        if (s.id == id) {
            cout << "Record Found:\n";
            cout << "Name: " << s.name
                 << ", Age: " << s.age
                 << ", Marks: " << s.marks << endl;
            return;
        }
    }
    cout << "Student not found!\n";
}

void deleteStudent(vector<Student> &students) {
    int id;
    cout << "\nEnter ID to delete: ";
    cin >> id;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->id == id) {
            students.erase(it);
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(students); break;
            case 2: displayStudents(students); break;
            case 3: searchStudent(students); break;
            case 4: deleteStudent(students); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
