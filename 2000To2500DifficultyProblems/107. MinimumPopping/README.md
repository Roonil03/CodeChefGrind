# Minimum Popping
## Rating: 2463
### Description:
You are given a double-ended queue $Q$. Initially, it contains elements $Q_1, Q_2, \dots, Q_M$ in this order. Each of these elements is an integer between 1 and $N$ (inclusive) and each integer between 1 and $N$ (inclusive) occurs in the queue at least once.

We want to pop some (possibly zero) elements from the front of the queue and some (not necessarily the same number, possibly zero) elements from the back. Among all the popped elements, each integer between 1 and $N$ (inclusive) should appear at least once. Find the smallest possible total number of elements we need to pop.

### Input Format

* The first line of input contains a single integer $T$ denoting the number of test cases. The description of $T$ test cases follows.
* The first line of each test case contains two space-separated integers $N$ and $M$.
* The second line contains $M$ space-separated integers $Q_1, Q_2, \dots, Q_M$.

### Output Format

For each test case, print a single line containing one integer — the minimum number of elements we need to pop.

### Constraints

* $1 \le T \le 10$
* $1 \le N \le 10^5$
* $N \le M \le 2 \cdot 10^5$
* For each $i$ ($1 \le i \le N$), there is at least one element equal to $i$ in the queue.
* The sum of $N$ over all test cases does not exceed $10^5$.
* The sum of $M$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
#### Example 1:
**Input:**
```
3
2 2
1 2
2 3
1 2 1
3 6
1 1 1 3 2 2
```
**Output:**
```
2
2
4
```
**Explaination:**  
Example case 1:  
Since $N = M$ and all elements are pairwise distinct, we have to pop everything to get each value at least once.

Example case 2:  
We can pop the first 2 or the last 2 elements.

Example case 3:  
We can pop the first element and the last 3 elements, so the answer is $1 + 3 = 4$.