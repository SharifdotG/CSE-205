# Linked Lists Pseudocodes

## Singly Linked List

```sql
Define a structure called Node with integer data and a pointer to the next Node

Declare a global variable head initialized to nullptr

Function insertFirstPosition(value):
    Create a new Node newNode
    Set newNode's data to the given value
    Set newNode's next pointer to the current head
    Set head to newNode

Function insertMiddlePosition(value, position):
    Create a new Node newNode
    Set newNode's data to the given value
    Set current as head
    Initialize count as 1
    While count is less than (position - 1) and current's next is not nullptr:
        Move current to the next Node
        Increment count by 1
    Set newNode's next pointer to current's next
    Set current's next pointer to newNode

Function insertLastPosition(value):
    Create a new Node newNode
    Set newNode's data to the given value
    If head is nullptr:
        Set head to newNode
    Else:
        Set current as head
        While current's next is not nullptr:
            Move current to the next Node
        Set current's next pointer to newNode

Function deleteFirstElement():
    If head is not nullptr:
        Set temp to head
        Set head's next as the new head
        Delete temp

Function deleteMiddleElement(position):
    If position is 1:
        Call deleteFirstElement()
        Return
    Set current as head
    Initialize count as 1
    While count is less than (position - 1) and current's next is not nullptr:
        Move current to the next Node
        Increment count by 1
    If current's next is nullptr or current's next's next is nullptr:
        Print "Cannot delete. Node not found."
        Return
    Set temp to current's next
    Set current's next as the next of temp
    Delete temp

Function deleteLastElement():
    If head is nullptr:
        Print "Cannot delete. List is empty."
        Return
    If head's next is nullptr:
        Delete head
        Set head to nullptr
    Else:
        Set current as head
        While current's next's next is not nullptr:
            Move current to the next Node
        Delete current's next
        Set current's next to nullptr

Function update(value, position):
    Set current as head
    Initialize count as 1
    While current is not nullptr and count is less than position:
        Move current to the next Node
        Increment count by 1
    If current is not nullptr:
        Set current's data to the given value
    Else:
        Print "Node not found at position <position>. Update failed."

Function display():
    Set current as head
    While current is not nullptr:
        Print current's data followed by a space
        Move current to the next Node
    Print a new line

Function main():
    Declare choice, value, position as integers

    Loop indefinitely:
        Display menu for Singly Linked List operations
        Input choice

        Switch on choice:
            Case 1:
                Input value
                Call insertFirstPosition(value)
                Break
            Case 2:
                Input value, position
                Call insertMiddlePosition(value, position)
                Break
            Case 3:
                Input value
                Call insertLastPosition(value)
                Break
            Case 4:
                Call deleteFirstElement()
                Break
            Case 5:
                Input position
                Call deleteMiddleElement(position)
                Break
            Case 6:
                Call deleteLastElement()
                Break
            Case 7:
                Input position, value
                Call update(value, position)
                Break
            Case 8:
                Call display()
                Break
            Case 9:
                Return 0
            Default:
                Print "Invalid choice. Please try again."
```

## Doubly Linked List

```sql
Structure Node {
    Integer data
    Node prev
    Node next
}

Node head = null

Function insertFirstPosition(value):
    newNode = new Node
    newNode.data = value
    newNode.prev = null
    newNode.next = head
    If head != null:
        head.prev = newNode
    head = newNode

Function insertMiddlePosition(value, position):
    If position <= 1:
        Call insertFirstPosition(value)
        Return

    newNode = new Node
    newNode.data = value
    current = head
    count = 1
    While count < position - 1 AND current != null:
        current = current.next
        count = count + 1

    If current == null:
        Output "Cannot insert. Position is out of range."
        Return

    newNode.prev = current
    newNode.next = current.next

    If current.next != null:
        current.next.prev = newNode

    current.next = newNode

Function insertLastPosition(value):
    newNode = new Node
    newNode.data = value
    newNode.next = null
    If head == null:
        newNode.prev = null
        head = newNode
    Else:
        current = head
        While current.next != null:
            current = current.next
        current.next = newNode
        newNode.prev = current

Function deleteFirstElement():
    If head != null:
        temp = head
        head = head.next
        If head != null:
            head.prev = null
        Delete temp

Function deleteMiddleElement(position):
    If position <= 1:
        Call deleteFirstElement()
        Return

    current = head
    count = 1
    While count < position - 1 AND current != null:
        current = current.next
        count = count + 1

    If current == null OR current.next == null OR current.next.next == null:
        Output "Cannot delete. Node not found."
        Return

    temp = current.next
    current.next = temp.next

    If temp.next != null:
        temp.next.prev = current

    Delete temp

Function deleteLastElement():
    If head == null:
        Output "Cannot delete. List is empty."
        Return

    If head.next == null:
        Delete head
        head = null
    Else:
        current = head
        While current.next != null:
            current = current.next

        If current.prev != null:
            current.prev.next = null

        Delete current

Function update(value, position):
    current = head
    count = 1
    While current != null AND count < position:
        current = current.next
        count = count + 1

    If current != null:
        current.data = value
    Else:
        Output "Node not found at position " + position + ". Update failed."

Function display():
    current = head
    While current != null:
        Output current.data + " "
        current = current.next
    Output newline

Function main():
    Integer choice, value, position

    While true:
        Output "\nDoubly Linked List Operations:"
        Output "1. Insertion (First)"
        Output "2. Insertion (Between first & last)"
        Output "3. Insertion (Last)"
        Output "4. Delete (First)"
        Output "5. Delete (Between first & last)"
        Output "6. Delete (Last)"
        Output "7. Update"
        Output "8. Display"
        Output "9. Exit"
        Output "Enter your choice: "
        Input choice

        Switch choice:
            Case 1:
                Output "Enter value to insert at the beginning: "
                Input value
                Call insertFirstPosition(value)
                Break
            Case 2:
                Output "Enter value to insert: "
                Input value
                Output "Enter position (1 for after the first node): "
                Input position
                Call insertMiddlePosition(value, position)
                Break
            Case 3:
                Output "Enter value to insert at the end: "
                Input value
                Call insertLastPosition(value)
                Break
            Case 4:
                Call deleteFirstElement()
                Break
            Case 5:
                Output "Enter position (1 for the first node to delete after): "
                Input position
                Call deleteMiddleElement(position)
                Break
            Case 6:
                Call deleteLastElement()
                Break
            Case 7:
                Output "Enter position of the node to update: "
                Input position
                Output "Enter the new value: "
                Input value
                Call update(value, position)
                Break
            Case 8:
                Output "Doubly Linked List: "
                Call display()
                Break
            Case 9:
                Return 0
            Default:
                Output "Invalid choice. Please try again."
```

