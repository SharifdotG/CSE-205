# Spring 2022 Mid Solve

## 1. a. Design a simple data structure using array with example

### Simple Data Structure: Stack using an Array

#### Pseudocode

```plaintext
Stack data structure using Array:

Stack is a linear data structure that follows the Last In, First Out (LIFO) principle.

Functions:
  - Push(element): Adds an element to the top of the stack
  - Pop(): Removes the top element from the stack and returns it
  - Peek(): Returns the top element without removing it
  - IsEmpty(): Checks if the stack is empty
  - Size(): Returns the number of elements in the stack

Variables:
  - stack: Array to hold the elements of the stack
  - top: Variable to keep track of the top element in the stack

Algorithm:

Stack Initialization:
  - Initialize an empty array 'stack'
  - Initialize 'top' as -1

Push(element):
  - Increment 'top' by 1
  - Add 'element' to 'stack[top]'

Pop():
  - If 'top' is less than 0, return an error indicating stack underflow
  - Create a variable 'element' and assign 'stack[top]' to it
  - Decrement 'top' by 1
  - Return 'element'

Peek():
  - If 'top' is less than 0, return an error indicating stack is empty
  - Return 'stack[top]'

IsEmpty():
  - If 'top' is less than 0, return true (stack is empty)
  - Otherwise, return false

Size():
  - Return 'top + 1' (number of elements in the stack)
```

#### Diagram

```s
|       |
|_______|   <--- Top of Stack
|_______|
|_______|
|_______|
|_______|   <--- Bottom of Stack
```

#### Example

```python
# Implementing Stack using Python

class Stack:
    def __init__(self):
        self.stack = []
        self.top = -1

    def push(self, element):
        self.top += 1
        self.stack.append(element)

    def pop(self):
        if self.top < 0:
            raise IndexError("Stack underflow")
        else:
            popped = self.stack[self.top]
            self.top -= 1
            return popped

    def peek(self):
        if self.top < 0:
            raise IndexError("Stack is empty")
        else:
            return self.stack[self.top]

    def is_empty(self):
        return self.top < 0

    def size(self):
        return self.top + 1

# Example Usage:
stack = Stack()
stack.push(1)
stack.push(2)
stack.push(3)

print("Stack Size:", stack.size())  # Output: Stack Size: 3
print("Popped Element:", stack.pop())  # Output: Popped Element: 3
print("Top Element:", stack.peek())  # Output: Top Element: 2
print("Is Stack Empty?", stack.is_empty())  # Output: Is Stack Empty? False
```

This stack implementation utilizing an array allows for easy manipulation of elements while following the principles of a stack data structure.

## 1. b. Suppose you have been given an array of 8 elements which ... - Solve

### Pseudo Code for Removing Non-Duplicate Elements in an Array

#### Approach

1. Initialize an empty dictionary/hashmap to store element counts.
2. Iterate through the array and count occurrences of each element.
3. Iterate through the dictionary and collect elements that have a count of 1 (non-duplicates).
4. Generate the final array with non-duplicate elements.

```plaintext
// Initialize an empty dictionary
Create a dictionary 'elementCount'

// Iterate through the input array
for each element in the array:
    // Increment count for each element in the dictionary
    if element exists in 'elementCount':
        increment count of element
    else:
        set count of element as 1

// Initialize an empty array to store non-duplicate elements
Create an empty array 'nonDuplicateElements'

// Iterate through the dictionary
for each element-count pair in 'elementCount':
    // Check for non-duplicate elements (count = 1)
    if count of element is 1:
        Add element to 'nonDuplicateElements'

// Print or return 'nonDuplicateElements'
Print or return 'nonDuplicateElements'
```

#### Diagram (Visual Representation)

```yaml
Input Array: {2, 0, 3, 0, 1, 0, 0, 1}

// Dictionary to store element counts
elementCount = {
    2: 1,
    0: 4,
    3: 1,
    1: 2
}

// Non-duplicate elements array
nonDuplicateElements = {2, 3}

Output: {2, 3}
```

This pseudo code defines a method to identify non-duplicate elements in an array and generate a new array with those elements. Adjustments in coding languages may be necessary for implementation.

## 2. a. Compare 'Linear Search' with 'Binary Search'

Certainly! Here's a comparison between Linear Search and Binary Search in Markdown format.

### Linear Search vs. Binary Search

#### Linear Search

Linear Search is a simple searching algorithm that sequentially checks each element in a list until a match is found or the end of the list is reached.

**Pseudocode:**

```python
function linear_search(list, target):
    for each element in list:
        if element equals target:
            return element found at index
    return element not found
```

#### Binary Search

