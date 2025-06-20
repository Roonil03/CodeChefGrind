# Binary Substitution
## Rating: 2161
### Description:
Chef has binary string S of length N.  

Chef can perform the following operation on the string:
- Choose a contiguous subarray S<sub>L</sub>, S<sub>L+1</sub>,..., S<sub>R</sub> such that the count of set bits in the subarray is equal to the count of unset bits in the subarray.
- Replace the chosen subarray with either a set bit or an unset bit.

Chef wants to reduce the string to minimum possible length using minimum number of given operations. Help Chef by telling him the minimum length and also the operations required to obtain that. If there are multiple ways to obtain the answer, print any.
### Input Format
- The first line of input will contain a single integer T', denoting the number of test cases.
- The first line of each test case contains a single integer N, denoting the length of the binary string.
- The second line of each test case contains a binary string S
### Output Format
For each test case, output K + 1 lines:
- The first line should contain two space-separated integers M and K, denoting the minimum length that can be obtained and the minimum number of operations required to obtain it respectively.
- Then, K lines follow, where the ith line denotes the ith operation:
    - Each operation is denoted using three space separated integers L, R, and B.  
    The integers L and R denote the chosen substring such that `(1 <= L < R <= |S|)` and the substring `S[L, R]` has equal count of set and unset bits. Note that, |S| denotes the length of the current string.  
    The integer B denotes the bit with which the substring is replaced.
### Constraints
1 <= T <= 100
1 <= N <= 1000

### Examples:
#### Example 1:
**Input:**
```
3
4
1100
1
1
5
11000
```
**Output:**
```
1 1
1 4 0
1 0
1 2
1 4 1
1 2 1
```
**Explaination:**  
Test case 1:  
We can reduce the string to a string of length 1. We require only 1 operation to do so:
- Choose L = 1, R = 4 and B = 0 We chose the substring S[1, 4] which contains 2 set bits and 2 unset bits. We can replace the chosen substring with bit 0. 

Test case 2:  
The given string is of length 1. Thus, we cannot reduce it any further.

Test case 3:  
We can reduce the string to a string of length 1. We require 2 operations to do so:
- Operation 1: Choose L = 1 R = 4 and B = 1 We chose the substring S[1, 4] which contains 2 setbits and 2 unset bits. We can replace the chosen substring with bit 1. Thus, the string after this operation is S = 10 
- Operation 2: Choose L = 1, R = 2 and B = 1 We chose the substring S[1, 2] which contains 1 set bit and 1 unset bit. We can replace the chosen substring with bit 1. Thus, the string after this operation is S = 1