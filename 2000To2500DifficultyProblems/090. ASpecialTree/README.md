# A Special Tree
## Rating: 2350
### Description:
You are given a tree with $N$ nodes (numbered 1 through $N$). There are $K$ special nodes $f_1, f_2, \dots, f_K$ in this tree.

We define $d(p, q)$ to be the number of edges on the unique path from node $p$ to node $q$.

You are given a node $a$. For each node $b$ from 1 to $N$, find the maximum value of $d(a, u) - d(b, u)$ where $u$ is a special node, as well as any special node $u$ for which that maximum value is attained.

### Input Format

*   The first line of the input contains a single integer $T$ denoting the number of test cases. The description of $T$ test cases follows.
*   The first line of each test case contains three space-separated integers $N, K, a$.
*   The second line contains $K$ space-separated integers $f_1, f_2, \dots, f_K$.
*   $N-1$ lines follow. For each valid $i$, the $i$-th of these lines contains two space-separated integers $u_i$ and $v_i$ denoting an edge of the tree.

### Output Format

For each test case, print two lines.

In the first line print $N$ space-separated integers. For each valid $i$, the $i$-th integer should be the maximum value of $d(a, u) - d(i, u)$ where $u$ is a special node.

In the second line print $N$ space-separated integers. For each valid $i$, the $i$-th integer should be any special node $u$ for which the maximum of $d(a, u) - d(i, u)$ is attained.

### Constraints

* $1 \le T \le 200$
* $1 \le K \le N \le 2 \cdot 10^{5}$
* $1 \le a \le N$
* $1 \le f_{i} \le N$ for each valid $i$
* $f_{i} \ne f_{j}$ for each valid $i$ and $j$ such that $i \ne j$
* $1 \le u_{i}, v_{i} \le N$ for each valid $i$
* the graph described on the input is a tree
* the sum of $N$ over all test cases does not exceed $4 \cdot 10^{5}$

### Subtasks

Subtask #1 (10 points):
* $T \le 11$
* $N \le 200$
* the sum of $N$ over all test cases does not exceed $400$

Subtask #2 (20 points):
* $T \le 51$
* $N \le 2000$
* the sum of $N$ over all test cases does not exceed $4000$

Subtask #3 (30 points):
* It holds that $u_i = i$, $v_i = i+1$ for each valid $i$.

Subtask #4 (40 points):  
Original constraints

### Examples:
#### Example 1:
**Input:**
```
2
5 1 3
2
1 2
1 3
2 4
2 5
8 3 2
6 5 8
1 2
2 3
2 4
2 5
4 6
5 7
5 8
```
**Output:**
```
1 2 0 1 1
2 2 2 2 2
-1 0 -1 1 1 2 0 2
5 5 5 6 5 6 5 8
```
**Explaination:**  
Example case 1:  
The following picture shows the tree in the first example case with special nodes in bold:
<br><img src="https://s3.amazonaws.com/codechef_shared/download/Images/LTIME95/SPTREE/SPTREE_1.png"><br>

The only special node is the node 2 and $a = 3$. Therefore, the desired maximum is $d(a, 2) - d(b, 2) = d(3,2) - d(b,2) = 2 - d(b, 2)$ for each node $b$ and it is always attained for the special node $u = 2$.

Example case 2:  
The following picture shows the tree in the second example case with special nodes bolded:
<br><img src="https://s3.amazonaws.com/codechef_shared/download/Images/LTIME95/SPTREE/SPTREE_2.png"><br>
The special nodes are 6, 5 and 8, and $a=2$. The maximum values of $d(a,u)-d(b,u)$ ($u$ being a special node) for each $b$ are as follows:

*   $b=1$: The maximum value of $d(2,u)-d(1,u)$ is $-1$ and it is achieved for $u=5$ since $d(2,5) - d(1,5) = 1-2 = -1$.
*   $b=2$: The maximum value of $d(2,u)-d(2,u)$ is $0$ and it is achieved for $u=5$ since $d(2,5) - d(2,5) = 1-1 = 0$.
*   $b=3$: The maximum value of $d(2,u)-d(3,u)$ is $-1$ and it is achieved for $u=5$ since $d(2,5) - d(3,5) = 1-2 = -1$.
*   $b=4$: The maximum value of $d(2,u)-d(4,u)$ is $1$ and it is achieved for $u=6$ since $d(2,6) - d(4,6) = 2-1 = 1$.
*   $b=5$: The maximum value of $d(2,u)-d(5,u)$ is $1$ and it is achieved for $u=5$ since $d(2,5) - d(5,5) = 1-0 = 1$.
*   $b=6$: The maximum value of $d(2,u)-d(6,u)$ is $2$ and it is achieved for $u=6$ since $d(2,6) - d(6,6) = 2-0 = 2$.
*   $b=7$: The maximum value of $d(2,u)-d(7,u)$ is $0$ and it is achieved for $u=5$ since $d(2,5) - d(7,5) = 1-1 = 0$.
*   $b=8$: The maximum value of $d(2,u)-d(8,u)$ is $2$ and it is achieved for $u=8$ since $d(2,8) - d(8,8) = 2-0 = 2$.