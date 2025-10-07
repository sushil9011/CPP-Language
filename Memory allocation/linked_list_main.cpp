#include "linked_list.cpp"
#include <iostream>
using namespace std;

int main() {
    LinkedList list;
    int choice, value;

    cout << "=== Simple Linked List System ===\n";

    while (true) {
        cout << "\n------ MENU ------\n";
        cout << "1. Add element\n";
        cout << "2. Display list\n";
        cout << "3. Reverse list\n";
        cout << "4. Find element by position\n";
        cout << "5. Remove element\n";
        cout << "0. Exit\n";
        cout << "-------------------\n";
        cout << "Enter option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter number: ";
            cin >> value;
            list.addFront(value);
            break;

        case 2:
            list.showList();
            break;

        case 3:
            list.flip();
            break;

        case 4:
            cout << "Enter index to find: ";
            cin >> value;
            list.findByIndex(value);
            break;

        case 5:
            cout << "Enter index to remove: ";
            cin >> value;
            list.removeAt(value);
            break;

        case 0:
            cout << "Program closed. Goodbye! Sayonara..!!\n";
            return 0;

        default:
            cout << "[!] Invalid option. Try again.\n";
        }
    }

    return 0;
}
