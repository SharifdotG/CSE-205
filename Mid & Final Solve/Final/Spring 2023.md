# Fall 2023 Final Solve

## 1. a. Suppose you are a programmer and your client... - Solve

### Efficient Searching System using Arrays

In the realm of programming, when frequent item searches are the priority, the choice of a suitable data structure coupled with an optimized search algorithm is crucial. One often opted-for data structure is the **Array** due to its simplicity and direct access to elements.

#### Searching Algorithm: Binary Search

**Binary search** is a potent algorithm for quick and efficient searches in a sorted array. Its effectiveness lies in halving the search space repeatedly, making it highly performant even with large datasets.

##### How Binary Search Works

1. **Sort the Array:** First, ensure that the array is sorted in ascending or descending order. Sorting can be done using various sorting algorithms like merge sort, quicksort, etc.

2. **Locate the Middle Element:** Begin by identifying the middle element of the array.

3. **Compare and Narrow Down:** Compare the target element with the middle element. If the target is smaller, focus on the left half of the array; if larger, focus on the right half.

4. **Repeat the Process:** Continue this process of halving the search space by adjusting the pointers to the appropriate section of the array until the target element is found.

##### Example

Let's consider an example:

```python
# Sorted array
arr = [2, 4, 7, 10, 14, 18, 23, 29, 31]

# Target element to search
target = 14

# Applying Binary Search
left, right = 0, len(arr) - 1

while left <= right:
    mid = (left + right) // 2
    
    # Check if target is at the middle
    if arr[mid] == target:
        print(f"Element {target} found at index {mid}")
        break
    
    # If target is smaller, focus on left half
    elif arr[mid] < target:
        left = mid + 1
    
    # If target is larger, focus on right half
    else:
        right = mid - 1
else:
    print(f"Element {target} not found in the array")
```

This algorithm reduces the search space by half in each iteration, resulting in logarithmic time complexity **O(log n)** for searching, where **n** is the number of elements in the array. Hence, for systems requiring frequent searches, binary search with arrays proves to be an efficient choice.

## 1. b. The Alumni association of UAP is going to organize... - Solve

### Sorting Algorithm: Bubble Sort

```python
# Bubble Sort Algorithm
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        swapped = False
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
        if not swapped:
            break
```

#### Time Complexity

- **Best Case:** O(n)
  - Occurs when the array is already sorted. The algorithm checks for swaps but doesn't perform any.

- **Average Case:** O(n^2)
  - Considers the average number of comparisons and swaps.

- **Worst Case:** O(n^2)
  - Happens when the array is sorted in reverse order, causing maximum comparisons and swaps.

---

## 2. A computer network is defined as a system that connects... - Solve

### Designing a Computer Network with Ring Topology

#### Data Structure Selection

For the scenario of designing a computer network based on ring topology, a **circular linked list** would be an optimal choice for the data structure. The reasons for this choice are:

- **Sequential Data Management**: A circular linked list aligns with the sequential nature of data transmission in a ring topology. Each node represents a computer in the network, and the circular nature facilitates continuous data flow.
  
- **Efficient Traversal**: Traversing a circular linked list ensures efficient data packet forwarding, allowing nodes to access their neighboring nodes easily for bi-directional transmission.

- **Dynamic Scalability**: As networks expand or contract, the circular linked list data structure can accommodate additions or removals of computing devices dynamically, maintaining the integrity of the topology.

#### Basic Operations in Pseudocode

```python
// Define Node structure for Circular Linked List
Node:
    data
    next

// Initialize Circular Linked List
InitializeCircularList():
    head = NULL

// Insert Node at the End of Circular Linked List
InsertAtEnd(data):
    newNode = createNode(data)
    if head == NULL:
        head = newNode
        newNode.next = head
    else:
        temp = head
        while temp.next != head:
            temp = temp.next
        temp.next = newNode
        newNode.next = head

// Delete Node from Circular Linked List
DeleteNode(data):
    if head == NULL:
        return "List is empty"
    elif head.data == data:
        temp = head
        while temp.next != head:
            temp = temp.next
        if head == head.next:
            head = NULL
        else:
            head = head.next
            temp.next = head
    else:
        prev = NULL
        current = head
        while current.next != head and current.data != data:
            prev = current
            current = current.next
        if current.next == head:
            return "Node not found"
        else:
            prev.next = current.next
```

