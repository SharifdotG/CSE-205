# Sorting and Searching Pseudocodes

## Bubble Sort

```sql
Initialize an array named 'arr' with 5 elements: {5, 4, 3, 2, 1}

Loop through the elements of the array from 0 to 4 (index range):
    For each iteration:
        Loop through the array elements from 0 to (4 - current iteration index):
            If the element at current index is greater than the next element:
                Swap the current element with the next element

Loop through the elements of the array from 0 to 4:
    Print each element followed by a space

```

## Linear Search

```sql
Create an array called "arr" with 5 elements: {5, 4, 3, 2, 1}
Set a variable called "key" to 3

For each element "num" in the array "arr":
    If the current element "num" is equal to the "key":
        Display "Found at index" followed by the index of "num"
        Exit the loop

If the loop finishes without finding a match:
    Display "Not found"
```

## Binary Search

```sql
FUNCTION binarySearch(arr[], n, key):
    start = 0
    end = n - 1

    WHILE start <= end:
        mid = (start + end) / 2

        IF arr[mid] == key:
            RETURN mid
        ELSE IF arr[mid] > key:
            end = mid - 1
        ELSE:
            start = mid + 1

    RETURN -1

FUNCTION main():
    arr[] = {5, 4, 3, 2, 1}

    FOR i FROM 0 TO 4:
        FOR j FROM 0 TO (4 - i):
            IF arr[j] > arr[j + 1]:
                temp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp

    OUTPUT binarySearch(arr, 5, 3)
```

## Interpolation Search

```sql
Function interpolationSearch(arr[], n, key)
    start = 0
    end = n - 1

    while start <= end
        mid = start + ((key - arr[start]) * (end - start)) / (arr[end] - arr[start])

        if arr[mid] equals key
            return mid
        else if arr[mid] > key
            end = mid - 1
        else
            start = mid + 1

    return -1

Function main()
    arr[] = {5, 4, 3, 2, 1}

    for i = 0 to 4
        for j = 0 to 4 - i
            if arr[j] > arr[j + 1]
                swap arr[j] and arr[j + 1]

    Print interpolationSearch(arr, 5, 3)

```
