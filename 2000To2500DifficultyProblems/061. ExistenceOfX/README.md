# Existence Of X
## Rating: 2235
### Description:
You are given non-negative integers A, B and C.  
Does there exist a non-negative integer X such that A ⊕ X + B ⊕ X = C ⊕ X?

As a reminder, ⊕ denotes the bitwise XOR operation.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The only line of each test case contains three space-separated non-negative integers A, B and C.
### Output Format
For each test case, print on a new line the answer: `YES` if valid X exists, and `no` otherwise.  
Each character of the output may be printed in either uppercase or lowercase, i.e, the strings `Yes`, `YES`, `yes`, `yEs` will all be treated as identical.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 0 < A, B, C < 2<sup>27</sup>

### Examples:
#### Example 1:
**Input:**
```
5
2 5 7
2 3 13
7 0 7
2 7 6
1 6 6
```
**Output:**
```
YES
NO
YES
YES
YES
```
**Explaination:**  
Test case 1:  
X = 0 satisfies the equation.

Test case 2:  
It can be proved that there does not exist a non-negative integer X which satisfies the equation.

Test case 3:  
X = 0 satisfies the equation.

Test case 4:  
X = 3 satisfies the equation.

Test case 5:  
X = 1 satisfies the equation.