#### Diagram Representation

```r
Node 1 --> Node 2 --> Node 3 --> Node 4 --> Node 1
^                                           |
|___________________________________________|
```

This circular linked list represents a ring topology where each node denotes a computer, and the arrows indicate the direction of data transmission. The last node connects back to the first node, forming a complete loop for data circulation.

This structure and its operations align well with the requirements of a ring topology, enabling efficient data transmission among connected computing devices.

## 3. a. Explain the requirements of a Recursive Solution?

### Requirements for a Recursive Solution

A recursive solution necessitates:

1. **Base Case:** A condition that indicates when the recursion should stop. It serves as the exit point and prevents infinite recursion.

2. **Dividing the Problem:** Breaking down the main problem into smaller, simpler instances of the same problem. This step simplifies the solution process.

3. **Progress Toward Base Case:** Each recursive call must move the problem closer to the base case. It ensures that the recursive calls converge towards termination.

4. **Function Calls Itself:** The function or algorithm must call itself within its definition to solve smaller instances of the problem, progressing towards the base case.

---

This structure ensures that the recursive function can solve complex problems by breaking them down into smaller, more manageable sub-problems until reaching a base case where the solution is straightforward.

## 3. b. The greatest common divisor (GCD) of two or more... - Solve

### Computing GCD using Iterative Approach

#### Pseudocode

```sql
FUNCTION gcd_iterative(a, b)
    WHILE b != 0
        temp = b
        b = a % b
        a = temp
    END WHILE
    RETURN a
END FUNCTION
```

#### Examples

Let's compute GCD using the above algorithm for numbers 48 and 18.

```sql
gcd_iterative(48, 18)
Step 1: a = 48, b = 18
Step 2: temp = 18, b = 48 % 18 = 12, a = 18
Step 3: temp = 12, b = 18 % 12 = 6, a = 12
Step 4: temp = 6, b = 12 % 6 = 0, a = 6
Step 5: b = 0, GCD = a = 6
```

### Computing GCD using Recursive Approach

#### Pseudocodes

```sql
FUNCTION gcd_recursive(a, b)
    IF b == 0
        RETURN a
    ELSE
        RETURN gcd_recursive(b, a % b)
    END IF
END FUNCTION
```

#### sql

Let's compute GCD using the above algorithm for numbers 48 and 18.

```sql
gcd_recursive(48, 18)
Step 1: a = 48, b = 18
Step 2: gcd_recursive(18, 48 % 18 = 12)
Step 3: gcd_recursive(12, 18 % 12 = 6)
Step 4: gcd_recursive(6, 12 % 6 = 0)
Step 5: b = 0, GCD = a = 6
```

### Comparison between Iterative and Recursive Approaches

- **Iterative Approach:**
  - Pros:
    - Generally uses less memory as it doesn't involve function call overhead.
    - Can be more straightforward to understand for some people.
  - Cons:
    - Might be harder to implement in some cases.
    - Requires additional variables to store intermediate values.

- **Recursive Approach:**
  - Pros:
    - Can offer a more concise and elegant solution in certain cases.
    - Can be easier to implement for problems inherently based on recursion.
  - Cons:
    - Might use more memory due to function call overhead.
    - Can lead to stack overflow for very large input values due to recursive calls.

### Conclusion

The choice between iterative and recursive approaches often depends on the specific problem, personal preference, and resource constraints. Generally, for simple problems like computing GCD, the iterative approach might be slightly more efficient due to lesser overhead. However, for some individuals, the recursive approach might be more intuitive and easier to understand. Both methods have their advantages and disadvantages, and the selection should be based on factors like readability, performance, and specific problem constraints.

## 4. a. Write the pseudocode to find out the successor... - Solve

Certainly! Below is the pseudocode to find the successor of a given key value `x` in a Binary Search Tree (BST) using recursion:

```sql
FUNCTION findSuccessor(root, x):
    IF root is NULL:
        RETURN NULL
    
    IF root.key <= x:
        RETURN findSuccessor(root.right, x)
    
    ELSE:
        LEFT := findSuccessor(root.left, x)
        IF LEFT is not NULL:
            RETURN LEFT
        ELSE:
            RETURN root
```

This pseudocode efficiently traverses the BST to find the successor of the given key `x`.

## 4. b. Do it yourself

## 5. Do it yourself
