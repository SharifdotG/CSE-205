# CSE 205 Mid Solve - Fall 2022

## 1

### a. To organize the information of students at U. A. High School, we can use an array-based data structure. We can create an array where each element corresponds to a student's unique ID, and the value at each index represents their power score. Here's a pseudocode to illustrate this

```python
# Define an array to store power scores for each student
power_scores = [0] * MAX_STUDENT_ID

# Function to update a student's power score
def update_power_score(student_id, new_score):
    if student_id < 1 or student_id > MAX_STUDENT_ID:
        print("Invalid student ID")
    else:
        power_scores[student_id] = new_score

# Function to retrieve a student's power score
def get_power_score(student_id):
    if student_id < 1 or student_id > MAX_STUDENT_ID:
        return None
    return power_scores[student_id]
```

In this pseudocode, `MAX_STUDENT_ID` represents the maximum possible student ID number. Each student's ID serves as an index in the `power_scores` array, allowing for efficient retrieval and update of their power scores.

### b. To update the power score of a student (e.g., student ID 18), the authority can simply call the `update_power_score` function with the new score. Here's how it can be done

```python
# Update the power score for student with ID 18 to 7
update_power_score(18, 7)
```

This code will update the power score of student ID 18 to 7 in the `power_scores` array. No diagrams are necessary for this simple update operation, as it directly modifies the value at the corresponding index in the array.

## 2

### a. **Comparison of Linear Search, Binary Search, and Interpolation Search:**

1. **Linear Search**:
   - **Algorithm**: Linear search involves sequentially checking each element of the array until a match is found.
   - **Time Complexity**: O(n) in the worst case, where n is the number of elements in the array.
   - **Suitable for**: Unsorted arrays or when the elements are not in a particular order.

2. **Binary Search**:
   - **Algorithm**: Binary search divides the array in half and eliminates half of the elements in each iteration, making it suitable for sorted arrays.
   - **Time Complexity**: O(log n) in the worst case.
   - **Suitable for**: Sorted arrays.

3. **Interpolation Search**:
   - **Algorithm**: Interpolation search is an improved version of binary search that makes an educated guess about the location of the target element based on its value and the range of values in the array.
   - **Time Complexity**: O(log log n) on average, but it can degrade to O(n) in the worst case.
   - **Suitable for**: Sorted arrays with evenly distributed values.

### b. **Counting the Number of '1's in a Sorted Binary Array using Linear Search**

Here's an algorithm to count the number of '1's in a sorted binary array using linear search. We will also simulate the iterations and draw diagrams for better understanding:

```python
# Function to count the number of '1's in a sorted binary array using linear search
def count_ones(arr):
    count = 0
    for i in range(len(arr)):
        if arr[i] == 1:
            count += 1
        else:
            # As soon as we encounter a '0', we can stop because the rest will also be '0's.
            break
    return count
```

Let's simulate the algorithm with an example binary array `[0, 0, 1, 1, 1, 1]`:

1. Initialize `count` to 0.
2. Start iterating through the array:
   - At index 0: `arr[0]` is 0, so we increment `count` to 0.
   - At index 1: `arr[1]` is 0, so we increment `count` to 0.
   - At index 2: `arr[2]` is 1, so we increment `count` to 1.
   - At index 3: `arr[3]` is 1, so we increment `count` to 2.
   - At index 4: `arr[4]` is 1, so we increment `count` to 3.
   - At index 5: `arr[5]` is 1, so we increment `count` to 4.
3. The loop ends because we encountered a '0'.
4. Return `count`, which is 4.

Diagram:

```mathematica
[0, 0, 1, 1, 1, 1]
         ^
         | (count = 1)
```

In this example, the algorithm counted 4 '1's in the sorted binary array using linear search.

## 3

Sure, let's simulate the operations on a stack of size 5 step by step with diagrams and explanations:

1. **Initialize an Empty Stack**:

   ```mathematica
   Stack: [ ][ ][ ][ ][ ]
   ```

   - The stack is empty.

2. **isEmpty**:

   - Checking if the stack is empty.
   - Result: The stack is empty.

3. **PUSH: 5**:

   - Pushing the element 5 onto the stack.
   - Stack after push:

   ```mathematica
   Stack: [5][ ][ ][ ][ ]
   ```

4. **PUSH: 3**:

   - Pushing the element 3 onto the stack.
   - Stack after push:

   ```mathematica
   Stack: [5][3][ ][ ][ ]
   ```

5. **POP**:

   - Popping the top element from the stack.
   - Stack after pop:

   ```mathematica
   Stack: [5][ ][ ][ ][ ]
   ```

6. **isFull**:

   - Checking if the stack is full.
   - Result: The stack is not full.

7. **PUSH: 7**:

   - Pushing the element 7 onto the stack.
   - Stack after push:

   ```mathematica
   Stack: [5][7][ ][ ][ ]
   ```

8. **POP**:

   - Popping the top element from the stack.
   - Stack after pop:

   ```mathematica
   Stack: [5][ ][ ][ ][ ]
   ```

9. **POP**:

   - Popping the top element from the stack.
   - Stack after pop:

   ```mathematica
   Stack: [ ][ ][ ][ ][ ]
   ```

10. **isEmpty**:

    - Checking if the stack is empty.
    - Result: The stack is empty.

11. **PUSH: -1**:

    - Pushing the element -1 onto the stack.
    - Stack after push:

    ```mathematica
    Stack: [-1][ ][ ][ ][ ]
    ```

Now, the stack has gone through all the specified operations. The final state of the stack is an empty stack with only one element (-1) pushed onto it.

## 4

Certainly, let's simulate the operations on a queue of size 5 step by step with diagrams and explanations:

1. **Initialize an Empty Queue**:

   ```mathematica
   Front: [ ][ ][ ][ ][ ] :Rear
   ```

   - The queue is empty with both the front and rear at the leftmost position.

2. **isEmpty**:

   - Checking if the queue is empty.
   - Result: The queue is empty.

3. **ENQUEUE: 5**:

   - Enqueuing the element 5 into the queue.
   - Queue after enqueue:

   ```mathematica
   Front: [5][ ][ ][ ][ ] :Rear
   ```

4. **ENQUEUE: 3**:

   - Enqueuing the element 3 into the queue.
   - Queue after enqueue:

   ```mathematica
   Front: [5][3][ ][ ][ ] :Rear
   ```

5. **DEQUEUE**:

   - Dequeuing the front element from the queue.
   - Queue after dequeue:

   ```mathematica
   Front: [ ][3][ ][ ][ ] :Rear
   ```

6. **isFull**:

   - Checking if the queue is full.
   - Result: The queue is not full.

7. **ENQUEUE: 7**:

   - Enqueuing the element 7 into the queue.
   - Queue after enqueue:

   ```mathematica
   Front: [ ][3][7][ ][ ] :Rear
   ```

8. **DEQUEUE**:

   - Dequeuing the front element from the queue.
   - Queue after dequeue:

   ```mathematica
   Front: [ ][ ][7][ ][ ] :Rear
   ```

9. **DEQUEUE**:

   - Dequeuing the front element from the queue.
   - Queue after dequeue:

   ```mathematica
   Front: [ ][ ][ ][ ][ ] :Rear
   ```

10. **isEmpty**:

    - Checking if the queue is empty.
    - Result: The queue is empty.

11. **ENQUEUE: -1**:

    - Enqueuing the element -1 into the queue.
    - Queue after enqueue:

    ```mathematica
    Front: [-1][ ][ ][ ][ ] :Rear
    ```

Now, the queue has gone through all the specified operations. The final state of the queue is an empty queue with only one element (-1) enqueued at the front.
