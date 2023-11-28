#include <stdio.h>
#include <stdlib.h>

int enqueue(int queue[], int front, int rear, int max, int data) {
    if (rear == max - 1) {
        printf("Queue Overflow\n");
        return rear;
    } else {
        rear++;
        queue[rear] = data;
        return rear;
    }
}

int dequeue(int queue[], int front, int rear) {
    if (front == rear) {
        printf("Queue Underflow\n");
        return front;
    } else {
        front++;
        printf("Dequeued element is %d\n", queue[front]);
        return front;
    }
}

void peak(int queue[], int front, int rear) {
    if (front == rear) {
        printf("Queue is empty\n");
    } else {
        printf("Peak element is %d\n", queue[front + 1]);
    }
}

void isEmpty(int front, int rear) {
    if (front == rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue is not empty\n");
    }
}

void isFull(int rear, int max) {
    if (rear == max - 1) {
        printf("Queue is full\n");
    } else {
        printf("Queue is not full\n");
    }
}

void size(int front, int rear) {
    printf("Size of queue is %d\n", rear - front);
}

void display(int queue[], int front, int rear) {
    if (front == rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front + 1; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int max;
    printf("Enter size of queue: ");
    scanf("%d", &max);
    int queue[max], front = -1, rear = -1, choice, data;
    while (1) {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
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
                rear = enqueue(queue, front, rear, max, data);
                printf("Now, the queue is pointed at %d\n", rear + 1);
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
                printf("Invalid choice\n");
        }
    }

    return 0;
}