## Circular Linked List

```sql
Structure Node:
    Integer data
    Node next

Node head = null

Function insertFirstPosition(value):
    newNode = new Node
    newNode.data = value
    If head is null:
        head = newNode
        head.next = head
    Else:
        temp = head
        While temp.next is not head:
            temp = temp.next
        newNode.next = head
        head = newNode
        temp.next = head

Function insertMiddlePosition(value, position):
    newNode = new Node
    newNode.data = value
    current = head
    count = 1
    While count < position - 1 and current.next is not head:
        current = current.next
        count++
    newNode.next = current.next
    current.next = newNode

Function insertLastPosition(value):
    newNode = new Node
    newNode.data = value
    If head is null:
        head = newNode
        head.next = head
    Else:
        temp = head
        While temp.next is not head:
            temp = temp.next
        temp.next = newNode
        newNode.next = head

Function deleteFirstElement():
    If head is not null:
        temp = head
        head = head.next
        delete temp

Function deleteMiddleElement(position):
    If position is 1:
        deleteFirstElement()
        Return
    current = head
    count = 1
    While count < position - 1 and current.next is not head:
        current = current.next
        count++
    If current.next is head or current.next.next is head:
        Display "Cannot delete. Node not found."
        Return
    temp = current.next
    current.next = current.next.next
    delete temp

Function deleteLastElement():
    If head is null:
        Display "Cannot delete. List is empty."
        Return
    If head.next is head:
        delete head
        head = null
    Else:
        current = head
        While current.next.next is not head:
            current = current.next
        delete current.next
        current.next = head

Function update(value, position):
    current = head
    count = 1
    While current is not null and count < position:
        current = current.next
        count++
    If current is not null:
        current.data = value
    Else:
        Display "Node not found at position ", position, ". Update failed."

Function display():
    current = head
    If head is not null:
        Repeat:
            Display current.data, " "
            current = current.next
        Until current is head
    Display a new line

Function main():
    Integer choice, value, position

    While true:
        Display "\nCircular Linked List Operations:"
        Display "1. Insertion (First)"
        Display "2. Insertion (Between first & last)"
        Display "3. Insertion (Last)"
        Display "4. Delete (First)"
        Display "5. Delete (Between first & last)"
        Display "6. Delete (Last)"
        Display "7. Update"
        Display "8. Display"
        Display "9. Exit"
        Display "Enter your choice: "
        Input choice

        Switch choice:
            Case 1:
                Display "Enter value to insert at the beginning: "
                Input value
                insertFirstPosition(value)
            Case 2:
                Display "Enter value to insert: "
                Input value
                Display "Enter position (1 for after the first node): "
                Input position
                insertMiddlePosition(value, position)
            Case 3:
                Display "Enter value to insert at the end: "
                Input value
                insertLastPosition(value)
            Case 4:
                deleteFirstElement()
            Case 5:
                Display "Enter position (1 for the first node to delete after): "
                Input position
                deleteMiddleElement(position)
            Case 6:
                deleteLastElement()
            Case 7:
                Display "Enter position of the node to update: "
                Input position
                Display "Enter the new value: "
                Input value
                update(value, position)
            Case 8:
                Display "Linked List: "
                display()
            Case 9:
                Return 0
            Default:
                Display "Invalid choice. Please try again."
```
