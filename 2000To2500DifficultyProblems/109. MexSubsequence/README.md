# Mex Subsequence
## Rating: 2494
### Description:
Ridbit is given an array $a_1, a_2, \dots, a_N$. He needs to find the number of ways to divide the array into contiguous subarrays such that:

* Each element of the sequence $a$ belongs to exactly one of the subarrays.
* There is an integer $m$ such that the MEX of every subarray is equal to $m$. The MEX of a sequence is the smallest non-negative integer which does not occur in this sequence.

Help Ridbit with this task.

### Input

* The first line of the input contains a single integer $T$ denoting the number of test cases. The description of $T$ test cases follows.
* The first line of each test case contains a single integer $N$.
* The second line contains $N$ space-separated integers $a_1, a_2, \dots, a_N$.

### Output

For each test case, print a single line containing one integer — the number of ways to divide the sequence, modulo $10^9 + 7$.

### Constraints

* $1 \le T \le 10$
* $1 \le N \le 100,000$
* $0 \le a_i \le N$ for each valid $i$

### Examples:
#### Example 1:
**Input:**
```
2
6
1 0 0 1 0 1
3
1 2 3
```
**Output:** 
```
5
4
```
**Explaination:**  
Example case 1:  
The five valid ways to divide the sequence are:
* $[1, 0, 0, 1, 0, 1]$
* $[1, 0]$, $[0, 1, 0, 1]$
* $[1, 0, 0]$, $[1, 0, 1]$
* $[1, 0, 0, 1]$, $[0, 1]$
* $[1, 0]$, $[0, 1]$, $[0, 1]$