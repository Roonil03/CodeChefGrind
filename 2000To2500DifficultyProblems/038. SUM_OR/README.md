# SUM OR
## Rating: 2152
### Description:
You are given a positive integer N.  
Find the number of triples `(X, Y, Z)` such that:
- 0 < X, Y, Z < N
- X+Y+Z = N;
- X | Y | Z = N, where | represents the bitwise OR operation.

Since the number of triples can be huge, print them modulo 10<sup>9</sup> + 7
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of a single integer N, as mentioned in the statement.
### Output Format
For each test case, output on a new line, the number of triples satisfying the condition, modulo 10<sup>9</sup> + 7
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N < 2<sup>60</sup>


### Examples:
#### Example 1:
**Input:**
```
2
3
7
```
**Output:**
```
0
6
```
**Explaination:**  
Test case 1:  
There are no triples `(X, Y, Z)` satisfying the given conditions.

Test case 2:  
The following 6 tuples satisfy the conditions:  
`{(1, 2, 4), (1, 4, 2), (2, 1, 4), (2, 4, 1), (4, 1, 2), (4, 2, 1)}`  
For example, in the tuple `(1, 2, 4)`, 1 + 2 + 4 = 7 and  1 | 2 | 4 = 7
