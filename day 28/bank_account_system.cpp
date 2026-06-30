#include <iostream>
#include <vector>
using namespace std;

struct Account {
    int accNo;
    string name;
    double balance;
};

void createAccount(vector<Account> &bank) {
    Account a;
    cout << "\nEnter Account Number: ";
    cin >> a.accNo;
    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, a.name);
    cout << "Enter Initial Balance: ";
    cin >> a.balance;

    bank.push_back(a);
    cout << "Account created successfully!\n";
}

void displayAccounts(const vector<Account> &bank) {
    if (bank.empty()) {
        cout << "\nNo accounts found!\n";
        return;
    }

    cout << "\n--- Bank Accounts ---\n";
    for (const auto &a : bank) {
        cout << "Account No: " << a.accNo
             << ", Name: " << a.name
             << ", Balance: " << a.balance << endl;
    }
}

void deposit(vector<Account> &bank) {
    int acc;
    double amount;
    cout << "\nEnter Account Number: ";
    cin >> acc;
    cout << "Enter Amount to Deposit: ";
    cin >> amount;

    for (auto &a : bank) {
        if (a.accNo == acc) {
            a.balance += amount;
            cout << "Deposit successful! New Balance: " << a.balance << endl;
            return;
        }
    }
    cout << "Account not found!\n";
}

void withdraw(vector<Account> &bank) {
    int acc;
    double amount;
    cout << "\nEnter Account Number: ";
    cin >> acc;
    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    for (auto &a : bank) {
        if (a.accNo == acc) {
            if (a.balance >= amount) {
                a.balance -= amount;
                cout << "Withdrawal successful! New Balance: " << a.balance << endl;
            } else {
                cout << "Insufficient balance!\n";
            }
            return;
        }
    }
    cout << "Account not found!\n";
}

void searchAccount(const vector<Account> &bank) {
    int acc;
    cout << "\nEnter Account Number to search: ";
    cin >> acc;

    for (const auto &a : bank) {
        if (a.accNo == acc) {
            cout << "Account Found:\n";
            cout << "Name: " << a.name
                 << ", Balance: " << a.balance << endl;
            return;
        }
    }
    cout << "Account not found!\n";
}

int main() {
    vector<Account> bank;
    int choice;

    do {
        cout << "\n===== Bank Account Management System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Search Account\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createAccount(bank); break;
            case 2: displayAccounts(bank); break;
            case 3: deposit(bank); break;
            case 4: withdraw(bank); break;
            case 5: searchAccount(bank); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}