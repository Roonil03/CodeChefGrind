# Pyramid Traversal
## Rating: 2194
### Description:
You are given a pyramid of the following form with an infinite number of rows: 1 2 3 4 5 6 7 8 9 10
........

From a cell, you can move to either the bottom-left cell or the bottom-right cell directly in contact with the current one (For example, you can make the following moves: `1 → 2`, `1 → 3`,`6 → 9`,`6 → 10`, while you cannot make moves `2 → 6` or `2 → 7`).

You are given a starting cell s and an ending cell e. Starting at cell s, find the number of ways to reach cell e. This number can be large, so print the answer modulo 10<sup>9</sup> + 7.

Two ways are said to be different if there exists at least one cell which was visited in one of the ways but not the other one.
### Input Format
- The first line of input contains a single integer T, the number of test cases. The description of T test cases follows.
- The first and only line of each test case contains two space-separated integers s and e, denoting the starting and the ending cell respectively.

### Output Format
For each test case, output a single line containing one integer: the number of ways to go from s to e modulo 10<sup>9</sup> + 7
### Constraints
- 1 <= T <= 1000
- 1 <= s, e <= 10<sup>9</sup>
### Subtasks
`Subtask 1(100 points):` Original constraints

### Examples:
#### Example 1:
**Input:**
```
3
2 7
1 5
5 3
```
**Output:**
```
1
2
0
```
**Explaination:**  
In the first test case, there exists only 1 way to move from 2 to 7, which is:
- 2 → 4 → 7

In the second test case, there exist 2 ways to move from 1 to 5, which are:
- 1 → 2 → 5
- 1 → 3 → 5

In the third test case, it is not possible to move from 5 to 3.