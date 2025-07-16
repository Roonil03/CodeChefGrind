# Two Averages
## Rating: 2353
### Description:
Chef has an array $A$ of size $N$ such that $1 \le A_i \le K$ for all $1 \le i \le N$.
Chef also has another array $B$ of size $M$ such that $1 \le B_i \le K$ for all $1 \le i \le M$.

Chef can perform the following operation:
1) Select an integer $X$ such that $1 < X < K$
2) Append $X$ to the end of exactly one array among $A$ and $B$

Find the minimum number of operations required to make $\text{mean}(A)$ strictly greater than $\text{mean}(B)$ or determine it is not possible to do so.

For an array $X$ of length $M$, $\text{mean}(X)$ is defined as $\frac{\sum X}{M}$. For example,
* $\text{mean}([5,6]) = \frac{5+6}{2} = 5.5$
* $\text{mean}([10, 13, 20]) = \frac{10+13+20}{3} = 14.333...$
* $\text{mean}([3, 3, 3, 3, 3]) = 3$

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
  * The first line of each test case contains three space-separated integers $N, M$ and $K$ - the size of array $A$, the size of array $B$ and the upper bound of values in arrays $A$ and $B$.
  * The next line contains $N$ space-separated integers $A_1, A_2, ..., A_N$ denoting the array $A$.
  * The third line contains $M$ space-separated integers $B_1, B_2, ..., B_M$ denoting the array $B$.

### Output Format

For each test case, output the minimum number of operations required to make $\text{mean}(A) > \text{mean}(B)$.

Output $-1$ if it is not possible to do so.

### Constraints

* $1 \le T \le 10^4$
* $1 \le N, M \le 10^5$
* $1 \le K \le 10^6$
* $1 \le A_i, B_i \le K$
* Sum of $N$ over all test cases won't exceed $10^5$.
* Sum of $M$ over all test cases won't exceed $10^5$.

### Examples:
#### Example 1:
**Input:**
```
4
6 3 9
3 7 3 5 2 4
8 3 5
1 1 4
4
2
2 2 1
1 1
1 1
5 5 5
3 4 3 4 3
4 5 4 5 4
```
**Output:**
```
2
0
-1
3
```
**Explaination:**  
Test case 1:  
$A = [3, 7, 3, 5, 2, 4]$ and $B = [8, 3, 5]$. Chef can perform the following operations:
*   Append $X = 8$ to array $A$
*   Append $X = 2$ to array $B$  

After that, $mean(A) = \frac{3+7+3+5+2+4+8}{7} = 4.5714...$ and $mean(B) = \frac{8+3+5+2}{4} = 4.5$

Test case 2:  
There is no need to append new elements as $mean(A) = 4 > 2 = mean(B)$.

Test case 3:  
As $K = 1$, it is impossible to make $mean(A) > mean(B)$ as $mean(A) = mean(B) = 1$ no matter how many operations Chef performs.

Test case 4:  
Chef can append 2, 1 and 2 to array B in three operations.