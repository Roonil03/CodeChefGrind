# Construct An Array
## Rating: 2419
### Description:
You are given a positive integer $M$ and an array $A$ ($1 \le A_i \le M$) consisting of $N$ positive integers.

Construct an array $B$ of length $N$ such that:

* $1 \le B_i \le M$ for all $1 \le i \le N$;
* For all $1 \le i \le N$, there does not exist an index $1 \le j \le i$ such that the frequency of $B_j$ is more than that of $A_i$ in the subarray $[B_1, B_2, \dots, B_i]$.

It can be proved that at least one such array $B$ exists for any array $A$. If there are multiple valid arrays, you can print any one.

### Input Format

* The first line of input contains a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains two space-separated integers $N$ and $M$ — the length of the array $A$ and upper bound on $A_i$.
    * The second line of each test case contains $N$ space-separated integers $A_1, A_2, \dots, A_N$ representing the array $A$.

### Output Format

For each test case, output on a new line, $N$ space-separated integers representing a valid array $B$.

It can be proved that at least one such array $B$ exists for any array $A$. If there are multiple valid arrays, you can print any one.

### Constraints

* $1 \le T \le 2000$
* $1 \le N \le 2000$
* $1 \le M \le N$
* $1 \le A_i \le M$
* The sum of $N$ over all test cases won't exceed $2000$.

### Examples:
#### Example 1:
**Input:**
```
4
1 1
1
3 2
1 1 1
3 2
1 1 1
4 4
1 2 3 4
```
**Output:**
```
1
1 1 1
1 2 1
1 2 3 4
```
**Explaination:**  
Test case 1:  
Consider the array $B = [1]$. The only subarray is $[1]$ where the frequency of $B_1$ is less than equal to that of $A_1$.

Test case 2:  
Consider the array $B = [1, 1, 1]$.

* For $i = 1$: The frequency of both $A_1$ and $B_1$ in subarray $[B_1]$ is 1.
* For $i = 2$: The frequency of $A_2$ is same as that of $B_1, B_2$ in subarray $[B_1, B_2]$.
* For $i = 3$: The frequency of $A_3$ is same as that of $B_1, B_2, B_3$ in subarray $[B_1, B_2, B_3]$.

Test case 3:  
Consider the array $B = [1, 2, 1]$.
* For $i = 1$: The frequency of both $A_1$ and $B_1$ in subarray $[B_1]$ is 1.
* For $i = 2$: The frequency of $A_2$ is same as that of $B_1$ and $B_2$ in subarray $[B_1, B_2]$.
* For $i = 3$: The frequency of $A_3$ is same as that of $B_1, B_3$ and higher than $B_2$ in subarray $[B_1, B_2, B_3]$.