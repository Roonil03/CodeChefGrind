# Sum of Cube
## Rating: 2259
### Description:
You are given an array A consisting of N positive integers.

Find ∑<sup>N</sup><sub>i = 1</sub>∑<sup>N</sup><sub>j = i</sub> F<sup>3</sup>(i, j), where F(i, j) = ∑<sup>j</sup><sub>k = i</sub>A<sub>i</sub>

Since the value might be quite large, print it modulo 998244353.
### Input Format
- The first line of input contains a single integer T', denoting the number of test cases.
- Each test case consists of two lines of input.
    - The first line of each test case contains an integer N - the length of the array A.
    - The second line of each test case contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> representing the array A.
### Output Format
For each test case, output on a new line, the answer, modulo 998244353.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 ≤ N ≤ 5 . 10<sup>5</sup>
- 1 ≤ A < 10<sup>6</sup>
- The sum of N over all test cases won't exceed 5 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
2
1 1
3
1 2 1
5
8 5 6 2 3
```
**Output:**
```
10
128
42621
```
**Explaination:**  
**Test case 1:**  
\(F(1,1)=1,\; F(1,2)=1+1=2,\; F(2,2)=1.\)  
Thus,  
\[
\sum_{i=1}^N\sum_{j=i}^N F(i,j)^3 = 1^3 + 2^3 + 1^3 = 10.
\]

**Test case 2:**  
\(F(1,1)=1,\; F(1,2)=1+2=3,\; F(1,3)=1+2+1=4,\)  
\(F(2,2)=2,\; F(2,3)=2+1=3,\; F(3,3)=1.\)  
Thus,  
\[
\sum_{i=1}^N\sum_{j=i}^N F(i,j)^3 
= 1^3 + 3^3 + 4^3 + 2^3 + 3^3 + 1^3 = 128.
\]