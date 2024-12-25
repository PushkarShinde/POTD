# Pangram Checker

This project solves the problem of determining whether a given string is a pangram. A pangram is a sentence or word that contains every letter of the alphabet at least once, regardless of case.

## Problem Statement

### Input
1. The first line contains a single integer `n` (1 ≤ n ≤ 100) — the number of characters in the string.
2. The second line contains the string, which consists only of uppercase and lowercase Latin letters.

### Output
Output `"YES"` if the string is a pangram and `"NO"` otherwise.

### Examples
#### Example 1
**Input:**
```
12
toosmallword
```
**Output:**
```
NO
```

#### Example 2
**Input:**
```
35
TheQuickBrownFoxJumpsOverTheLazyDog
```
**Output:**
```
YES
```

## Constraints
- The length of the string `n` satisfies `1 ≤ n ≤ 100`.
- The string contains only uppercase and lowercase Latin letters.
