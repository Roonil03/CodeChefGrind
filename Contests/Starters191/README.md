# Starters 191
## Contest Division: Division 3
## Position: 
## Questions:
## Nearest Square
### Description:
You have a positive integer N. Find the largest positive integer A such that:
- 1 <= A <= N
- A is a square number, i.e. A = B B for some integer B.

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The first and only line of each test case contains a single integer N.
### Output Format
For each test case, output on a new line the largest square integer A smaller than N.
### Constraints
- 1 <= T <= 100
- 1 <= N <= 100

### Examples:
#### Exampe 1:
**Input:**
```
3
1
10
48
```
**Output:**
```
1
9
36
```
**Explaination:**  
Test case 1:  
A = 1 satisfies all the conditions. We cannot choose A = 9 because it does not satisfy A <= N condition.

Test case 2:  
A = 1, 4, 9 satisfies all the conditions. We print 9 because we want the maximum.

## Add to get GCD
### Description:
You have 2 integers X and Y.

You goal is to make them have a common divisor which is not 1, i.e. there should exist Z > 1 such that Z divides X and Z divides Y. 

In one operation, you can do either of the following:
- Set X to X + 1
- Set Y to Y + 1

Find the minimum number of operations needed to achieve your goal.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The first and only line of each test case contains 2 integers - X and Y.
### Output Format
For each test case, output on a new line the minimum number of operations.
### Constraints
- 1 <= T <= 10<sup>3</sup>
- 1 <= X, Y <= 10<sup>9</sup>

### Examples:
### Example 1:
**Input:**
```
3
2 4
1 1
2 3
```
**Output:**
```
0
2
1
```
**Explaination:**  
Test case 1:  
The goal is already achieved since Z = 2 divides both.

Test case 2:  
We first increment X and then Y to get X = Y = 2 which has a common divisor Z = 2

## Permuted Greater than 2
### Description:
You have an array A consisting of X 0's, Y 1's and Z 2's.  
Check if it is possible to rearrange array A such that A<sub>i</sub> +A<sub>i + 1</sub> >=2 for each 1 <= i < |A| . Print Yes or No accordingly.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The first and only line of input contains 3 integers X, Y and Z.
### Output Format
For each test case, output Yes if there is a valid rearrangement or No otherwise.  
It is allowed to print each character in either case, i.e. YES, yes and yES will all be accepted.
### Constraints
- 1 <= T <= 10<sup>4</sup>
- 0 <= X, Y, Z <= 100
- 2 <= X + Y + Z

### Examples:
#### Example 1:
**Input:**
```
4
1 1 0
1 1 1
2 0 1
5 1 1
```
**Output:**
```
No
Yes
Yes
No
```
**Explaination:**  
Test case 1:  
You have 1 occurrence of 0 and 1 occurrence of 1. The 2 possible arrays are `[0, 1]` and `[1, 0]`, but neither satisfies the condition of A<sub>1</sub> + A<sub>2</sub> >= 2

Test case 2:  
The array `[1, 2, 0]` satisfies the necessary conditions.

## Grid Path (Easy)
### Description:
*This is the easy version of the problem and is worth the usual 100 points. Here, Q = 0 i.e. thereare no updates to the grid.*

You have a binary grid of size 2 x N. The j-th character of the ith row is A<sub>(i,j)</sub>.

In one operation, you can choose a row X and a column Y (1 <= Y < N); and then swap A<sub>(x,y)</sub> and A<sub>(X,Y+1)</sub>, i.e. you are allowed to make adjacent swaps in the same row.

You want to find out the minimum number of operations needed to make the grid have a right-down path from `(1, 1)` to `(2, N)` consisting of only 1s, i.e. if you visit (X, Y) in your path, A<sub>(x, y)</sub> must be 1.  
If it is impossible, print -1 instead.

Further, you are given Q updates, each of which flips a value in the grid, i.e. you are given a cell (X, Y) and must change A<sub>(X,Y)</sub> to 1 A<sub>(X,Y)</sub>.  
After each update, find the new answer of the minimum operations needed for a right-down path from `(1, 1)` to `(2, N)`.  
The updates are permanent, they don't revert back each time.

*In this version, Q = 0 and so there are no updates.*

*Note: A right-down path is one which moves to either cell (z+1, y) or (x, y + 1) from the cell (x, y).*

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of multiple lines of input.
    - The first line of each test case contains N and Q- the size of the grid and the number of queries.
    - The second line contains a binary string of length N, the first row of the initial binary grid.
    - The third line contains a binary string of length N, the second row of the initial binary grid.
    - The next Qlines contain 2 integers each - X and Y, representing we should flip cell (X, Y).

Some input lines may have extra trailing whitespaces.
### Output Format
For each test case, output Q + 1 integers, the initial answer and the answer after the first i updates for each 1 <= i <= Q (Since Q = 0 here, we always print 1 integer only)

### Constraints
- 1 <= T <= 10<sup>4</sup>
- 2 <= N <= 2 * 10<sup>5</sup>
- Q = 0
- A<sub>(i,j)</sub> ∈ {0,1}
- 1 <= X <= 2 and 1 <= Y <= N
- The sum of N over all test cases does not exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
5
3 0
011 
110 
3 0
011
010 
6 0
110010 
010001
6 0
110010 
111101 
6 0
110010
110101
```
**Output:**
```
4
-1
-1
4
7
```
**Explaination:**  
Test case 1:  
We can do the following 4 operations (in this order):
- Choose X = 1 Y = 1 for an operation.
- Choose X = 1, Y = 2 for an operation.
- Choose X = 2, Y = 2 for an operation.
- Choose X = 2, Y = 1 for an operation.
- At the end, it can be shown that the binary grid has been transformed to:
    - `110`
    - `011`  
which has the path `(1, 1)` -> `(1, 2)` -> `(2, 2)` -> `(2, 3)` going only right or down (and consisting of 1 s) from `(1, 1)` to `(2,3)`.

Test case 2:  
It can be shown that it is impossible to move from `(1, 1)` to `(2, 3)` irrespective of the operations we do.


## Coloured Array
### Description:
An array A consisting of 2.N elements is said to be good if it satisfies the following properties:
- 1 <= A<sub>i</sub> <= N for all 1 <= i <= 2 . N
- A<sub>2.i - 1</sub> = A<sub>2.i</sub> for all 1 <= i <= N
- A<sub>2.i</sub> != A<sub>2.j</sub> for all 1 <= i < j <= N.

For example, some good arrays are `[2, 2, 1, 1]` and `[2, 2, 1, 1, 3, 3]`.

You are given an array A which may not be good. You want to find the minimum distance to some good array B.

The distance between 2 arrays C and D (|C| = |D|) is the number of indices i such that 1 <= i <= |C| and C<sub>i</sub> ≠ D<sub>i</sub>.

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of two lines of input.
    - The first line of each test case contains N.
    - The second line contains 2. N integers - A1, A2,..., A2.N.
### Output Format
For each test case, output on a new line the minimum distance to a good array.
### Constraints
- 1 <= T <= 10<sup>4</sup>
- 2 <= N <= 2 * 10<sup>5</sup>
- 1 <= A<sub>i</sub> <= N
- The sum of N over all test cases does not exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
3
2 2 1 1 3 3
3
1 1 1 1 1 1
3
1 2 1 2 1 2
```
**Output:**
```
0
4
4
```
**Explaination:**  
Test case 1:  
The array is already good.

Test case 2:  
One example of a good array B is `[1, 1, 2, 2, 3, 3]` which has a distance of 4

## <a href="https://www.codechef.com/START190C">Other unattempted questions can be viewed here!</a>