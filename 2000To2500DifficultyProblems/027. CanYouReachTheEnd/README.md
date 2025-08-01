# Can You Reach The End
## Rating: 2095
### Description:
You are given a positive integer N. Consider a square grid of size `N x N`, with rows numbered 1 to N from top to bottom and columns numbered 1 to N from left to right. Initially you are at `(1, 1)` and you have to reach (N, N). From a cell you can either move one cell to the right or one cell down (if possible). Formally, if you are at `(i, j)`, then you can either move to `(i + 1, j)` if i < N. or to `(i, j + 1)` if j < N.

There are exactly N blocks in the grid, such that each row contains exactly one block and each column contains exactly one block. You can't move to a cell which contains a block. It is guaranteed that blocks will not placed in `(1, 1)` and `(N, N)`.

You have to find out whether you can reach (N, N).
### Input Format
- The first line contains T- the number of test cases. Then the test cases follow.
- The first line of each test case contains N - the size of the square grid.
- The i-th line of the next N lines contains two integers X<sub>i</sub> and Y<sub>i</sub> indicating that (X<sub>i</sub>, Y<sub>i</sub>) is the position of a block in the grid.
### Output Format
- For each test case, if there exists a path from `(1, 1)` to `(N, N)`, output YES, otherwise output No.
- You may print each character of the string in uppercase or lowercase (for example, the strings yes, yes, Yes and YES will all be treated as identical).
### Constraints
- 1 <= T <= 1000
- 2 <= N <= 10<sup>6</sup>
- 1 <= X<sub>i</sub>, Y<sub>i</sub> <= N
- (X<sub>i</sub>, Y<sub>i</sub>) ≠ (1,1) and (X<sub>i</sub>, Y<sub>i</sub>) ≠ (N, N) for all 1 <= i <= N
- X<sub>i</sub> != X<sub>j</sub> and Y<sub>i</sub>  != Y<sub>j</sub> for 11 <= i < j <= N
- Sum of N over all test cases does not exceed 10<sup>6</sup>
### Examples:
#### Example 1:
**Input:**
```
2
3
1 2
2 3
3 1
2
1 2
2 1
```
**Output:**
```
YES
NO
```
**Explaination:**  
Test case 1:  
We can follow the path `(1, 1)`→`(2, 1)`→`(2, 2)`->`(3,2)` → `(3,3)`.
<img src="https://i.ibb.co/kgJhzGb/explanation.pngg"><br>

Test case 2:  
We can't move from the starting point, so it is impossible to reach `(N, N)`.