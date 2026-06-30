#include <iostream>
#include <vector>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    float price;
};

void addItem(vector<Item> &inventory) {
    Item i;
    cout << "\nEnter Item ID: ";
    cin >> i.id;
    cout << "Enter Item Name: ";
    cin.ignore();
    getline(cin, i.name);
    cout << "Enter Quantity: ";
    cin >> i.quantity;
    cout << "Enter Price: ";
    cin >> i.price;

    inventory.push_back(i);
    cout << "Item added successfully!\n";
}

void displayItems(const vector<Item> &inventory) {
    if (inventory.empty()) {
        cout << "\nInventory is empty!\n";
        return;
    }

    cout << "\n--- Inventory Items ---\n";
    for (const auto &i : inventory) {
        cout << "ID: " << i.id
             << ", Name: " << i.name
             << ", Quantity: " << i.quantity
             << ", Price: " << i.price << endl;
    }
}

void searchItem(const vector<Item> &inventory) {
    int id;
    cout << "\nEnter Item ID to search: ";
    cin >> id;

    for (const auto &i : inventory) {
        if (i.id == id) {
            cout << "Item Found:\n";
            cout << "Name: " << i.name
                 << ", Quantity: " << i.quantity
                 << ", Price: " << i.price << endl;
            return;
        }
    }
    cout << "Item not found!\n";
}

void updateItem(vector<Item> &inventory) {
    int id;
    cout << "\nEnter Item ID to update: ";
    cin >> id;

    for (auto &i : inventory) {
        if (i.id == id) {
            cout << "Enter new quantity: ";
            cin >> i.quantity;
            cout << "Enter new price: ";
            cin >> i.price;
            cout << "Item updated successfully!\n";
            return;
        }
    }
    cout << "Item not found!\n";
}

void deleteItem(vector<Item> &inventory) {
    int id;
    cout << "\nEnter Item ID to delete: ";
    cin >> id;

    for (auto it = inventory.begin(); it != inventory.end(); ++it) {
        if (it->id == id) {
            inventory.erase(it);
            cout << "Item deleted successfully!\n";
            return;
        }
    }
    cout << "Item not found!\n";
}

int main() {
    vector<Item> inventory;
    int choice;

    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Item\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addItem(inventory); break;
            case 2: displayItems(inventory); break;
            case 3: searchItem(inventory); break;
            case 4: updateItem(inventory); break;
            case 5: deleteItem(inventory); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}