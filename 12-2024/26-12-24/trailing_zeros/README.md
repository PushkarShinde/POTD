# [CSES - Trailing Zeros](https://cses.fi/problemset/task/1618/)

## Problem Description
Your task is to calculate the number of trailing zeros in the factorial \( n! \).

For example:
\[
20! = 2432902008176640000
\]
This factorial has 4 trailing zeros.

### Input
The only input line contains an integer \( n \).

### Output
Print the number of trailing zeros in \( n! \).

---

## Constraints
- \( 1 \leq n \leq 10^9 \)

---

## Example
### Input:
```
20
```

### Output:
```
4
```

---

## Explanation
Trailing zeros in a number result from factors of 10, which are produced by multiplying 2 and 5. Since there are generally more factors of 2 than 5 in a factorial, the number of trailing zeros is determined by the number of factors of 5 in the factorial \( n! \).

To calculate this efficiently for large \( n \):
1. Count how many multiples of 5 are present in \( n \).
2. Count how many multiples of \( 5^2 \) (25) are present, as these contribute an extra factor of 5.
3. Repeat this process for higher powers of 5 (\( 5^3, 5^4 \), etc.) until \( 5^k > n \).
4. Sum all these contributions.

The result will be the total number of trailing zeros in \( n! \).

---
