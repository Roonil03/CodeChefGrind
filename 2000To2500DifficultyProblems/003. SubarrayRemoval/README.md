# Subarray Removal
## Rating: 2007
### Description:
Chef has a permutation A of length N. Chef can perform the following operation on A: 
1) Select L and R such that (1 <= L <= R <= N) and (R - L + 1 < N) 
2) Remove the subarray A<sub>L...R</sub> from A. (The remaining parts of A are concatenated) 

The score of this operation = length of the subarray removed = `R - L+1` 
For e.g., if A = `[3, 1, 4, 6, 5, 2]` and Chef selects L = 3, R = 5 then the score of this operation = 3 and A becomes `[3, 1, 2]`. 

Chef wants to perform this operation exactly once such that, after the operation, A still remains a permutation. What is the maximum score that Chef can achieve in doing so? 

As a reminder, a permutation of length M is an array where every integer from 1 to M occurs exactly once.

### Input Format 
- The first line contains a single integer T- the number of test cases. Then the test cases follow. 
- The first line of each test case contains an integer N- the size of the permutation A. 
- The second line of each test case contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>, ... , A<sub>N</sub> denoting the permutation A. 
### Output Format 
For each test case, output the maximum score that Chef can achieve after applying the operation exactly once such that A still remains a permutation.

### Constraints 
- 1 <= T <= 10<sup>5 </sup>
- 2 <= N <= 10<sup>5</sup> 
- A is a permutation 
- Sum of N over all test cases does not exceed 5.10<sup>5</sup>

### Examples:
#### Example 1:
**Input:**
```
3
3
2 1 3
7
1 2 3 4 5 6 7
6
3 1 4 6 5 2
```
**Output:**
```
1
6
3
```
**Explaination:**  
- Test Case 1: Chef can remove subarray A<sub>3...3</sub> after which A becomes `[2, 1]` which is still a permutation.   
- Test Case 2: Chef can remove subarray A<sub>2...7</sub> after which A becomes `[1]` which is still a permutation.   
- Test Case 3: Chef can remove subarray A<sub>3...5</sub> after which A becomes `[3, 1, 2]` which is still a permutation.  

