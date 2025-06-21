# Sum of Goodness
## Rating: 2167
### Description:
You are given an array A = Α<sub>1</sub>, Α<sub>2</sub>,..., Α<sub>N</sub> of size N. 

Consider a subsequence S = S<sub>1</sub>, S<sub>2</sub>,..., S<sub>M</sub> of A. Let us define the Goodness of subsequence S as follows:
- Sort the subsequence S in non-decreasing order.
- Then, the Goodness of subsequence S is the number of indices such that S<sub>i</sub> = i, where (1 ≤ i ≤ |S|).

For example, suppose A = `[10, 3, 2, 5, 11, 3, 1, 12]`, and the subsequence is S = `[3, 2, 5, 3, 1]`. After sorting, S = `[1, 2, 3, 3, 5]`, and so the Goodness of S is 4.

Consider all the 2<sup>N</sup> - 1 possible non-empty subsequences of array A, and find the sum of all their Goodness.

Since the answer can be large, output the answer modulo 10<sup>9</sup> + 7.

Note: A sequence S is a subsequence of array A if S can be obtained from A by deletion of several (possibly, zero) elements. For example, `[3, 1]` is a subsequence of `[3, 2, 1]` and `[4, 3, 1]`, but not a subsequence of `[1, 3, 3, 7]` and `[3, 10, 4]`.

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases. Then the test cases follow.
- The first line of each test case contains an integer N - the size of the array A.
- The second line of each test case contains N space-separated integers, A<sub>1</sub>, A<sub>2</sub>, A<sub>3</sub>, ..., Α<sub>Ν</sub>.

### Output Format
- For each test case, output the answer modulo 10<sup>9</sup> + 7

### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N <= 10<sup>5</sup>
- 1 <= A<sub>i</sub> <= N for each 1 <= i <= N
- The sum of N over all test cases does not exceed 2 . 10<sup>5</sup>

### Examples:
#### Example 1:
**Input:**
```
4
2
1 2
5
3 2 5 5 3
4
1 1 2 1
6
6 4 5 2 3 1
```
**Output:**
```
3
5
17
63
```
**Explaination:**  
Testcase 1:  
The given array is` [1, 2]`. There are 3 possible non-empty subsequences: 
- `[1]`. The Goodness of this subsequence is 1, since S<sub>1</sub> = 1 
- `[2]`. The Goodness of this subsequence is 0.
- `[1, 2]`. The Goodness of this subsequence is 2, since S<sub>1</sub> = 1 and S<sub>2</sub> = 2 .

Thus the total sum is 1 + 0 + 2 = 3 which is the answer.