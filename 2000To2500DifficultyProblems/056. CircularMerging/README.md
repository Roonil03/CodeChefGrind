# Circular Merging
## Rating: 2208
### Description:
N integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> are placed in a circle in such a way that for each valid i, A<sub>i</sub> and A<sub>i+1</sub> are adjacent, and A₁ and A<sub>N</sub> are also adjacent.

We want to repeat the following operation exactly N - 1 times (until only one number remains):
- Select two adjacent numbers. Let's denote them by a and b.
- Score a + b penalty points.
- Erase both a and b from the circle and insert a + b in the space between them.

What is the minimum number of penalty points we can score?
### Input
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains a single integer N.
- The second line contains N space-separated integers a<sub>1</sub>, a<sub>2</sub>,..., α<sub>Ν</sub>.

### Output:
- For each test case, print a single line containing one integer - the minimum number of penalty points.
### Constraints
- 1 <= T <= 10
- 2 <= N <= 400
- 1 <= a<sub>i</sub> <= 10<sup>9</sup> or each valid i

### Subtasks
**Subtask #1 (10 points):**  
- 2 <= N <= 10
- a<sub>i</sub> <= 10 for each valid i

**Subtask #2 (10 points):**  
- 2 <= N <= 25
- a<sub>1</sub>, a<sub>2</sub>,..., a<sub>n</sub> are distinct powers of 2 (including 1)

**Subtask #3 (10 points):**  
- 2 <= N <= 100

**Subtask #4 (70 points):**  
original constraints

### Examples:
#### Example 1:
**Input:**
```
1
3
10 10 1
```
**Output:**
```
32
```
**Explaination:**  
- `[10, 10, 1]` -> `[10, 11]` penalty: 11 
- `[10, 11]` -> `[21]` penalty: 21
- Total penalty: 11 + 21 = 32