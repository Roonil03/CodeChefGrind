# Parity Permutation
## Rating 2066
### Description:
You are given an array A of length N containing distinct integers and an integer K (either 0 or 1).  
Your task is to find the total number of permutations of array A such that for all pairs (i, j) with 1 ≤ i < j < N, and (i + j) being an odd number: 
- (A<sub>i</sub> + A<sub>j</sub>)%2 = K 

You should output the count of such permutations modulo 10<sup>9</sup> + 7. 
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of two lines of input. 
    - The first line of each test case contains two space-separated integers N and K, as mentioned in statement. 
    - The second line of each test case contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> - the elements of the array. 
### Output Format 
For each test case, output on a new line, the total number of permutations of array A satisfying the conditions, modulo 10<sup>9</sup> + 7.

### Constraints 
- 1 <= T <= 10<sup>5 </sup>
- 1 <= N <= 10<sup>5 </sup>
- 1 <= A<sub>i</sub>> <= 10<sup>9</sup>
- 0 <= K <= 1 
- The sum of N over all test cases won't exceed 5 . 10<sup>5</sup>.

### Example:
#### Example 1:
**Input:**
```
3
5 0
6 10 1 4 8
4 0
17 13 21 3
3 1
1 2 3  
```
**Output:**
```
0
24
2
```
**Explaination:**  
Test Case 1:  
There is no permutation that satisfies the required conditions. 

Test Case 2:  
All the permutations of the array satisfy the required conditions. 

Test Case 3:  
Two permutations satisfy the conditions. They are: 
- `[1, 2, 3]`: The pairs under consideration are `(1, 2)` and `(2, 3)`. Here (A<sub>1</sub> + A<sub>2</sub>)% * 2 = 1 = K Similarly (A<sub>2</sub> + A<sub>3</sub>)% * 2 = 1 = K 
- [3, 2, 1] The pairs under consideration are (1, 2) and (2, 3). Here (A<sub>1</sub> + A<sub>2</sub>)% * 2 = 1 = K Similarly (A<sub>2</sub> + A<sub>3</sub>)% * 2 = 1 = K