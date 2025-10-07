#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Add element at start
    void addFront(int val) {
        Node* node = new Node(val);
        node->next = head;
        head = node;
        cout << "[+] Added " << val << " to the list.\n";
    }

    // Print entire list
    void showList() {
        if (!head) {
            cout << "[!] List is empty.\n";
            return;
        }
        cout << "List: ";
        Node* temp = head;
        while (temp) {
            cout << temp->data;
            if (temp->next) cout << " -> ";
            temp = temp->next;
        }
        cout << "\n";
    }

    // Remove node by position
    void removeAt(int index) {
        if (!head) {
            cout << "[!] Nothing to remove. List is empty.\n";
            return;
        }

        if (index == 0) {
            Node* del = head;
            head = head->next;
            delete del;
            cout << "[x] Removed first element.\n";
            return;
        }

        Node* prev = nullptr;
        Node* curr = head;
        int count = 0;

        while (curr && count < index) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (!curr) {
            cout << "[!] Invalid position.\n";
            return;
        }

        prev->next = curr->next;
        delete curr;
        cout << "[x] Node removed from position " << index << ".\n";
    }

    // Reverse the linked list
    void flip() {
        if (!head) {
            cout << "[!] List is empty.\n";
            return;
        }

        Node* prev = nullptr;
        Node* curr = head;
        Node* nextNode = nullptr;

        while (curr) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        head = prev;
        cout << "[↺] List order reversed.\n";
    }

    // Search node by index
    void findByIndex(int index) {
        if (!head) {
            cout << "[!] List is empty.\n";
            return;
        }

        Node* temp = head;
        int count = 0;

        while (temp) {
            if (count == index) {
                cout << "[✔] Element at index " << index << ": " << temp->data << "\n";
                return;
            }
            temp = temp->next;
            count++;
        }

        cout << "[!] Index " << index << " out of range.\n";
    }
};
