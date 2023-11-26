# CSE 205 Mid Solve - Spring 2022

## 1

### a

I would choose an array-based data structure to manage the list of students eligible for merit scholarships in Spring 2022. Arrays are a suitable choice for this task because they provide constant-time access to elements by index, and we know the maximum number of students in advance (assuming there's a fixed number of students eligible for the scholarship). This simplicity and efficiency make arrays a practical choice for storing this data.

### b. Here is the pseudo code to manage the list of eligible students and perform some iterations on a sample dataset of at least 10 students

```pseudo
# Define an array to store the eligible students' information.
DECLARE eligible_students[MAX_STUDENTS]

# Initialize the index variable to 0.
DECLARE index = 0

# Iterate through the sample dataset and check for eligibility.
FOR i = 1 TO 10 DO
    # Read student information from the dataset.
    READ student_info
    
    # Check if the GPA is greater than or equal to 3.5.
    IF student_info.GPA >= 3.5 THEN
        # Add the student to the list of eligible students.
        eligible_students[index] = student_info
        index = index + 1
    END IF
END FOR

# Display the list of eligible students.
FOR i = 0 TO index - 1 DO
    PRINT eligible_students[i].Name, eligible_students[i].GPA
END FOR
```

Explanation:

1. We declare an array `eligible_students` to store information about eligible students. `MAX_STUDENTS` represents the maximum number of students that can be eligible for the scholarship.

2. We initialize an index variable `index` to keep track of the number of eligible students.

3. We iterate through a sample dataset of at least 10 students, reading each student's information.

4. Inside the loop, we check if the student's GPA is greater than or equal to 3.5. If yes, we add the student's information to the `eligible_students` array and increment the `index` variable.

5. After processing all students, we display the list of eligible students by iterating through the `eligible_students` array and printing their names and GPAs.

This pseudo code and algorithm use an array to efficiently store and manage the list of eligible students for the scholarship in Spring 2022.

## 2. [NOT IN SYLLABUS]

## 3

### a. **PUSH Operation in Stack:**

The 'PUSH' operation in a stack is used to insert an element onto the top of the stack. It involves two main steps:

1. **Increment the Stack Pointer (SP):** The stack pointer is incremented to point to the next available empty location in the stack.
2. **Insert the Element:** The element to be pushed is placed into the stack at the position indicated by the updated stack pointer.

Here's an example of a 'PUSH' operation in a stack using an array:

Let's assume we have an empty stack with an array `stack` of size 5:

```pseudo
stack: [_, _, _, _, _]
SP = 0 (initially pointing to the first position)
```

Now, we want to push the element 10 onto the stack:

1. Increment the Stack Pointer (SP):

   ```pseudo
   SP = SP + 1
   SP = 1
   ```

2. Insert the Element 10 into the Stack:

   ```pseudo
   stack: [10, _, _, _, _]
   ```

After the 'PUSH' operation, the element 10 is added to the top of the stack, and the stack pointer is updated to 1.

### b. **POP Operation in Stack:**

The 'POP' operation in a stack is used to remove and return the element from the top of the stack. It also involves two main steps:

1. **Retrieve the Element:** The element at the position indicated by the stack pointer is retrieved.
2. **Decrement the Stack Pointer (SP):** The stack pointer is decremented to point to the next element in the stack.

Here's the pseudo code and a step-by-step simulation for the 'POP' operation using a stack with an array of size 5:

```pseudo
# Initialize the stack and stack pointer
DECLARE stack[5]
DECLARE SP = 0

# Function to push an element onto the stack
FUNCTION PUSH(element):
    IF SP < 5 THEN
        stack[SP] = element
        SP = SP + 1
    ELSE
        PRINT "Stack Overflow"
    END IF
END FUNCTION

# Function to pop an element from the stack
FUNCTION POP():
    IF SP > 0 THEN
        SP = SP - 1
        RETURN stack[SP]
    ELSE
        PRINT "Stack Underflow"
        RETURN NULL
    END IF
END FUNCTION
```

Now, let's perform 'POP' operations on the stack:

1. Initial Stack:

   ```pseudo
   stack: [10, _, _, _, _]
   SP = 1
   ```

2. First 'POP' Operation:

   ```pseudo
   POP() returns 10
   SP = 0
   stack: [_, _, _, _, _]
   ```

3. Second 'POP' Operation (Stack Underflow):

   ```pseudo
   POP() returns NULL (as the stack is empty)
   SP = 0
   stack: [_, _, _, _, _]
   ```

In this simulation, we successfully performed 'POP' operations on the stack. The stack pointer is decremented, and the top element is returned and removed from the stack. If the stack is empty, a "Stack Underflow" message is displayed.

## 4

### a. **ENQUEUE Operation in Queue:**

The 'ENQUEUE' operation in a queue is used to insert an element at the rear (end) of the queue. It involves two main steps:

1. **Increment the Rear Pointer (RP):** The rear pointer is incremented to point to the next available empty location in the queue.
2. **Insert the Element:** The element to be enqueued is placed into the queue at the position indicated by the updated rear pointer.

Here's an example of an 'ENQUEUE' operation in a queue using an array:

Let's assume we have an empty queue with an array `queue` of size 5:

```pseudo
queue: [_, _, _, _, _]
Front (FP) = 0 (initially pointing to the first position)
Rear (RP) = 0 (initially pointing to the first position)
```

Now, we want to enqueue the element 20 into the queue:

1. Increment the Rear Pointer (RP):

   ```pseudo
   RP = RP + 1
   RP = 1
   ```

2. Insert the Element 20 into the Queue:

   ```pseudo
   queue: [20, _, _, _, _]
   ```

After the 'ENQUEUE' operation, the element 20 is added to the rear of the queue, and the rear pointer is updated to 1.

### b. **DEQUEUE Operation in Queue:**

The 'DEQUEUE' operation in a queue is used to remove and return the element from the front of the queue. It also involves two main steps:

1. **Retrieve the Element:** The element at the position indicated by the front pointer is retrieved.
2. **Increment the Front Pointer (FP):** The front pointer is incremented to point to the next element in the queue.

Here's the pseudo code and a step-by-step simulation for the 'DEQUEUE' operation using a queue with an array of size 5:

```pseudo
# Initialize the queue, front pointer, and rear pointer
DECLARE queue[5]
DECLARE FP = 0
DECLARE RP = 0

# Function to enqueue an element into the queue
FUNCTION ENQUEUE(element):
    IF RP < 5 THEN
        queue[RP] = element
        RP = RP + 1
    ELSE
        PRINT "Queue Overflow"
    END IF
END FUNCTION

# Function to dequeue an element from the queue
FUNCTION DEQUEUE():
    IF FP < RP THEN
        element = queue[FP]
        FP = FP + 1
        RETURN element
    ELSE
        PRINT "Queue Underflow"
        RETURN NULL
    END IF
END FUNCTION
```

Now, let's perform 'DEQUEUE' operations on the queue:

1. Initial Queue:

   ```pseudo
   queue: [20, _, _, _, _]
   FP = 0
   RP = 1
   ```

2. First 'DEQUEUE' Operation:

   ```pseudo
   DEQUEUE() returns 20
   FP = 1
   queue: [20, _, _, _, _]
   ```

3. Second 'DEQUEUE' Operation:

   ```pseudo
   DEQUEUE() returns NULL (as the queue is empty)
   FP = 1
   queue: [20, _, _, _, _]
   ```

In this simulation, we successfully performed 'DEQUEUE' operations on the queue. The front pointer is incremented, and the front element is returned and removed from the queue. If the queue is empty, a "Queue Underflow" message is displayed.
