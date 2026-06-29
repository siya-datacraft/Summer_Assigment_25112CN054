#include <iostream>
using namespace std;

int main() {
    int pin = 1234, enteredPin;
    int choice;
    double balance = 10000.0;
    double amount;

    cout << "Welcome to ATM\n";
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << " Incorrect PIN. Access Denied.";
        return 0;
    }

    do {
        cout << "\n\n--- ATM Menu ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance: ₹" << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Amount deposited successfully.\n";
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance.\n";
                } else {
                    balance -= amount;
                    cout << "Please collect your cash.\n";
                }
                break;

            case 4:
                cout << "Thank you for using ATM ";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while (choice != 4);

    return 0;
}