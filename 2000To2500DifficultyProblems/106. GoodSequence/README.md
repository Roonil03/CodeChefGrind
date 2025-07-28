# Good Sequence
## Rating: 2451
### Description:
Suppose you have a binary array $B$ of length $N$.
A sequence $x_1, x_2, \dots, x_k$ is called **good** with respect to $B$ if it satisfies the following conditions:

* $1 \le x_1 < x_2 < \dots < x_k \le N + 1$
* For every pair $(i, j)$ such that $1 \le i < j \le k$, the subarray $B[x_i : x_j - 1]$ contains $(j - i)$ more ones than zeros.
* That is, if $B[x_i : x_j - 1]$ contains $c_1$ ones and $c_0$ zeros, then $c_1 - c_0 = j - i$ must hold.

Here, $B[L : R]$ denotes the subarray consisting of elements $B_L, B_{L+1}, B_{L+2}, \dots, B_R$.
Note that in particular, a sequence of size 1 is always good.

For example, suppose $B = [0, 1, 1, 0, 1, 1]$. Then,

* The sequence $[1, 4, 7]$ is a good sequence. The subarrays that need to be checked are $B[1 : 3]$, $B[1 : 6]$ and $B[4 : 6]$, which all satisfy the condition.
* The sequence $[1, 5]$ is not good, because $B[1 : 4] = [0, 1, 1, 0]$ contains an equal number of zeros and ones (when it should contain one extra 1).

Alice gave Bob a binary array $A$ of size $N$ and asked him to find the **longest** sequence that is good with respect to $A$. Help Bob find one such sequence.
If multiple possible longest sequences exist, you may print **any** of them.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains a single integer $N$ — the size of the binary array.
    * The second line contains $N$ space-separated numbers $A_1, A_2, \dots, A_N$.

### Output Format

Each test case requires two lines of output:

* First, print on a new line a single integer $K$ — the maximum length of a sequence that is good with respect to $A$.
* On the next line, print $K$ space-separated integers in increasing order, denoting the indices of one such sequence.

If there are multiple possible good sequences with maximum size, output any of them.

### Constraints

* $1 \le T \le 10^5$
* $1 \le N \le 10^5$
* $0 \le A_i \le 1$
* The sum of $N$ over all test cases won't exceed $10^6$.

### Examples:
#### Example 1:
**Input:**
```
4
6
0 1 1 0 1 1
5
0 1 0 1 0
4
1 1 1 1
3
1 0 0
```
**Output:**
```
4
2 5 6 7
2
4 5
5
1 2 3 4 5
2
1 2
```
**Explaination:**  
Test case 1:  
We have $A = [0, 1, 1, 0, 1, 1]$. The sequence $[2, 5, 6, 7]$ requires us to check 6 subarrays:
* $A[2 : 4] = [1, 1, 0]$ which has $c_1 - c_0 = 1$ and corresponds to $i = 1, j = 2$.
* $A[2 : 5] = [1, 1, 0, 1]$ which has $c_1 - c_0 = 2$ and corresponds to $i = 1, j = 3$.
* $A[2 : 6] = [1, 1, 0, 1, 1]$ which has $c_1 - c_0 = 3$ and corresponds to $i = 1, j = 4$.
* $A[5 : 5] = [1]$, which has $c_1 - c_0 = 1$ and corresponds to $i = 2, j = 3$.
* $A[5 : 6] = [1, 1]$, which has $c_1 - c_0 = 2$ and corresponds to $i = 2, j = 4$.
* $A[6 : 6] = [1]$, which has $c_1 - c_0 = 1$ and corresponds to $i = 3, j = 4$.

As you can see, all 6 pairs satisfy the condition.

Test case 2:  
The only subarray that needs to be checked is $A[4 : 4] = [1]$, which has $c_1 - c_0 = 1$ as needed. It can be verified that no good sequence of length greater than 2 exists.