# Make Them Alike
## Rating: 2245
### Description:
You are given a permutation P of length N, an array A of size N, and an integer M.

Initially, 0 ≤ A<sub>i</sub> ≤ M. Consider an array A' obtained from A by replacing all zeros in A with positive integers less than or equal to M.

The array A' will then be transformed as follows, in N steps:
- In the ith step, we set A'<sub>i</sub> = A'<sub>P<sub>i</sub></sub>. 

The initial array A' is said to be beautiful, if, after the transformation of N steps, all elements of array A' are equal.

Find the number of such beautiful arrays A' which can be formed by changing the zeros in array A to any value < M. Since this number can be huge, print this number modulo 10<sup>9</sup> + 7.

Note that a permutation of length N contains of all elements from 1 to N exactly once.

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of multiple lines of input.
    - The first line of each test case contains two space-separated integers N and M, the size of the array and the maximum value it can have.
    - The second line of each test case consists of N space-separated integers P<sub>1</sub>, P<sub>2</sub>,..., P<sub>N</sub>, the permutation P.
    - The third line of each test case consists of N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>, the initial array A.
### Output Format
For each test case, output on a new line, the number of such beautiful arrays A' which can be formed by changing the zeros in array A to any value < M.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N <= 2 * 10<sup>5</sup>
- 1 <= M <= 10<sup>9</sup>
- 0 <= A<sub>i</sub> <= M
- The sum of N over all test cases won't exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
4 3
2 1 4 3
0 2 0 2
3 2
3 1 2
0 0 0
8 54
8 1 2 4 3 6 7 5
0 0 0 0 0 0 0 0
```
**Output:**
```
9
8
459165024
```
**Explaination:**  
Test case 1:  
The given permutation is `[2, 1, 4, 3]`. One of the possible beautiful arrays is: A' = `[1, 2, 3, 2]`. This is obtained by replacing the first 0 with 1 and the second 0 with 3 in the array A.
For the transformation:
- In the first step, A'<sub>1</sub> is replaced with A'<sub>p<sub>1</sub></sub> = A<sub>2</sub>, that is 2. The array becomes `[2, 2, 3, 2]`.
- In the second step, A'<sub>2</sub>, is replaced with A'<sub>P<sub>2</sub></sub> = A'<sub>1</sub>, that is 2. The array becomes `[2, 2, 3, 2]`.
- In the third step, A'<sub>3</sub> is replaced with A'<sub>P<sub>3</sub></sub> = A'<sub>4</sub>, that is 2. The array becomes `[2, 2, 2, 2]`.
- In the fourth step, A<sub>4</sub> is replaced with A'<sub>P<sub>4</sub></sub> = A'<sub>3</sub>, that is 2. The array becomes `[2, 2, 2, 2]`. P

Thus, after the transformation, all elements of the array are equal. The other beautiful arrays for this test case are: `[1, 2, 1, 2]`, `[1, 2, 2, 2]`, `[2, 2, 1, 2]`, `[2, 2, 2, 2]`, `[2, 2, 3, 2]`, `[3, 2, 1, 2]`, `[3, 2, 2, 2]`, `[3, 2, 3, 2]`.  
There are 9 beautiful arrays in total.