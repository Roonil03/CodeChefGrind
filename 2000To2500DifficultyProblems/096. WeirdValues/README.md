# Weird Values
## Rating: 2393
### Description:
You are given an array $A = [A_1, A_2, \ldots, A_N]$ containing $N$ integers.

Consider any subarray $[A_L, A_{L+1}, \ldots, A_R]$ of this subarray (where $1 \le L \le R \le N$). The weirdness of this subarray, denoted $w(L, R)$, is defined to be the number of indices $L \le i \le R$ such that $A_i$ equals the number of occurrences of $A_i$ in this subarray.

Formally, we define $w(L, R)$ for $1 \le L \le R \le N$ as follows:

* For every integer $x$, let $f_{L,R}(x)$ denote the number of indices $L \le j \le R$ such that $A_j = x$.
* $w(L, R)$ then equals the number of $L \le i \le R$ such that $A_i = f_{L,R}(A_i)$.

For example, let $A = [1,3,5,2,1,2,9,5]$. Then,

* $w(1,8) = 2$, which can be computed as follows. We have
    * $f_{1,8}(1) = 2$
    * $f_{1,8}(2) = 2$
    * $f_{1,8}(3) = 1$
    * $f_{1,8}(5) = 2$
    * $f_{1,8}(9) = 1$

The only indices which satisfy $f_{1,8}(A_i) = A_i$ are $i=4$ and $i=6$, and hence $w(1,8) = 2$.

* $w(3,5) = 1$ — the subarray is $[5, 2, 1]$, and each of $1, 2, 5$ occur exactly once in this subarray. Of these, only $1$ equals the number of its occurrences in this subarray.

Given $A$, your task is to compute the sum of the weirdness of all subarrays of $A$, i.e., the value $\sum_{L=1}^{N}\sum_{R=L}^{N}w(L,R)$

### Input Format

*   The first line of input contains a single integer $T$, denoting the number of test cases. The description of $T$ test cases follows.
*   The first line of each test case contains an integer $N$, the size of the given array.
*   The second line of each test case contains $N$ space-separated integers $A_1, A_2, \dots, A_N$ — the elements of $A$.

### Output Format

For each test case, output a single line containing a single integer — the sum of the weirdness of all subarrays of the given array.

### Constraints

*   $1 \le T \le 10^3$
*   $1 \le N \le 10^6$
*   $1 \le A_i \le 10^6$
*   The sum of $N$ across all test cases does not exceed $10^6$.

### Examples:
#### Example 1:
**Input:**
```
4
3
3 3 3
4
1 2 1 2
5
1 2 3 2 1
8
1 2 2 3 2 3 3 1
```
**Output:**
```
3
10
16
54
```
**Explaination:**  
Test Case 1:  
The only subarray with non-zero weirdness is the whole array, which has $w(1,3) = 3$ because every value is 3 and it appears thrice.

Test Case 2:  
There are 10 subarrays. Their weirdness values are as follows:
* $w(1,1) = 1$, because $A_1 = 1$ and $f_{1,1}(1) = 1$.
* $w(1,2) = 1$, because $A_1 = 1$ and $f_{1,2}(1) = 1$; but $A_2 = 2$ and $f_{1,2}(2) = 1 \neq 2$.
* $w(1,3) = 0$, here $f_{1,3}(1) = 2 \neq 1$ and $f_{1,3}(2) = 1 \neq 2$ so no index satisfies the condition.
* $w(1,4) = 2$, here indices 2 and 4 satisfy the condition.
* $w(2,2) = 0$
* $w(2,3) = 1$, index 3 satisfies the condition.
* $w(2,4) = 3$, all indices satisfy the condition.
* $w(3,3) = 1$
* $w(3,4) = 1$, index 3 satisfies the condition.
* $w(4,4) = 0$