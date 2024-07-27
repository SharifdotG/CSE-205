#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = nullptr;

void insertFirstPosition(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->prev = nullptr;
    newNode->next = head;
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertMiddlePosition(int value, int position) {
    if (position <= 1) {
        insertFirstPosition(value);
        return;
    }

    Node* newNode = new Node;
    newNode->data = value;
    Node* current = head;
    int count = 1;
    while (count < position - 1 && current != nullptr) {
        current = current->next;
        count++;
    }

    if (current == nullptr) {
        cout << "Cannot insert. Position is out of range." << endl;
        return;
    }

    newNode->prev = current;
    newNode->next = current->next;

    if (current->next != nullptr) {
        current->next->prev = newNode;
    }

    current->next = newNode;
}

void insertLastPosition(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr) {
        newNode->prev = nullptr;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

void deleteFirstElement() {
    if (head != nullptr) {
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete temp;
    }
}

void deleteMiddleElement(int position) {
    if (position <= 1) {
        deleteFirstElement();
        return;
    }

    Node* current = head;
    int count = 1;
    while (count < position - 1 && current != nullptr) {
        current = current->next;
        count++;
    }

    if (current == nullptr || current->next == nullptr || current->next->next == nullptr) {
        cout << "Cannot delete. Node not found." << endl;
        return;
    }

    Node* temp = current->next;
    current->next = temp->next;

    if (temp->next != nullptr) {
        temp->next->prev = current;
    }

    delete temp;
}

void deleteLastElement() {
    if (head == nullptr) {
        cout << "Cannot delete. List is empty." << endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        if (current->prev != nullptr) {
            current->prev->next = nullptr;
        }

        delete current;
    }
}

void update(int value, int position) {
    Node* current = head;
    int count = 1;
    while (current != nullptr && count < position) {
        current = current->next;
        count++;
    }

    if (current != nullptr) {
        current->data = value;
    } else {
        cout << "Node not found at position " << position << ". Update failed." << endl;
    }
}

void display() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int choice, value, position;

    while (true) {
        cout << "\nDoubly Linked List Operations:" << endl;
        cout << "1. Insertion (First)" << endl;
        cout << "2. Insertion (Between first & last)" << endl;
        cout << "3. Insertion (Last)" << endl;
        cout << "4. Delete (First)" << endl;
        cout << "5. Delete (Between first & last)" << endl;
        cout << "6. Delete (Last)" << endl;
        cout << "7. Update" << endl;
        cout << "8. Display" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at the beginning: ";
                cin >> value;
                insertFirstPosition(value);
                break;
            case 2:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position (1 for after the first node): ";
                cin >> position;
                insertMiddlePosition(value, position);
                break;
            case 3:
                cout << "Enter value to insert at the end: ";
                cin >> value;
                insertLastPosition(value);
                break;
            case 4:
                deleteFirstElement();
                break;
            case 5:
                cout << "Enter position (1 for the first node to delete after): ";
                cin >> position;
                deleteMiddleElement(position);
                break;
            case 6:
                deleteLastElement();
                break;
            case 7:
                cout << "Enter position of the node to update: ";
                cin >> position;
                cout << "Enter the new value: ";
                cin >> value;
                update(value, position);
                break;
            case 8:
                cout << "Doubly Linked List: ";
                display();
                break;
            case 9:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}