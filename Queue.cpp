#include <bits/stdc++.h>

using namespace std;

int enqueue(int queue[], int front, int rear, int max, int data) {
    if (rear == max - 1) {
        cout << "Queue Overflow" << endl;
        return rear;
    } else {
        rear++;
        queue[rear] = data;
        return rear;
    }
}

int dequeue(int queue[], int front, int rear) {
    if (front == rear) {
        cout << "Queue Underflow" << endl;
        return front;
    } else {
        front++;
        cout << "Dequeued element is " << queue[front] << endl;
        return front;
    }
}

void peak(int queue[], int front, int rear) {
    if (front == rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Peak element is " << queue[front + 1] << endl;
    }
}

void isEmpty(int front, int rear) {
    if (front == rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
}

void isFull(int rear, int max) {
    if (rear == max - 1) {
        cout << "Queue is full" << endl;
    } else {
        cout << "Queue is not full" << endl;
    }
}

void size(int front, int rear) {
    cout << "Size of queue is " << rear - front << endl;
}

void display(int queue[], int front, int rear) {
    if (front == rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front + 1; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int max;
    cout << "Enter size of queue: ";
    cin >> max;
    int queue[max], front = -1, rear = -1, choice, data;
    while (true) {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peak" << endl;
        cout << "4. Is Empty" << endl;
        cout << "5. Is Full" << endl;
        cout << "6. Size" << endl;
        cout << "7. Display" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                rear = enqueue(queue, front, rear, max, data);
                cout << "Now, the queue is pointed at " << rear + 1 << endl;
                break;
            case 2:
                front = dequeue(queue, front, rear);
                break;
            case 3:
                peak(queue, front, rear);
                break;
            case 4:
                isEmpty(front, rear);
                break;
            case 5:
                isFull(rear, max);
                break;
            case 6:
                size(front, rear);
                break;
            case 7:
                display(queue, front, rear);
                break;
            case 8:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}