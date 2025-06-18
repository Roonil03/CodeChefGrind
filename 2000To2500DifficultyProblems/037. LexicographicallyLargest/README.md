# Lexicographically Largest
## Rating: 2151
### Description:
You are given a positive integer M and an array A(1 <= A<sub>i</sub> <= M) consisting of N positive integers.

Find the lexicographically largest array B such that:
- |B| = N<sub>i</sub>
- 1 <= B<sub>i</sub> <= M for all 1 <= i <= N<sub>i</sub>
- A<sub>i</sub> = gcd(B<sub>1</sub>, B<sub>2</sub>,..., B<sub>i</sub>), where gcd denotes the greatest common divisor.

Note that the input A guarantees that B always exists.  
For two arrays X and Y, both of size N, the array X is said to be lexicographically larger than array Y, if, in the first position where X and Y differ. X<sub>i</sub> > Y<sub>i</sub>.
### Input Format
- The first line of input will contain a single integer T. denoting the number of test cases.
- Each test case consists of multiple lines of input.
    - The first line of each test case contains two space separated integers N and M-the length of array A and upper bound on array elements.
    - The next line contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> representing the array A.
### Output Format
For each test case, output on a new line, the lexicographically largest array B, satisfying the given conditions.
### Constraints
- 1 <= T <= 10<sup>4</sup>
- 1 <= N <= 10<sup>4</sup>
- 1 <= M <= 10<sup>9</sup>
- 1 <= A<sub>i</sub> <= M
- The sum of N over all test cases won't exceed 5 . 10<sup>4</sup>.

### Examples:
#### Example 1:
**Input:**
```
4
1 1
1
2 2
2 1
4 3
2 2 2 2
4 5
2 2 2 2
```
**Output:**
```
1
2 1
2 2 2 2
2 4 4 4
```
**Explaination:**  
Test case 1:  
The only possible array is B = `[1]` which satisfies the given conditions.

Test case 2:  
The only possible array is B = `[2, 1]` which satisfies the given conditions. Here A<sub>1</sub> = B<sub>1</sub> = 2 and A<sub>2</sub> = gcd(B<sub>1</sub>,B<sub>2</sub>) = 1

Test case 4:  
The lexicographically largest valid array is B = `[2, 4, 4, 4]` Some other arrays that are valid include `[2, 2, 2, 2]`, `[2, 2, 4, 2]`, `[2, 2, 4, 4]`.