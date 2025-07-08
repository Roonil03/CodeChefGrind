# XOR Sums
## Rating: 2306
### Description:
You are given a sequence of positive integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>. You should answer Q queries. In each query:
- You are given a positive integer M.
- Consider all non-empty subsequences of A with length <= M. Recall that a subsequence is any sequence that can be created by deleting zero or more elements without changing the order of the remaining elements.
- For each of these subsequences, compute the bitwise XOR of its elements. Your task is to determine the sum of these values. Since this sum can be very large, compute it modulo 998, 244, 353.
### Input
- The first line of the input contains a single integer N.
- The second line contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., Α<sub>Ν</sub>.
- The third line contains a single integer Q.
- Q lines follow. Each of these lines contains a single integer M describing a query.
### Output
For each query, print a single line containing one integer - the sum of bitwise XORS for all subsequences of A with length <= M, modulo 998, 244, 353.

### Constraints
- 1 <= N,  Q <= 2 * 10<sup>5</sup>
- 1 <= A<sub>i</sub> < 2<sup>30</sup> for each valid i
- 1 <= M <= N
### Subtask
Subtask #1 (10 points):  
1 <= N, Q <= 1000

Subtask #2 (90 points):  
original constraints

### Examples:
#### Example 1:
**Input:**
```
4
1 3 5 2
2
1
2
```
**Output:**
```
11
34
```
**Explaination:**  
In the first query, the answer is just the sum of elements of A (modulo 998, 244, 353), which is 1 + 3 + 5+2=11.

In the second query, the answer is the sum of bitwise XORs for all subsequences with length 1 or 2, which is 1 + 3 + 5 + 2 +(1 ⊕ 3)+(1 ⊕ 5)+(1 ⊕ 2)+(3 ⊕ 5)+(3 ⊕ 2)+(5 ⊕ 2)=34.