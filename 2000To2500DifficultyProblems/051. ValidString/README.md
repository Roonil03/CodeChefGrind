# Valid String
## Rating: 2194
### Description:
Given a binary string S consisting of 0's and 1's, find whether there exists a rightwise circular rotation of the string such that every 2 adjacent 1's are separated by at most C 0's.  
Note: The last occurrence of 1 in the rotated string won't have any 1 next to it, i.e, first and the last ones in the string are not considered to be adjacent.  
### Input:
- First line will contain T, number of testcases. Then the testcases follow.
- Each testcase contains of two lines of input.
- First line contains two space separated integers N, C, length of the string and the upper limit on a number of 0's between 2 adjacent 1's.
- Second line contains the binary string S.
### Output:
For each testcase, output in a single line "`YES`" if there exists a rightwise circular rotation of string satisfying the criteria and "`NO`" if it doesn't exist.

Note: The output is case-insensitive - each letter may be printed in upper case or lower case.
### Constraints
- 1 <= N <= 5 * 10<sup>5</sup>
- 0 ≤ C ≤ `max(0, N-2)`
- Sum of N over all tests is atmost 10<sup>6</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
4 1
1100
4 0
0101
6 1
101001
```
**Output:**
```
YES
NO
YES
```
**Explaination:**  
Case 1:  
In the original configuration maximum number of 0's between 2 adjacent 1's is 0, therefore it satisfies the criteria.

Case 2:  
The 4 circular rotations of the string S = `{"0101", "1010", "0101", "1010"}`. In all the cases the maximum number of 0's between 2 consecutive 1's is 1 which doesn't satisfies the criteria.

Case 3:  
The 6 circular rotations of the string S = `{"101001", "110100", "011010", "001101", "100110", "010011"}` out of which second, third and fourth strings satisfy the criteria.