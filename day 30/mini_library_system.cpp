#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool issued;
};

int main() {
    Book library[50];
    int n = 0;
    int choice;

    do {
        cout << "\n===== Mini Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                if (n >= 50) {
                    cout << "Library is full!\n";
                } else {
                    cout << "\nEnter Book ID: ";
                    cin >> library[n].id;
                    cout << "Enter Title: ";
                    cin.ignore();
                    getline(cin, library[n].title);
                    cout << "Enter Author: ";
                    getline(cin, library[n].author);
                    library[n].issued = false;
                    n++;
                    cout << "Book added successfully!\n";
                }
                break;

            case 2:
                if (n == 0) {
                    cout << "No books available!\n";
                } else {
                    cout << "\n--- Book List ---\n";
                    for (int i = 0; i < n; i++) {
                        cout << "ID: " << library[i].id
                             << ", Title: " << library[i].title
                             << ", Author: " << library[i].author
                             << ", Status: "
                             << (library[i].issued ? "Issued" : "Available")
                             << endl;
                    }
                }
                break;

            case 3: {
                int id, found = 0;
                cout << "Enter Book ID to issue: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (library[i].id == id) {
                        if (!library[i].issued) {
                            library[i].issued = true;
                            cout << "Book issued successfully!\n";
                        } else {
                            cout << "Book already issued!\n";
                        }
                        found = 1;
                        break;
                    }
                }
                if (!found) cout << "Book not found!\n";
                break;
            }

            case 4: {
                int id, found = 0;
                cout << "Enter Book ID to return: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (library[i].id == id) {
                        if (library[i].issued) {
                            library[i].issued = false;
                            cout << "Book returned successfully!\n";
                        } else {
                            cout << "Book was not issued!\n";
                        }
                        found = 1;
                        break;
                    }
                }
                if (!found) cout << "Book not found!\n";
                break;
            }

            case 5: {
                int id, found = 0;
                cout << "Enter Book ID to search: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (library[i].id == id) {
                        cout << "Book Found:\n";
                        cout << "Title: " << library[i].title
                             << ", Author: " << library[i].author
                             << ", Status: "
                             << (library[i].issued ? "Issued" : "Available")
                             << endl;
                        found = 1;
                        break;
                    }
                }
                if (!found) cout << "Book not found!\n";
                break;
            }

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}