#include <iostream>
#include <vector>
using namespace std;

struct Contact {
    int id;
    string name;
    string phone;
    string email;
};

void addContact(vector<Contact> &contacts) {
    Contact c;
    cout << "\nEnter Contact ID: ";
    cin >> c.id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, c.name);
    cout << "Enter Phone: ";
    getline(cin, c.phone);
    cout << "Enter Email: ";
    getline(cin, c.email);

    contacts.push_back(c);
    cout << "Contact added successfully!\n";
}

void displayContacts(const vector<Contact> &contacts) {
    if (contacts.empty()) {
        cout << "\nNo contacts found!\n";
        return;
    }

    cout << "\n--- Contact List ---\n";
    for (const auto &c : contacts) {
        cout << "ID: " << c.id
             << ", Name: " << c.name
             << ", Phone: " << c.phone
             << ", Email: " << c.email << endl;
    }
}

void searchContact(const vector<Contact> &contacts) {
    int id;
    cout << "\nEnter Contact ID to search: ";
    cin >> id;

    for (const auto &c : contacts) {
        if (c.id == id) {
            cout << "Contact Found:\n";
            cout << "Name: " << c.name
                 << ", Phone: " << c.phone
                 << ", Email: " << c.email << endl;
            return;
        }
    }
    cout << "Contact not found!\n";
}

void deleteContact(vector<Contact> &contacts) {
    int id;
    cout << "\nEnter Contact ID to delete: ";
    cin >> id;

    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->id == id) {
            contacts.erase(it);
            cout << "Contact deleted successfully!\n";
            return;
        }
    }
    cout << "Contact not found!\n";
}

int main() {
    vector<Contact> contacts;
    int choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addContact(contacts); break;
            case 2: displayContacts(contacts); break;
            case 3: searchContact(contacts); break;
            case 4: deleteContact(contacts); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}