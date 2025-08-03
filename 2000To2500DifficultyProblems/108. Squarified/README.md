# Squarified
## Rating: 2470
### Description:
You are given an array $A$ of length $N$.
An array $B$ is considered **squarified**, if:

* The product of the elements in any even-length subsequence of $B$ is a perfect square; and
* The product of the elements in any odd-length subsequence of $B$ is not a perfect square.

Your task is to find the length of the longest subsequence of $A$ which is squarified.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains a single integer $N$ — the number of elements in the array.
    * The second line of each test case contains $N$ space-separated integers $A_1, A_2, \dots, A_N$ — the elements of the array.

### Output Format

For each test case, output on a new line, the length of the longest subsequence of $A$ which is squarified.

### Constraints

* $1 \le T \le 10^5$
* $1 \le N \le 10^5$
* $1 \le A_i \le 10^7$
* The sum of $N$ over all test cases won't exceed $5 \cdot 10^5$.

### Examples:
#### Example 1:
**Input:**
```
3
4
7 18 8 10
5
27 8 12 16 12
2
9 1
```
**Output:**
```
2
3
0
```
**Explaination:**  
Test Case 1:  
$[18, 8]$ is the longest squarified subsequence of the array.
* Even length subsequence is $[18, 8]$. Here, $18 \cdot 8 = 144 = 12^2$.
* Odd length subsequences are $[18]$ and $[8]$. None of these are perfect squares.

Test Case 2:  
$[27, 12, 12]$ is the longest squarified subsequence of the array.
* Even length subsequences are $[27, 12]$ and $[12, 12]$ with products $324$ and $144$ respectively. Both of these are perfect squares.
* Odd length subsequences are $[27]$, $[12]$, and $[27, 12, 12]$ with products $27, 12,$ and $3888$. None of these are perfect squares.

Test Case 3:  
There is no squarified subsequence present, hence answer is 0.