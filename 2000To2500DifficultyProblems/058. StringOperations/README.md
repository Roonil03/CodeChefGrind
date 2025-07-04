# String Operations
## Rating: 2220
### Description:
Two strings A and B are equivalent (denoted by A ~ B) if they have the same lengths and A can be transformed into B by performing the following operation zero or more times: choose a substring of A which contains '1' an even number of times and reverse this substring.

You are given a binary string S. Find the number of different equivalence classes of the substrings of this string. In other words, find the smallest possible size of a set C of binary strings with the following property: for each non-empty string R which is a substring of S (including S itself), there is a string X ∈ C such that R~ X.
### Input
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first and only line of each test case contains a single string S with length N.
### Output
For each test case, print a single line containing one integer - the number of equivalence classes among the substrings of the given string.
### Constraints
- 1 < T < 10
- 1 ≤ N ≤ 1,000
- S contains only characters '0' and '1'
### Subtasks
**Subtask #1 (10 points):**  
N <= 10

**Subtask #2 (90 points):**  
original constraints

### Examples:
#### Example 1:
**Input:**
```
10
00000
10001
10101
01111
11001
01101
10110
10010
10111
11001
```
**Output:**
```
5
11
8
9
12
10
10
11
11
12
```
