#include <iostream>
#include <vector>
using namespace std;

struct Ticket {
    int id;
    string name;
    int seats;
};

void bookTicket(vector<Ticket> &list) {
    Ticket t;
    cout << "\nEnter Ticket ID: ";
    cin >> t.id;
    cout << "Enter Customer Name: ";
    cin.ignore();
    getline(cin, t.name);
    cout << "Enter Number of Seats: ";
    cin >> t.seats;

    list.push_back(t);
    cout << "Ticket booked successfully!\n";
}

void displayTickets(const vector<Ticket> &list) {
    if (list.empty()) {
        cout << "\nNo bookings found!\n";
        return;
    }

    cout << "\n--- Ticket Bookings ---\n";
    for (const auto &t : list) {
        cout << "Ticket ID: " << t.id
             << ", Name: " << t.name
             << ", Seats: " << t.seats << endl;
    }
}

void searchTicket(const vector<Ticket> &list) {
    int id;
    cout << "\nEnter Ticket ID to search: ";
    cin >> id;

    for (const auto &t : list) {
        if (t.id == id) {
            cout << "Booking Found:\n";
            cout << "Name: " << t.name
                 << ", Seats: " << t.seats << endl;
            return;
        }
    }
    cout << "Ticket not found!\n";
}

void cancelTicket(vector<Ticket> &list) {
    int id;
    cout << "\nEnter Ticket ID to cancel: ";
    cin >> id;

    for (auto it = list.begin(); it != list.end(); ++it) {
        if (it->id == id) {
            list.erase(it);
            cout << "Ticket cancelled successfully!\n";
            return;
        }
    }
    cout << "Ticket not found!\n";
}

int main() {
    vector<Ticket> list;
    int choice;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Bookings\n";
        cout << "3. Search Ticket\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: bookTicket(list); break;
            case 2: displayTickets(list); break;
            case 3: searchTicket(list); break;
            case 4: cancelTicket(list); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}