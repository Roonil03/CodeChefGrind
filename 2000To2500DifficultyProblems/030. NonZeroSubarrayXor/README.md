# Non Zero Subarray Xor
## Rating: 2101
### Description:
JJ is back with another challenge. He challenges you to construct an array A containing N integers such that the following conditions hold: 
- For all 1 <= i <= N 1 <= A_{i} <= 10 ^ 6
- Every subarray has non-zero XOR. That is, for every 1 <= L <= R <= N ,A<sub>L</sub> ⊕ A<sub>L+1</sub> ⊕... ⊕ A<sub>R</sub> != 0. Here, ⊕ denotes the bitwise XOR operation.

Can you complete JJ's challenge?

Under the given constraints, it can be proved that there always exists at least one array satisfying these conditions. If there are multiple possible arrays, print any of them.
### Input Format
- The first line contains a single integer T, denoting the number of test cases. The description of T test cases follows.
- The first and only line of each test case contains an integer N - the size of the array A to be constructed.
### Output Format
For each test case, output a single line containing N space-separated integers, denoting the elements of array A. The 2th of these N integers is A<sub>i</sub>. If multiple arrays exist which satisfy the conditions, print any of them.
### Constraints
- 1 <= T <= 1000
- 1 <= N <= 10<sup>5</sup>
- It is guaranteed that the sum of N over all test cases does not exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
1
6
6
```
**Output:**
```
7
1 2 4 8 16 32
2 3 5 7 11 13
```
**Explaination:**  
Test Case 1:  
There is only one subarray, `[7]`. Its XOR is non-zero.

Test Case 2:  
Some of the subarray XORS are:
- `XOR([2, 4, 8])` = 14 ≠ 0
- `XOR([1, 2])` = 3≠0
- `XOR([4, 8, 16, 32])` = 60 ≠ 0.  
Similarly, it can be checked that every subarray has non-zero XOR.

Test Case 3:  
Some of the subarray XORS are:
- `XOR([2, 3, 5, 7]) = 3 ≠ 0`
- `XOR([7, 11]) = 12 ≠ 0`
- `XOR([2, 3, 5, 7, 11, 13]) = 5 ≠ 0`  
Similarly, it can be checked that every subarray has non-zero XOR.