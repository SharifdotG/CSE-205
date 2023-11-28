#include <stdio.h>
#include <stdlib.h>

int push(int stack[], int top, int max, int data) {
    if (top == max - 1) {
        printf("Stack Overflow\n");
        return top;
    } else {
        top++;
        stack[top] = data;
        return top;
    }
}

int pop(int stack[], int top) {
    if (top == -1) {
        printf("Stack Underflow\n");
        return top;
    } else {
        printf("Popped element is %d\n", stack[top]);
        top--;
        return top;
    }
}


void peak(int stack[], int top) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Peak element is %d\n", stack[top]);
    }
}

void isEmpty(int top) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }
}

void isFull(int top, int max) {
    if (top == max - 1) {
        printf("Stack is full\n");
    } else {
        printf("Stack is not full\n");
    }
}

void size(int top) {
    printf("Size of stack is %d\n", top + 1);
}

void display(int stack[], int top) {
    if (top == -1) {
        printf("Stack is empty\n");
    }else {
        printf("Stack elements are: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int max;
    printf("Enter maximum size of stack: ");
    scanf("%d", &max);
    
    int stack[max], top = -1, data, choice;
    
    while (1) {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peak\n");
        printf("4. IsEmpty\n");
        printf("5. IsFull\n");
        printf("6. Size\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                top = push(stack, top, max, data);
                break;
            case 2:
                top = pop(stack, top);
                break;
            case 3:
                peak(stack, top);
                break;
            case 4:
                isEmpty(top);
                break;
            case 5:
                isFull(top, max);
                break;
            case 6:
                size(top);
                break;
            case 7:
                display(stack, top);
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}