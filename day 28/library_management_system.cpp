#include <iostream>
#include <vector>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};

void addBook(vector<Book> &library) {
    Book b;
    cout << "\nEnter Book ID: ";
    cin >> b.id;
    cout << "Enter Title: ";
    cin.ignore();
    getline(cin, b.title);
    cout << "Enter Author: ";
    getline(cin, b.author);
    b.isIssued = false;

    library.push_back(b);
    cout << "Book added successfully!\n";
}

void displayBooks(const vector<Book> &library) {
    if (library.empty()) {
        cout << "\nNo books available!\n";
        return;
    }

    cout << "\n--- Library Books ---\n";
    for (const auto &b : library) {
        cout << "ID: " << b.id
             << ", Title: " << b.title
             << ", Author: " << b.author
             << ", Status: " << (b.isIssued ? "Issued" : "Available")
             << endl;
    }
}

void issueBook(vector<Book> &library) {
    int id;
    cout << "\nEnter Book ID to issue: ";
    cin >> id;

    for (auto &b : library) {
        if (b.id == id) {
            if (!b.isIssued) {
                b.isIssued = true;
                cout << "Book issued successfully!\n";
            } else {
                cout << "Book already issued!\n";
            }
            return;
        }
    }
    cout << "Book not found!\n";
}

void returnBook(vector<Book> &library) {
    int id;
    cout << "\nEnter Book ID to return: ";
    cin >> id;

    for (auto &b : library) {
        if (b.id == id) {
            if (b.isIssued) {
                b.isIssued = false;
                cout << "Book returned successfully!\n";
            } else {
                cout << "Book was not issued!\n";
            }
            return;
        }
    }
    cout << "Book not found!\n";
}

void searchBook(const vector<Book> &library) {
    int id;
    cout << "\nEnter Book ID to search: ";
    cin >> id;

    for (const auto &b : library) {
        if (b.id == id) {
            cout << "Book Found:\n";
            cout << "Title: " << b.title
                 << ", Author: " << b.author
                 << ", Status: " << (b.isIssued ? "Issued" : "Available")
                 << endl;
            return;
        }
    }
    cout << "Book not found!\n";
}

int main() {
    vector<Book> library;
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(library); break;
            case 2: displayBooks(library); break;
            case 3: issueBook(library); break;
            case 4: returnBook(library); break;
            case 5: searchBook(library); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