Binary Search is an efficient search algorithm that works on sorted arrays by repeatedly dividing the search interval in half.

**Pseudocode:**

```python
function binary_search(arr, target):
    low = 0
    high = length of arr - 1
    
    while low <= high:
        mid = (low + high) / 2
        if arr[mid] equals target:
            return element found at index
        else if arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
            
    return element not found
```

### Comparison

| Criteria       | Linear Search                                      | Binary Search                                      |
|----------------|----------------------------------------------------|----------------------------------------------------|
| Time Complexity| O(n) - Linear time                                  | O(log n) - Logarithmic time                         |
| Requirement    | Works on both sorted and unsorted lists             | Requires a sorted list                              |
| Approach       | Sequential search                                  | Divide and conquer approach                         |
| Efficiency     | Less efficient for large lists                     | Highly efficient for large sorted lists             |
| Space          | Requires minimal extra space                       | Requires minimal extra space                        |

These differences highlight the trade-offs between the simplicity of implementation (in Linear Search) and the efficiency gained through a sorted list and a more complex algorithm (in Binary Search).

## 2. b. Suppose you have been given a sorted binary array ... - Solve

### Algorithm for Counting '1's in a Sorted Binary Array using Linear Search

1. **Initialize** a counter variable `count` to 0.
2. **Iterate** through each element in the array:
   - **If** the current element is 1, increment `count` by 1.
   - **Else**, continue to the next element.
3. **Return** the final value of `count`.

### Pseudocode for Counting '1's in a Sorted Binary Array using Linear Search

```python
FUNCTION countOnes(sortedArray)
    count = 0
    FOR each element in sortedArray
        IF element is 1
            increment count by 1
        END IF
    END FOR
    RETURN count
END FUNCTION
```

This pseudocode defines a function countOnes that takes a sorted binary array as input. It initializes a counter variable count to 0 and iterates through each element in the array. If an element is 1, it increments the count variable. Finally, it returns the total count of '1's found in the array.

### Diagrammatic Representation of the Algorithm

Let's visualize the process:

```yaml
Array: [0, 0, 1, 1, 1, 1, 1]

Iteration 1:
[0, 0, 1, 1, 1, 1, 1]
 ^

Iteration 2:
[0, 0, 1, 1, 1, 1, 1]
    ^

Iteration 3:
[0, 0, 1, 1, 1, 1, 1]
       ^

Iteration 4:
[0, 0, 1, 1, 1, 1, 1]
          ^

Iteration 5:
[0, 0, 1, 1, 1, 1, 1]
             ^

Iteration 6:
[0, 0, 1, 1, 1, 1, 1]
                ^

Total '1's found: 5
```

This algorithm linearly traverses the sorted binary array, counting the occurrences of '1's encountered along the way.

## 2 (OR). a. Discuss 'Position Probing' in interpolation search with example

### Position Probing in Interpolation Search

Interpolation search is an efficient algorithm for searching a sorted array. It improves upon the time complexity of binary search by making intelligent guesses about the location of the target value. Position probing, a key concept in interpolation search, involves estimating the probable position of the target within the sorted array.

#### Algorithm Overview

1. **Estimation:** It estimates the probable position of the target value by using mathematical interpolation based on the values at array indices.
2. **Refinement:** Based on the estimation, it narrows down the search space by updating the low and high indices for further search.
3. **Iteration or Recursion:** Continues the search until the target value is found or the search space is exhausted.

#### Example

Let's consider an array `[10, 20, 30, 40, 50, 60, 70, 80, 90, 100]` and suppose we want to search for the value `60`.

1. **Estimation Step:**
   - Calculate the probable position using interpolation formula:

     ```css
     pos = low + ((value - arr[low]) * (high - low) / (arr[high] - arr[low]))
     ```

     Here, `value = 60`, `low = 0`, `high = 9`, `arr[low] = 10`, `arr[high] = 100`.

     ```css
     pos = 0 + ((60 - 10) * (9 - 0) / (100 - 10)) = 0 + (50 * 9 / 90) = 0 + 5 = 5
     ```

   - The estimated position is `5`.

2. **Refinement Step:**
   - Compare the target value with the estimated value at position `5`.
   - Adjust the search boundaries:
     - As `arr[5] = 60` matches the target value, the search is successful.

#### Diagrams

```yaml
     0    1    2    3    4    5    6    7    8    9   (Indices)
    [10, 20, 30, 40, 50, 60, 70, 80, 90, 100] (Array)
                  ↑
                  |
                 pos
```

The arrow indicates the estimated position `pos = 5`, which corresponds to the value `60`, leading to a successful search.

Position probing in interpolation search allows for intelligent estimation, reducing the search space efficiently and effectively finding the target value in a sorted array.

