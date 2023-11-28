#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertFirstPosition(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertMiddlePosition(int value, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    struct Node* current = head;
    int count = 1;
    while (count < position - 1 && current->next != NULL) {
        current = current->next;
        count++;
    }
    newNode->next = current->next;
    current->next = newNode;
}

void insertLastPosition(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void deleteFirstElement() {
    if (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

void deleteMiddleElement(int position) {
    if (position == 1) {
        deleteFirstElement();
        return;
    }

    struct Node* current = head;
    int count = 1;
    while (count < position - 1 && current->next != NULL) {
        current = current->next;
        count++;
    }

    if (current->next == NULL || current->next->next == NULL) {
        printf("Cannot delete. Node not found.\n");
        return;
    }

    struct Node* temp = current->next;
    current->next = current->next->next;
    free(temp);
}

void deleteLastElement() {
    if (head == NULL) {
        printf("Cannot delete. List is empty.\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        struct Node* current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }
        free(current->next);
        current->next = NULL;
    }
}

void update(int value, int position) {
    struct Node* current = head;
    int count = 1;
    while (current != NULL && count < position) {
        current = current->next;
        count++;
    }

    if (current != NULL) {
        current->data = value;
    } else {
        printf("Node not found at position %d. Update failed.\n", position);
    }
}

void display() {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int choice, value, position;

    while (1) {
        printf("Singly Linked List Operations:\n");
        printf("1. Insertion (First)\n");
        printf("2. Insertion (Between first & last)\n");
        printf("3. Insertion (Last)\n");
        printf("4. Delete (First)\n");
        printf("5. Delete (Between first & last)\n");
        printf("6. Delete (Last)\n");
        printf("7. Update\n");
        printf("8. Traverse\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at the beginning: ");
                scanf("%d", &value);
                insertFirstPosition(value);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter position (1 for after the first node): ");
                scanf("%d", &position);
                insertMiddlePosition(value, position);
                break;
            case 3:
                printf("Enter value to insert at the end: ");
                scanf("%d", &value);
                insertLastPosition(value);
                break;
            case 4:
                deleteFirstElement();
                break;
            case 5:
                printf("Enter position (1 for the first node to delete after): ");
                scanf("%d", &position);
                deleteMiddleElement(position);
                break;
            case 6:
                deleteLastElement();
                break;
            case 7:
                printf("Enter position of the node to update: ");
                scanf("%d", &position);
                printf("Enter the new value: ");
                scanf("%d", &value);
                update(value, position);
                break;
            case 8:
                printf("Linked List: ");
                display();
                break;
            case 9:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}