#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float m1, m2, m3, m4, m5;
};

float calculateTotal(const Student &s) {
    return s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
}

float calculatePercentage(const Student &s) {
    return calculateTotal(s) / 5.0;
}

char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 75) return 'B';
    else if (percentage >= 60) return 'C';
    else if (percentage >= 50) return 'D';
    else return 'F';
}

void addStudent(vector<Student> &list) {
    Student s;
    cout << "\nEnter Roll No: ";
    cin >> s.rollNo;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, s.name);

    cout << "Enter marks of 5 subjects:\n";
    cin >> s.m1 >> s.m2 >> s.m3 >> s.m4 >> s.m5;

    list.push_back(s);
    cout << "Record added successfully!\n";
}

void displayMarksheet(const vector<Student> &list) {
    if (list.empty()) {
        cout << "\nNo records found!\n";
        return;
    }

    cout << "\n--- Marksheet ---\n";
    for (const auto &s : list) {
        float total = calculateTotal(s);
        float percentage = calculatePercentage(s);
        char grade = calculateGrade(percentage);

        cout << "\nRoll No: " << s.rollNo;
        cout << "\nName: " << s.name;
        cout << "\nMarks: " << s.m1 << ", " << s.m2 << ", "
             << s.m3 << ", " << s.m4 << ", " << s.m5;
        cout << "\nTotal: " << total;
        cout << "\nPercentage: " << percentage << "%";
        cout << "\nGrade: " << grade << "\n";
    }
}

void searchStudent(const vector<Student> &list) {
    int roll;
    cout << "\nEnter Roll No to search: ";
    cin >> roll;

    for (const auto &s : list) {
        if (s.rollNo == roll) {
            float total = calculateTotal(s);
            float percentage = calculatePercentage(s);
            char grade = calculateGrade(percentage);

            cout << "\n--- Marksheet Found ---\n";
            cout << "Name: " << s.name << endl;
            cout << "Total: " << total << endl;
            cout << "Percentage: " << percentage << "%" << endl;
            cout << "Grade: " << grade << endl;
            return;
        }
    }
    cout << "Record not found!\n";
}

int main() {
    vector<Student> list;
    int choice;

    do {
        cout << "\n===== Marksheet Generation System =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Marksheets\n";
        cout << "3. Search Marksheet\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(list); break;
            case 2: displayMarksheet(list); break;
            case 3: searchStudent(list); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}