## 2 (OR). b. "Interpolation search is an improved variant of binary search" - Solve

### Interpolation Search: A Refined Binary Search Technique

Interpolation search represents an evolutionary step beyond binary search, particularly advantageous when dealing with uniformly distributed datasets. Unlike binary search's fixed mid-point approach, interpolation search dynamically calculates the probable location of the target value based on the distribution of data.

Consider an example dataset sorted in ascending order:

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|-------|---|---|---|---|---|---|---|---|---|---|
| Value | 2 | 4 | 6 | 8 | 10 | 12 | 14 | 16 | 18 | 20 |

#### Binary Search

1. To find 14:
   - Start with the middle element (10), then determine whether to proceed left or right.
   - Progressively halve the search space until reaching the target.

#### Interpolation Search

1. For the same target value, 14:
   - Utilizes a heuristic approach considering the value range and distribution.
   - Estimates the probable location based on the value distribution.

#### Diagrams

**Binary Search Diagram:**

```less
Initial Array:
2  4  6  8  10  12  14  16  18  20

       |        |    TARGET: 14
       v        v

         [10]  
       /       \ 
     [6]      [16]
    /   \    /    \
 [4]    [8][14] [18,20]
```

**Interpolation Search Diagram:**

```less
Initial Array:
2  4  6  8  10  12  14  16  18  20

             TARGET: 14 (Estimated)
             |
             v
     [12]  [14]  [16]
```

## Advantages of Interpolation Search

1. **Efficiency in Uniformly Distributed Data**: Interpolation search thrives when dealing with datasets where elements are evenly distributed. It adapts its search based on the distribution of values, potentially outperforming binary search.

2. **Reduced Number of Comparisons**: By estimating the probable position of the target element, interpolation search often requires fewer iterations compared to binary search, resulting in quicker searches.

In conclusion, while interpolation search shines in scenarios with uniformly distributed data, its performance might degrade in situations where the data distribution is uneven or non-linear. Nonetheless, its intelligent estimation of element positions marks a significant enhancement over conventional binary search algorithms.

### Conclusion

Interpolation search adapts to the dataset's distribution, potentially outperforming binary search in scenarios where data isn't evenly distributed. However, its effectiveness depends on the nature of the dataset.

## 3. a. Discuss the time complexity of linked list

### Time Complexity of Linked List

The time complexity of operations in a linked list varies based on the type of operation performed. Here's a breakdown of various operations and their time complexities in a singly linked list:

#### Insertion

- **Beginning (prepend):** O(1)
- **End (append):** O(n) if traversing the list, O(1) if maintaining a reference to the tail
- **Middle (insert at a specific position):** O(n)

#### Deletion

- **Beginning (remove first element):** O(1)
- **End (remove last element):** O(n) if traversing the list to find the second-to-last node, O(1) if maintaining a reference to the tail
- **Middle (remove element at a specific position):** O(n)

#### Searching

- **Linear Search:** O(n) - Requires traversing the list from the beginning to find the target element.
- **Binary Search:** Not applicable to standard linked lists due to lack of random access.

### Diagram

Here's a simple representation of a singly linked list:

```sql
Node 1         Node 2         Node 3         Node 4
| Value: A | -> | Value: B | -> | Value: C | -> | Value: D | -> NULL
```

In this diagram, each node contains a value and a pointer/reference to the next node in the sequence. Traversal involves starting from the head (Node 1) and moving through the list using these pointers until reaching the end (Node 4 pointing to NULL).

The time complexity largely depends on the operation's need to traverse the list sequentially. Insertion and deletion at the beginning typically have constant time complexity due to directly updating pointers, while operations at the end or middle require traversal, resulting in linear time complexity.

Overall, the time complexity of operations in linked lists emphasizes the trade-off between efficient insertion/removal at the cost of potentially slower search times compared to data structures with direct access like arrays.

## 3. b. Suppose you have been given an array of 8 elements ... - Solve

### Pseudo Code to Insert Fibonacci Array into a Linked List

```python
class Node:
    int data
    Node next

function insertLinkedList(array):
    head = new Node()
    current = head
    
    for i from 0 to length of array - 1:
        newNode = new Node()
        newNode.data = array[i]
        current.next = newNode
        current = current.next

    return head.next
```

### Iterations and Diagrams

