# Stack & Queue Pseudocodes

## Stack

```sql
function push(stack[], top, max, data):
    if top equals max - 1 then
        output "Stack Overflow"
        return top
    else
        increment top
        stack[top] = data
        return top

function pop(stack[], top):
    if top equals -1 then
        output "Stack Underflow"
        return top
    else
        output "Popped element is stack[top]"
        decrement top
        return top

function peak(stack[], top):
    if top equals -1 then
        output "Stack is empty"
    else
        output "Peak element is stack[top]"

function isEmpty(top):
    if top equals -1 then
        output "Stack is empty"
    else
        output "Stack is not empty"

function isFull(top, max):
    if top equals max - 1 then
        output "Stack is full"
    else
        output "Stack is not full"

function size(top):
    output "Size of stack is top + 1"

function display(stack[], top):
    if top equals -1 then
        output "Stack is empty"
    else
        output "Stack elements are: "
        for i from 0 to top
            output "stack[i]"

function main():
    output "Enter maximum size of stack: "
    input max
    
    stack[max], top = -1, data, choice

    while true do
        output "1. Push"
        output "2. Pop"
        output "3. Peak"
        output "4. isEmpty"
        output "5. isFull"
        output "6. Size"
        output "7. Display"
        output "8. Exit"
        output "Enter your choice: "

        input choice

        switch choice do
            case 1:
                output "Enter data: "
                input data
                top = push(stack, top, max, data)
                break
            case 2:
                top = pop(stack, top)
                break
            case 3:
                peak(stack, top)
                break
            case 4:
                isEmpty(top)
                break
            case 5:
                isFull(top, max)
                break
            case 6:
                size(top)
                break
            case 7:
                display(stack, top)
                break
            case 8:
                exit
            default:
                output "Invalid choice"
```

## Queue

```sql
FUNCTION enqueue(queue, front, rear, max, data):
    IF rear EQUALS max - 1 THEN
        OUTPUT "Queue Overflow"
        RETURN rear
    ELSE
        rear INCREMENTED BY 1
        queue[rear] = data
        RETURN rear

FUNCTION dequeue(queue, front, rear):
    IF front EQUALS rear THEN
        OUTPUT "Queue Underflow"
        RETURN front
    ELSE
        front INCREMENTED BY 1
        OUTPUT "Dequeued element is " + queue[front]
        RETURN front

FUNCTION peak(queue, front, rear):
    IF front EQUALS rear THEN
        OUTPUT "Queue is empty"
    ELSE
        OUTPUT "Peak element is " + queue[front + 1]

FUNCTION isEmpty(front, rear):
    IF front EQUALS rear THEN
        OUTPUT "Queue is empty"
    ELSE
        OUTPUT "Queue is not empty"

FUNCTION isFull(rear, max):
    IF rear EQUALS max - 1 THEN
        OUTPUT "Queue is full"
    ELSE
        OUTPUT "Queue is not full"

FUNCTION size(front, rear):
    OUTPUT "Size of queue is " + (rear - front)

FUNCTION display(queue, front, rear):
    IF front EQUALS rear THEN
        OUTPUT "Queue is empty"
    ELSE
        OUTPUT "Queue elements are: "
        FOR i FROM front + 1 TO rear
            OUTPUT queue[i] + " "
        OUTPUT NEWLINE

FUNCTION main():
    INPUT max
    DECLARE queue[max]
    front = -1
    rear = -1
    WHILE TRUE DO
        OUTPUT "1. Enqueue"
        OUTPUT "2. Dequeue"
        OUTPUT "3. Peak"
        OUTPUT "4. Is Empty"
        OUTPUT "5. Is Full"
        OUTPUT "6. Size"
        OUTPUT "7. Display"
        OUTPUT "8. Exit"
        INPUT choice
        SWITCH choice DO
            CASE 1:
                INPUT data
                rear = enqueue(queue, front, rear, max, data)
                OUTPUT "Now, the queue is pointed at " + (rear + 1)
                BREAK
            CASE 2:
                front = dequeue(queue, front, rear)
                BREAK
            CASE 3:
                peak(queue, front, rear)
                BREAK
            CASE 4:
                isEmpty(front, rear)
                BREAK
            CASE 5:
                isFull(rear, max)
                BREAK
            CASE 6:
                size(front, rear)
                BREAK
            CASE 7:
                display(queue, front, rear)
                BREAK
            CASE 8:
                EXIT
            DEFAULT:
                OUTPUT "Invalid choice"
        END SWITCH
    END WHILE
END FUNCTION
```
