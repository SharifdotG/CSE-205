# Spring 2023 Mid Solve

## 1

### a. Searching Technique in a Sorted Array

For a large sorted array, the most efficient searching technique is the **Binary Search**. This method operates by repeatedly dividing the search interval in half. It works well in sorted arrays as it narrows down the search space by half with each iteration, resulting in a time complexity of O(log n). This efficiency comes from the ability to discard half of the remaining elements at each step, reducing the number of comparisons needed to find the target item.

#### Binary Search Algorithm

```plaintext
BinarySearch(arr, target):
    left = 0
    right = length of arr - 1
    
    while left <= right:
        mid = (left + right) / 2
        
        if arr[mid] == target:
            return mid
        else if arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
            
    return -1  // Target not found
```

#### Diagram for Binary Search

```sql
Initial Sorted Array: [10, 20, 30, 40, 50, 60, 70, 80]
Target: 40

|10|20|30|40|50|60|70|80|
 ↑                 ↑
left            right
     ↑         ↑
    left     right
         ↑
        mid

```

### b. Finding Highest Three Marks Efficiently

To find the average of the highest three marks efficiently in an array of 40 marks, an algorithm that doesn't require sorting the entire array would be optimal. Here's a pseudocode to achieve this:

```plaintext
FindAverageOfTopThree(arr):
    max1 = -infinity
    max2 = -infinity
    max3 = -infinity
    
    for i from 0 to 39:
        if arr[i] > max1:
            max3 = max2
            max2 = max1
            max1 = arr[i]
        else if arr[i] > max2:
            max3 = max2
            max2 = arr[i]
        else if arr[i] > max3:
            max3 = arr[i]
    
    average = (max1 + max2 + max3) / 3
    return average
```

Example:
Given marks: [90, 85, 75, 95, ...] (40 marks in the array)
Using the algorithm above, find the average of the highest three marks efficiently without sorting the entire array.

## 2

### Designing a Web Browser

i. **Data Structure Selection**:
For designing a web browser, a suitable data structure for maintaining browsing history would be a **Stack**. The stack data structure follows Last-In-First-Out (LIFO) order, which aligns with the behavior of browsing history—most recently visited sites are accessed more frequently.

ii. **Stack for Browsing History:**:

Let's consider a scenario of 5 browsing history entries with the Stack data structure:

Stack Operations:

- `Push`: Adds a new site to the top of the stack.
- `Pop`: Removes the top site from the stack.
- `Peek`: Views the top site without removing it.
- Overflow condition: Stack full.
- Underflow condition: Stack empty.

Initial state:

```plaintext
| 5th site |
| 4th site |
| 3rd site |
| 2nd site |
| 1st site |
```

iii. **Operations on Browsing History**:

Adding a new site:

- If the stack is not full, push the new site onto the stack.
- If the stack is full (overflow condition), remove the oldest site (1st site) and push the new site.

Accessing a site:

- When a site is accessed, it moves to the top of the stack (most recently accessed).

Removing a site:

- When the user goes back or closes a tab, pop the top site from the stack (most recently accessed).
- If the stack is empty (underflow condition), no site to pop.

Diagrammatically representing adding a new site and accessing a site:

Adding a new site:

```mathematica
Before Addition:     After Addition:
| 5th site |         | 6th site |
| 4th site |         | 5th site |
| 3rd site |    =>   | 4th site |
| 2nd site |         | 3rd site |
| 1st site |         | 2nd site |
                     | 1st site |
```

Accessing a site:

```mathematica
Before Access:     After Access:
| 6th site |       | 6th site |
| 5th site |       | 5th site |
| 4th site |  =>   | 4th site |
| 3rd site |       | 3rd site |
| 2nd site |       | 2nd site |
| 1st site |       | 1st site |
```

These representations illustrate how the stack behaves upon adding a new site and accessing a site within the browsing history context.
Initial state:

```pseudo
| 5th site |
| 4th site |
| 3rd site |
| 2nd site |
| 1st site |
```

- **Adding a new site**:
  - If the stack is not full, push the new site onto the stack.
  - If the stack is full (overflow condition), remove the oldest site (1st site) and push the new site.

- **Accessing a site**:
  - When a site is accessed, it moves to the top of the stack (most recently accessed).

- **Removing a site**:
  - When the user goes back or closes a tab, pop the top site from the stack (most recently accessed).
  - If the stack is empty (underflow condition), no site to pop.

The iterations would involve pushing, popping, and accessing sites, ensuring the stack maintains the most recent history entries while handling overflow (adding) and underflow (removing) conditions appropriately.
