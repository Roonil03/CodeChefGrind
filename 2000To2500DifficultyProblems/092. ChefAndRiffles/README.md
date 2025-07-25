# Chef and Riffles
## Rating: 2360
### Description:
Let $f$ be a permutation of length $N$, where $N$ is even. The riffle of $f$ is defined to be the permutation $g=(f(1),f(3),...,f(N-1),f(2),f(4),...,f(N))$

You are given two integers $N$ and $K$. Output the resultant permutation when you riffle the identity permutation of length $N$, $K$ times.

The identity permutation of length $N$ is $\sigma_N = (1,2,..., N)$

### Input Format
* The first line of input contains a single integer $T$, denoting the number of test cases. The description of $T$ test cases follows.
* Each test case consists of a single line of input, containing two space-separated integers $N$ and $K$.

### Output Format
For each test case, output the answer permutation as $N$ space-separated integers in a new line.

### Constraints
* $1 \le T \le 100$
* $1 \le N \le 3 \cdot 10^{5}$
* $1 \le K \le 10^{9}$
* $N$ is even
* The sum of $N$ across test cases does not exceed $3 \cdot 10^5$.

### Subtasks

* Subtask 1 (30 points):  
$N$ is a power of 2

* Subtask 2 (70 points):  
Original constraints

### Examples:
#### Example 1:
**Input:**
```
3
6 1
8 2
14 452
```
**Output:**
```
1 3 5 2 4 6
1 5 2 6 3 7 4 8
1 10 6 2 11 7 3 12 8 4 13 9 5 14
```
**Explaination:**  
Test case 1:  
Performing the riffle on $\sigma_6 = (1, 2, 3, 4, 5, 6)$ once results in $(1, 3, 5, 2, 4, 6)$, by definition.

Test case 2:  
The process goes as follows:
* Performing the riffle on $(1, 2, 3, 4, 5, 6, 7, 8)$ results in $(1, 3, 5, 7, 2, 4, 6, 8)$
* Performing the riffle on $(1, 3, 5, 7, 2, 4, 6, 8)$ results in $(1, 5, 2, 6, 3, 7, 4, 8)$