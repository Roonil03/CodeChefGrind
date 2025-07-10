# Palindrome In Making
## Rating: 2322
### Description:
JJ has an array A of length N. He can perform the following operation on A:
- Select any L, R(1 <= L <= R ≤ N) and for each i such that L < i < R, set A<sub>i</sub> := A<sub>i</sub> + 1.

JJ wants to make A palindromic. Find the minimum number of moves to do so.

Note: An array is called a palindrome if it reads the same backwards and forwards, for e.g. `[1, 3, 3, 1]` and `[6, 2, 6]` are palindromic.
### Input Format
- The first line contains a single integer T - the number of test cases. Then the test cases follow.
- The first line of each test case contains an integer N- the size of the array A.
- The second line of each test case contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> denoting the array A.
### Output Format
- For each test case, output the minimum number of moves to make A palindromic.

### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N <= 10<sup>5</sup>
- 1 <= A<sub>i</sub> <= 10<sup>9</sup>
- Sum of N over all test cases does not exceed 3 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
6
2 6 4 3 4 1
2
1 10
3
1 10 1
```
**Output:**
```
2
9
0
```
**Explaination:**  
Test Case 1:   
We can perform the following operations:  

 $[2, 6, 4, 3, 4, 1] \xrightarrow{L=3,R=6} [2, 6, 5, 4, 5, 2]$  

$[2, 6, 5, 4, 5, 2] \xrightarrow{L=4,R=5} [2, 6, 5, 5, 6, 2]$

Test Case 2:  
We perform the operation on $(L = 1, R = 1)$ 9 times after which array becomes $[10, 10]$.

Test Case 3:  
A is already a palindrome.