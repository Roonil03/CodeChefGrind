# LCM Mania
## Rating: 2098
### Description:
hErd gives you an integer N. Find any three positive integers A, B, C such that:
- N = lcm(A, B) + lcm(B, C) + lcm(C, A); where lcm denotes the least common multiple.

If there is no solution, print -1.  
If there are multiple solutions, you may print any of them.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The first and only line of each test case contains an integer N.
### Output Format
- For each test case, output on a new line, three space-separated integers A, B, C satisfying the condition.

If there is no solution, print -1.  
If there are multiple solutions, you may print any of them.  
### Constraints
- 1 < T < 10<sup>5</sup>
- 1 ≤ N ≤ 10<sup>9</sup>

### Examples:
#### Example 1:
**Input:**
```
3
1
6
15
```
**Output:**
```
-1
2 2 2
5 5 1
```
**Explaination:**  
Test case 1:  
It can be shown that no solution exists.

Test case 2:  
Consider A = 2, B = 2, C = 2 Thus, 6 = `lcm(2,2)` +` lcm(2,2)` + `lcm(2,2)`

Test case 3:  
Consider A = 5, B = 5, C = 1 Thus, 15 = `lcm(5,5)` + `lcm(5,1)` + `lcm(5,1)` Note that `(5, 5, 1)`, `(1, 5, 5)` and `(5, 1, 5)` are all considered valid.