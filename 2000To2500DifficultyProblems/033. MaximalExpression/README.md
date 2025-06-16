# Maximal Expression
## Rating: 2127
### Description:
You are given two integers N and K.  
Let `F(X)` = `(X mod K) × ((N-X) mod K)`, where mod denotes the modulo operator.  

Find an integer X such that the value of F(X) is the maximum over all 0 <= X <= N  
If there are multiple answers, you may print any.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of a single line of input containing two integers N and K.
### Output Format
For each testcase, print a single integer X(0 <= X <= N) such that the value of F(X) is the maximum over all possible X from 0 to N.

If there are multiple answers, you may print any.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 0 <= N <= 10<sup>9</sup>
- 1 <= K <= 10<sup>9</sup>

### Examples:
#### Example 1:
**Input:**
```
3
5 2
4 7
8 3
```
**Output:**
```
0
2
4
```
**Explaination:**  
Test case 1:  
F(X) = 0 for all 0 <= X <= 5

Test case 2:  
- F(0) = (0 mod 7) x (4 mod 7) = 0
- F(1) = (1 mod 7) x (3 mod 7) = 3
- F(2) = (2 mod 7) x (2 mod 7) = 4
- F(3) = (3 mod 7) x (1 mod 7) = 3
- F(4) = (4 mod 7) x (0 mod 7) = 0  
So, X = 2 is the only correct answer.

Test case 3:  
- F(X) = 0 for X ∈ {0, 2, 3, 5, 6, 8}
- F(X) = 1 for X ∈ {1,4,7}   
So, 1, 4 and 7 are all correct answers.