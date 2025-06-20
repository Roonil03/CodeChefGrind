# Minimum Operation
## Rating: 2170
### Description:
You are given positive integers N and M (M≥ 2).  
You are also given an array A of size N, such that 2 < A<sub>i</sub> < M.

In one operation on the array, you can:
- Select an integer X (2≤ X ≤ M) and change A; to gcd(Ai, X) for all 1 ≤ i ≤ N.  
Note that gcd denotes the greatest common divisor.

Your task is to make all the elements of A equal.  
Find the minimum number of operations required to do so and also print the selected integer X for each operation.  
If there are multiple ways to do so, you may print any.  

It can be proven that it is always possible to make all the elements of A equal in finite number of operations.
### Input Format
- The first line of input contains a single integer T, denoting the number of test cases.
- Each test case consists of two lines of input.
    - The first line of each test case contains two integers N and M - the length of the array A and maximum value of X allowed.
    - The second line of each test case contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>. representing the array A.

### Output Format
For each test case, in the first line, print an integer Z, denoting the number of operations required.

In case z > 0 print another line with Z space-separated integers where the ith integer represents the selected integer X selected in the ith operation in order.

If there are multiple ways to do so, you may print any.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N <= 10<sup>5</sup>
- 2 <= M <= 10<sup>6</sup>
- 2 <= A<sub>i</sub> <= M
- The sum of N over all test cases won't exceed 3 . 10<sup>5</sup>.
- Note that sum of M over all test case isn't bounded.

### Examples:
#### Example 1:
**Input:**
```
2
3 343
343 343 343
5 100
4 8 12 16 20
```
**Output:**
```
0
1
4
```
**Explaination:**  
Test case 1:  
Since all elements of the array are already equal, we require 0 operations.

Test case 2:  
We require only one operation:
- Select X = 4: Thus, the array becomes `[gcd(4, 4), gcd(4, 8), gcd(4, 12), gcd(4, 16), gcd(4,20)]` = `[4, 4, 4, 4, 4]`, where all elements are equal.  
Note that this is the minimum number of operations required.
