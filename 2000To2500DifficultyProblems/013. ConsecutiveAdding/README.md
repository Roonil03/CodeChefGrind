# Consecutive Adding
## Rating: 2038
### Description:
You are given two matrices A and B, each with R rows (numbered 1 through R) and C columns (numbered 1 through C). Let's denote an element of A or B in row i and column j by A<sub>ij</sub> or B<sub>ij</sub> respectively. 

You are also given an integer X. You may perform the following operation on A any number of times: 
- Choose an integer v. 
- Choose X consecutive elements of A, either in the same row or in the same column. 
- Add v to each of the chosen elements of A. 

Determine whether it is possible to change A to B in a finite number of operations. 

### Input 
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows. 
- The first line of each test case contains three space-separated integers R, C and X. 
- R lines follow. For each valid i, the i-th of these lines contains C space-separated integers Α<sub>i,1</sub>, Α<sub>i,2</sub>,..., Α<sub>i,c</sub>. 
- R more lines follow. For each valid i, the i-th of these lines contains C space-separated integers B<sub>i,1</sub>, B<sub>i,2</sub>,..., B<sub>i,c</sub>. 
### Output 
For each test case, print a single line containing the string "`Yes`" if there is a sequence of operations that changes the matrix A to B, or "`No`" if such a sequence of operations does not exist

### Constraints 
1 <= T <= 10<sup>3 </sup>
2 <= R, C <= 10<sup>3</sup> 
2 <= X <= `min(R, C)` 
|A<sub>ij</sub>|,|B<sub>ij</sub>| <= 10<sup>9</sub> for each valid i, j 
the sum of R over all test cases does not exceed 10<sup>3 </sup>
the sum of Cover all test cases does not exceed 103<sup>3</sup>
### Subtasks 
- Subtask #1 (5 points): X = 2 
- Subtask #2 (10 points): X = 3 
- Subtask #3 (85 points): original constraints

### Example:
### Example 1:
**Input:**
```
3
2 2 2
1 2
0 1
0 0
0 0
2 2 2
1 2
0 1
0 0
-1 0
3 2 2
1 1
2 2
3 3
1 0
2 0
3 0
```
**Output:**
```
Yes
No
No
```
**Explaination:**  
- Example case 1: 
We can add -1 to both elements in row 1 and add -1 to both elements in column 2. 

- Example case 2:
After any operation, the sum of elements of A remains even. However, the sum of elements of B is odd, so A cannot be changed to B.
