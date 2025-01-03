# [B. Permutation Swap](https://codeforces.com/problemset/problem/1828/B).

## Problem Statement
You are given an unsorted permutation \( p_1, p_2, \ldots, p_n \). To sort the permutation, you choose a constant \( k \) \((k \geq 1)\) and perform some operations on the permutation. In one operation, you can:
- Choose two integers \( i \), \( j \) \((1 \leq j < i \leq n)\) such that \( i - j = k \).
- Swap \( p_i \) and \( p_j \).

What is the maximum value of \( k \) that you can choose to sort the given permutation?

### Definitions
A permutation is an array consisting of \( n \) distinct integers from \( 1 \) to \( n \) in arbitrary order. For example:
- \([2,3,1,5,4]\) is a valid permutation.
- \([1,2,2]\) is not a permutation (as \( 2 \) appears twice).
- \([1,3,4]\) is not a permutation (as \( n = 3 \), but \( 4 \) is present).

An unsorted permutation \( p \) is one where at least one position \( i \) satisfies \( p_i \neq i \).

## Input
- The first line contains an integer \( t \) \((1 \leq t \leq 10^4)\) — the number of test cases.
- Each test case consists of two lines:
  1. The first line contains a single integer \( n \) \((2 \leq n \leq 10^5)\) — the length of the permutation \( p \).
  2. The second line contains \( n \) distinct integers \( p_1, p_2, \ldots, p_n \) \((1 \leq p_i \leq n)\) — the permutation \( p \).

### Constraints
- The given numbers form a permutation of length \( n \).
- The permutation is guaranteed to be unsorted.
- The sum of \( n \) over all test cases does not exceed \( 2 \cdot 10^5 \).

## Output
For each test case, output the maximum value of \( k \) that you can choose to sort the given permutation.

It is guaranteed that an answer always exists.

## Examples
### Input
```
7
3
3 1 2
4
3 4 1 2
7
4 2 6 7 5 3 1
9
1 6 7 4 9 2 3 8 5
6
1 5 3 4 2 6
10
3 10 5 2 9 6 7 8 1 4
11
1 11 6 4 8 3 7 5 9 10 2
```

### Output
```
1
2
3
4
3
2
3
```

## Explanation
### Test Case 1
- The maximum value of \( k \) is \( 1 \).
- Steps to sort the permutation:
  - Swap \( p_2 \) and \( p_1 \) \((2 - 1 = 1)\): \( p = [1, 3, 2] \).
  - Swap \( p_2 \) and \( p_3 \) \((3 - 2 = 1)\): \( p = [1, 2, 3] \).

### Test Case 2
- The maximum value of \( k \) is \( 2 \).
- Steps to sort the permutation:
  - Swap \( p_3 \) and \( p_1 \) \((3 - 1 = 2)\): \( p = [1, 4, 3, 2] \).
  - Swap \( p_4 \) and \( p_2 \) \((4 - 2 = 2)\): \( p = [1, 2, 3, 4] \).

## Notes
- Ensure that the solution handles large inputs efficiently.
- The implementation should iterate over multiple test cases without exceeding time limits.

