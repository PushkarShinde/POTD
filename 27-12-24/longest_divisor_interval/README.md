# [B. Longest Divisors Interval](https://codeforces.com/problemset/problem/1855/B)

## Problem Description
Given a positive integer \( n \), find the maximum size of an interval \([l, r]\) of positive integers such that, for every \( i \) in the interval (i.e., \( l \leq i \leq r \)), \( n \) is a multiple of \( i \).

Given two integers \( l \leq r \), the size of the interval \([l, r]\) is \( r - l + 1 \) (i.e., it coincides with the number of integers belonging to the interval).

---

### Input
- The first line contains a single integer \( t \) (\( 1 \leq t \leq 10^4 \)) — the number of test cases.
- The only line of the description of each test case contains one integer \( n \) (\( 1 \leq n \leq 10^{18} \)).

### Output
For each test case, print a single integer: the maximum size of a valid interval.

---

## Example
### Input:
```
10
1
40
990990
4204474560
169958913706572972
365988220345828080
387701719537826430
620196883578129853
864802341280805662
1000000000000000000
```

### Output:
```
1
2
3
6
4
22
3
1
2
2
```

---

## Explanation
1. **First Test Case:**
   - A valid interval with maximum size is \([1, 1]\) (it's valid because \( n = 1 \) is a multiple of \( 1 \)).
   - Size of the interval is \( 1 \).

2. **Second Test Case:**
   - A valid interval with maximum size is \([4, 5]\) (it's valid because \( n = 40 \) is a multiple of \( 4 \) and \( 5 \)).
   - Size of the interval is \( 2 \).

3. **Third Test Case:**
   - A valid interval with maximum size is \([9, 11]\).

4. **Fourth Test Case:**
   - A valid interval with maximum size is \([8, 13]\).

---

## Constraints
- \( 1 \leq t \leq 10^4 \)
- \( 1 \leq n \leq 10^{18} \)

The solution requires efficiently calculating the size of the interval for each test case, considering the large constraints of \( n \).