```sql
Array: [0, 1, 1, 2, 3, 5, 8, 13]

Iteration 1:
    head -> NULL
    current -> head

Iteration 2:
    head -> 0 -> NULL
    current -> 0

Iteration 3:
    head -> 0 -> 1 -> NULL
    current -> 1

Iteration 4:
    head -> 0 -> 1 -> 1 -> NULL
    current -> 1

Iteration 5:
    head -> 0 -> 1 -> 1 -> 2 -> NULL
    current -> 2

Iteration 6:
    head -> 0 -> 1 -> 1 -> 2 -> 3 -> NULL
    current -> 3

Iteration 7:
    head -> 0 -> 1 -> 1 -> 2 -> 3 -> 5 -> NULL
    current -> 5

Iteration 8:
    head -> 0 -> 1 -> 1 -> 2 -> 3 -> 5 -> 8 -> NULL
    current -> 8

Iteration 9:
    head -> 0 -> 1 -> 1 -> 2 -> 3 -> 5 -> 8 -> 13 -> NULL
    current -> 13
```

### Diagram Representation

```less
Linked List:
0 -> 1 -> 1 -> 2 -> 3 -> 5 -> 8 -> 13 -> NULL
```

This pseudo code iterates through the given array of Fibonacci numbers and inserts each element into a linked list, creating a chain of nodes representing the sequence. The iterations and diagrams depict the step-by-step insertion of the array elements into the linked list.

## 4. UAP appreciates the meritorious students, thus it ... - Solve

### Merit Scholarship List for Spring 2022 at UAP

#### Data Structure Selection: Array

Arrays offer simplicity and efficiency when dealing with fixed-size collections, which suits this scenario where the number of students is known and won't change frequently. Accessing elements in an array is straightforward, making it easier to manage the list of eligible students efficiently.

#### Pseudo Code

```pseudocode
# Initialize an array to store eligible students for the merit scholarship
students = [empty] * max_students

# Sample dataset of GPA scores (at least 10 students)
gpa_scores = [3.6, 3.8, 3.2, 3.9, 4.0, 3.7, 3.4, 3.6, 3.9, 3.8]

# Iterate through the GPA scores to identify eligible students
for i from 0 to length(gpa_scores) - 1 do
    if gpa_scores[i] >= 3.5 then
        students[i] = gpa_scores[i]

# Display eligible students for the scholarship
for i from 0 to length(students) - 1 do
    if students[i] is not empty then
        display students[i]
```

#### Iterations

| **Index** | **Student's GPA** | **Eligibility** |
|-----------|-------------------|-----------------|
| 0         | 3.6               | Eligible        |
| 1         | 3.8               | Eligible        |
| 2         | 3.2               | -               |
| 3         | 3.9               | Eligible        |
| 4         | 4.0               | Eligible        |
| 5         | 3.7               | Eligible        |
| 6         | 3.4               | -               |
| 7         | 3.6               | Eligible        |
| 8         | 3.9               | Eligible        |
| 9         | 3.8               | Eligible        |


This table showcases the indices, respective GPA scores, and eligibility of students for the merit scholarship in the Spring 2022 semester at UAP.

#### Diagrams (Add Yourself!)

## 5. Standard Chartered ple is a British multinational ... - Solve

### Smart Cash Counter Design

#### Data Structure Selection - Queue

I would choose a queue for managing the cash counter due to its FIFO (First-In-First-Out) nature, aligning well with the typical customer service approach where the customers are served in the order they arrive. This structure suits the cash counter scenario perfectly as it ensures fairness in serving customers and maintains the chronological order of their arrival.

#### Pseudo Code & Diagrams

Let's assume the UAP ID is **202315**.

**Initialization:**

```s
Create a Queue named cashCounter
Set maxCustomers = 11 (sum of digits in UAP ID: 2 + 0 + 2 + 3 + 1 + 5)
Set maxCounters = 5 (maximum digit value in UAP ID: 5)
```

**Cash Counter Management:**

```s
Function enqueue(customer):
    if cashCounter.size() < maxCustomers:
        cashCounter.enqueue(customer)
    else:
        Display "Cash counter is full, please wait."

Function serveCustomers():
    for counter in range(maxCounters):
        if cashCounter.isEmpty():
            Display "No customers in queue."
            break
        else:
            servedCustomer = cashCounter.dequeue()
            Display "Serving customer:", servedCustomer
```

**Diagram:**

```s
Initial Queue (cashCounter): Empty

Enqueue Operations:
1. enqueue("Customer1")
2. enqueue("Customer2")
3. enqueue("Customer3")

Queue (cashCounter):
Front -> Customer1 -> Customer2 -> Customer3 <- Rear

Serve Customers:
- Counter 1 serves Customer1
- Counter 2 serves Customer2
- Counter 3 serves Customer3
```

This pseudo code and setup would ensure efficient management of the cash counter, allowing a maximum of 11 customers in the queue and allocating service to a maximum of 5 counters simultaneously, reflecting the specified constraints based on the UAP ID digits.
