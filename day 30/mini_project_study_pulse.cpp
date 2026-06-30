#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int studyHours;
    int breakTime;
    int tasksCompleted;
};

Student s[50];
int n = 0;

int calculateScore(Student x) {
    return (x.studyHours * 10) + (x.tasksCompleted * 5) - (x.breakTime * 8);
}

string getFocus(int score) {
    if (score >= 70) return "High Focus";
    else if (score >= 40) return "Moderate Focus";
    else return "Low Focus";
}

string getFatigue(int score) {
    if (score >= 70) return "Low Fatigue";
    else if (score >= 40) return "Medium Fatigue";
    else return "High Fatigue";
}

string getSuggestion(int score) {
    if (score >= 70)
        return "Keep going! Excellent performance.";
    else if (score >= 40)
        return "Take short breaks to improve focus.";
    else
        return "High fatigue! Take proper rest.";
}

void addData() {
    if (n >= 50) {
        cout << "Limit reached!\n";
        return;
    }

    cin.ignore();
    cout << "\nEnter Name: ";
    getline(cin, s[n].name);

    cout << "Enter Study Hours: ";
    cin >> s[n].studyHours;

    cout << "Enter Break Time (hours): ";
    cin >> s[n].breakTime;

    cout << "Enter Tasks Completed: ";
    cin >> s[n].tasksCompleted;

    n++;
    cout << "Data added successfully!\n";
}

void showReports() {
    if (n == 0) {
        cout << "No data available!\n";
        return;
    }

    cout << "\n===== STUDYPULSE AI REPORT =====\n";

    for (int i = 0; i < n; i++) {
        int score = calculateScore(s[i]);

        cout << "\nName: " << s[i].name;
        cout << "\nScore: " << score;
        cout << "\nFocus: " << getFocus(score);
        cout << "\nFatigue: " << getFatigue(score);
        cout << "\nSuggestion: " << getSuggestion(score);
        cout << "\n--------------------------\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== STUDYPULSE AI SYSTEM =====\n";
        cout << "1. Add Student Data\n";
        cout << "2. Show Analysis\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addData(); break;
            case 2: showReports(); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}