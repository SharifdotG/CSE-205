#include <bits/stdc++.h>

using namespace std;

int push(int stack[], int top, int max, int data) {
    if (top == max - 1) {
        cout << "Stack Overflow" << endl;
        return top;
    } else {
        top++;
        stack[top] = data;
        return top;
    }
}

int pop(int stack[], int top) {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return top;
    } else {
        cout << "Popped element is " << stack[top] << endl;
        top--;
        return top;
    }
}


void peak(int stack[], int top) {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Peak element is " << stack[top] << endl;
    }
}

void isEmpty(int top) {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
}

void isFull(int top, int max) {
    if (top == max - 1) {
        cout << "Stack is full" << endl;
    } else {
        cout << "Stack is not full" << endl;
    }
}

void size(int top) {
    cout << "Size of stack is " << top + 1 << endl;
}

void display(int stack[], int top) {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    }else {
        cout << "Stack elements are: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int max;
    cout << "Enter maximum size of stack: ";
    cin >> max;
    
    int stack[max], top = -1, data, choice;

    while(true) {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peak" << endl;
        cout << "4. isEmpty" << endl;
        cout << "5. isFull" << endl;
        cout << "6. Size" << endl;
        cout << "7. Display" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
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
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}