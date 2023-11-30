# Recursion Pseudocodes

## Factorial

```sql
Function factorial(n):
    If n equals 0:
        Return 1
    Else:
        Return n multiplied by factorial(n minus 1)

Function main():
    Display factorial(5)
    Return 0
```

## Fibonacci

```sql
FUNCTION fibonacci(n)
    IF n <= 1 THEN
        RETURN n
    ELSE
        RETURN fibonacci(n - 1) + fibonacci(n - 2)

FUNCTION main()
    FOR i = 0 TO 4 DO
        OUTPUT fibonacci(i) + " "
```

## GCD

```sql
FUNCTION gcd(a, b)
    IF b equals 0 THEN
        RETURN a
    ELSE
        RETURN gcd(b, a modulo b)

READ a from input
READ b from input

OUTPUT gcd(a, b)
```

## Sum

```sql
FUNCTION sum(n)
    IF n equals 0 THEN
        RETURN 0
    ELSE
        RETURN n + sum(n - 1)

FUNCTION main()
    DECLARE n
    INPUT n

    OUTPUT sum(n)
```

## Tower of Hanoi

```sql
Procedure TowerOfHanoi(n, source, destination, auxiliary):
    If n equals 0:
        Return

    TowerOfHanoi(n - 1, source, auxiliary, destination)
    Output "Move from source to destination"
    TowerOfHanoi(n - 1, auxiliary, destination, source)

Main():
    Call TowerOfHanoi with parameters (3, 'A', 'C', 'B')
```
