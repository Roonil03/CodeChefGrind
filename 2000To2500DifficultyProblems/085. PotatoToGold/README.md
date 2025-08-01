# Potato to Gold
## Rating: 2326
### Description:
You are given an array A of N integers and an integer K. Find the number of (possibly empty) subsequences of A such that no two elements in the subsequence have a sum that is divisible by K.

Two subsequences are considered distinct if they are made up of different indices. For example, A = `[1, 2, 1, 2]` contains `[1, 2]` as a subsequence three times, and all 3 must be counted separately in the answer.

More formally,
- Let S = {x<sub>1</sub>, x<sub>2</sub>,..., x<sub>m</sub>} be a (possibly empty) set such that 1 < x<sub>1</sub> < x<sub>2</sub> < ... < x<sub>m</sub> ≤ N.
- S is said to be good if A<sub>x<sub>i</sub></sub> + A<sub>x<sub>j</sub></sub> is not divisible by K for any 1 <= i < j ≤ m. In particular, any subsequence of size <= 1 is good.
- Your task is to count the number of good sets.

Since the answer can be very large, print it modulo 10<sup>9</sup> + 7.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of two lines of input.
    - The first line of each test case contains two space separated integers, N and K.
    - The second line of each test case contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>

### Output Format
For each test case, output on a new line number of subsequences satisfying the condition, modulo 10<sup>9</sup> + 7
### Constraints
- 1 <= T <= 10<sup>4</sup>
- 1 <= N <= 10<sup>5</sup>
- 1 <= K <= 5 * 10<sup>5</sup>
- 1 <= A<sub>i</sub> <= 10<sup>9</sup>
- The sum of N and K over all test cases won't exceed 10<sup>6</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
3 4
4 5 7
5 4
1 2 3 4 5
5 3
1 2 3 4 5
```
**Output:**
```
6
20
14
```
**Explaination:**  
Test case 1: Here, K = 4. There are 8 subsequences of the array, and they are considered as follows:
- `[]`: the empty subsequence. It satisfies the condition.
- `[4]`,` [5]`, `[7]`: size 1 subsequences, all are good.
- `[4, 5]`: good, because 4 + 5 = 9 is not a multiple of 4
- `[4, 7]`: good, because 4 + 7 = 11 is not a multiple of 4
- `[5, 7]`: not good, because 5 + 7 = 12 is a multiple of 4.
- `[4, 5, 7]`: not good, again because it contains 5 and 7.

So, 6 of the subsequences are good.