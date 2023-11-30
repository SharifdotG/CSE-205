# CSE 205 - Pseudocodes and Algorithms

## Array Deletion

```sql
Create an array called "arr" with 5 elements initialized to {1, 2, 3, 4, 5}
Set a variable "index" to 2

For each element "i" starting from "index" up to 3 do:
    Set arr[i] to the value of arr[i + 1]

For each element "i" from 0 to 3 do:
    Display arr[i] followed by a space

End the program
```

## Array Insertion

```sql
Create an array called "arr" with 5 elements: {1, 2, 3, 4, 5}
Set the variable "index" to 2
Set the variable "value" to 10

For each element "i" starting from 4 down to "index":
    Set arr[i + 1] equal to arr[i]

Set arr[index] to "value"

For each element "i" from 0 to 5:
    Display arr[i] followed by a space
```

## Array Merge

```sql
Create two arrays, arr1 and arr2, each containing five integers.
Set arr1 to {1, 2, 3, 4, 5}.
Set arr2 to {6, 7, 8, 9, 10}.

Create a new array, arr3, capable of holding ten integers.

For each element i from 0 to 4:
    Set arr3[i] to the value of arr1[i].

For each element i from 0 to 4:
    Set arr3[i + 5] to the value of arr2[i].

For each element i from 0 to 9:
    Output the value of arr3[i], followed by a space.
```

## Array Min Max

```sql
Create an array named 'arr' with 5 elements: [1, 2, 3, 4, 5]
Set variable 'min' to the first element of 'arr'
Set variable 'max' to the first element of 'arr'

For each element 'i' from 1 to 4 in 'arr':
    If the element at index 'i' in 'arr' is less than 'min':
        Update 'min' to be the element at index 'i' in 'arr'
    
    If the element at index 'i' in 'arr' is greater than 'max':
        Update 'max' to be the element at index 'i' in 'arr'

Display "Min: " followed by the value of 'min'
Display "Max: " followed by the value of 'max'
```

## Array Palindrome

```sql
Declare an array 'arr' of size 5 and initialize it with values {1, 2, 3, 2, 1}
Declare a boolean variable 'isPalindrome' and set it to true

For 'i' from 0 to 4:
    If arr[i] is not equal to arr[4 - i]:
        Set 'isPalindrome' to false
        Break the loop

If 'isPalindrome' is true:
    Output "Palindrome"
Else:
    Output "Not Palindrome"
```

## Array Split

```sql
Create an array named arr with 5 elements initialized to {1, 2, 3, 4, 5}
Create an empty array arr1 with a size of 3
Create an empty array arr2 with a size of 2

For each index i from 0 to 2:
    Set arr1[i] to the value of arr[i]

For each index i from 0 to 1:
    Set arr2[i] to the value of arr[i + 3]

For each index i from 0 to 2:
    Display the value of arr1[i] followed by a space

Display a new line

For each index i from 0 to 1:
    Display the value of arr2[i] followed by a space

End of program
```
