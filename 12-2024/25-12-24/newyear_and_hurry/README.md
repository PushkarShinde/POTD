# New Year and Hurry
[Codeforces Problem 750A - New Year and Hurry](https://codeforces.com/problemset/problem/750/A)

Limak is preparing to participate in a programming contest on the last day of the year 2016. The contest takes place in the evening, starting at 20:00, and runs for four hours until midnight. Limak, however, has plans to attend a New Year’s Eve party, which requires him to leave his house and travel for a certain amount of time. 

This problem involves determining how many problems Limak can solve during the contest while still ensuring he makes it to the party on time.

---

## Problem Statement

### Input
The input consists of two integers:
- **n**: the number of problems in the contest (1 ≤ n ≤ 10).
- **k**: the number of minutes Limak needs to get to the party (1 ≤ k ≤ 240).

### Output
Output one integer, denoting the maximum number of problems Limak can solve so that he can reach the party at midnight or earlier.

### Time Constraints
The contest starts at 20:00 and ends at 00:00, giving a total of 240 minutes. After solving problems, Limak must leave with at least **k** minutes remaining to reach the party.

---

## Examples

### Example 1
**Input**:
```
3 222
```
**Output**:
```
2
```
**Explanation**: 
- There are 3 problems, requiring 5, 10, and 15 minutes respectively.
- Limak has 240 - 222 = 18 minutes to solve problems.
- He can solve the first two problems in 15 minutes.

### Example 2
**Input**:
```
4 190
```
**Output**:
```
4
```
**Explanation**: 
- There are 4 problems, requiring 5, 10, 15, and 20 minutes respectively.
- Limak has 240 - 190 = 50 minutes to solve problems.
- He can solve all four problems in 50 minutes.

### Example 3
**Input**:
```
7 1
```
**Output**:
```
7
```
**Explanation**: 
- There are 7 problems, each requiring increasing amounts of time.
- Limak only needs 1 minute to travel, leaving him 239 minutes.
- He can solve all 7 problems within this time frame.

---

## Notes
1. The time required to solve the i-th problem is calculated as `5 * i` minutes.
2. Limak must ensure that the total time spent solving problems plus the travel time does not exceed 240 minutes.
3. The problems are sorted by difficulty, with easier problems requiring less time.

---