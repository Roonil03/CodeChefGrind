# Starters 259
## Contest Division: Division 2
## Position: 615

# Questions:
## Another String
### Description:
Nikhil found a strange operation on binary strings.

You are given two binary strings $A$ and $B$, both of length $N$.

In one operation, you can choose two distinct indices $i$ and $j$ ($1 \le i < j \le N$).
You then swap the characters at $A_i$ and $A_j$, and simultaneously flip both of them:

* 0 becomes 1.
* 1 becomes 0.

For example, if the chosen characters are 1 and 0, swapping gives 0 and 1, and flipping gives 1 and 0 again. Thus, the characters at the two chosen positions remain unchanged.

Can you transform string $A$ into string $B$ using any number of operations?

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of three lines of input.
    * The first line of each test case contains a single integer $N$, denoting the length of the strings.
    * The second line contains a binary string $A$ of length $N$.
    * The third line contains a binary string $B$ of length $N$.

### Output Format
For each test case, output on a new line `YES` if it is possible to transform $A$ into $B$ using the allowed operations, and `NO` otherwise.

You may print each character of the answer in uppercase or lowercase. For example, `YES`, `yes`, `Yes`, and `yEs` will all be treated as identical.

### Constraints

* $1 \le T \le 3 \cdot 10^4$
* $3 \le N \le 2 \cdot 10^5$
* $A$ and $B$ are binary strings of length $N$.
* The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
3
3
010
100
5
00101
11000
4
0110
1000
```
**Output:**
```
YES
YES
NO
```
**Explaination:**  
Test case 1: Choose $(i, j) = (1, 3)$. Both characters are $0$, so they become $1$ and $1$, giving $111$. Then choose $(i, j) = (2, 3)$. Both characters are $1$, so they become $0$ and $0$, giving $100$.

Test case 2: Choose $(i, j) = (1, 2)$. Both characters are $0$, so they become $1$ and $1$, giving $11101$. Then choose $(i, j) = (3, 5)$. Both characters are $1$, so they become $0$ and $0$, giving $11000$.

Test case 3: It can be shown that $A$ cannot be transformed into $B$.

## One Wrong Step
### Description:
Nikhil is programming a robot that starts at the coordinates $(0, 0)$ on a 2D plane. He provides the robot with a string of $N$ moves, where each character represents a single step.
If the robot is currently at $(x, y)$ then:
* `U` $\to (x, y + 1)$
* `D` $\to (x, y - 1)$
* `L` $\to (x - 1, y)$
* `R` $\to (x + 1, y)$

Nikhil believes that **exactly one** move in the string was entered incorrectly.
He can thus replace exactly one move by its direct opposite:

* `U` can be replaced with `D`, and vice versa (`U` $\leftrightarrow$ `D`).
* `L` can be replaced with `R`, and vice versa (`L` $\leftrightarrow$ `R`).

Determine whether it is possible for the robot to end its journey exactly at the origin $(0, 0)$ after correcting **exactly one** move in the string.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains a single integer $N$, denoting the number of moves.
    * The second line contains a string of length $N$ consisting only of the characters `U`, `D`, `L`, and `R`.

### Output Format

For each test case, output on a new line `YES` if it is possible for the robot to end at $(0, 0)$ after changing exactly one move to its opposite, and `NO` otherwise.

You may print each character of the answer in uppercase or lowercase. For example, `YES`, `yes`, `Yes`, and `yEs` will all be treated as identical.

### Constraints

* $1 \le T \le 100$
* $1 \le N \le 100$
* Each character of the string is one of `U`, `D`, `L`, `R`.

### Examples:
**Input:**
```
5
4
UDRR
2
UD
3
UUU
4
UURR
4
DDLR
```
**Output:**
```
YES
NO
NO
NO
YES
```
**Explaination:**  
Test case 1: The robot ends at $(2, 0)$ after `UDRR`. Changing the last `R` to `L` gives `UDRL`, which ends at $(0, 0)$.

Test case 2: `UD` already ends at $(0, 0)$, but exactly one move must be changed. The only possible results are `DD` (changing the first move) and `UU` (changing the second move). Neither ends at $(0, 0)$.

Test case 3: Changing exactly one move is not sufficient to end at $(0, 0)$.

Test case 4: Changing exactly one move is not sufficient to end at $(0, 0)$.

Test case 5: `DDLR` ends at $(0, -2)$. Changing the first `D` to `U` gives `UDLR`, which ends at $(0, 0)$.

## Domination
### Description:
*As always, Hyder seeks Order in Chaos. And finally, he thinks Domination is the only way. Help him out!*

For a tree $G$, a subset $S$ of the vertices of $G$ is called a **dominating set** if, for every vertex $u$ in $G$, either $u \in S$ or there exists a vertex $v \in S$ such that $(u, v)$ is an edge in $G$.

You are given a tree with $N$ vertices.
Find the number of dominating sets of the tree containing exactly $N - 3$ vertices.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line of each test case contains a single integer $N$, denoting the number of vertices in the tree.
    * The next $N - 1$ lines each contain two space-separated integers $u$ and $v$, denoting an undirected edge between vertices $u$ and $v$.

### Output Format

For each test case, output on a new line the number of dominating sets containing exactly $N - 3$ vertices.

### Constraints

* $1 \le T \le 3 \cdot 10^4$
* $4 \le N \le 2 \cdot 10^5$
* $1 \le u, v \le N$
* The edges form a tree.
* The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
3
4
1 2
1 3
1 4
5
1 2
2 3
3 4
4 5
9
8 3
8 5
5 1
8 6
6 4
3 7
1 9
7 2
```
**Output:**
```
1
3
61
```
**Explaination:**  
Test case 1: We need dominating sets of size $1$. The only one is $\{1\}$, since vertex $1$ is adjacent to every other vertex. No other single vertex dominates the whole tree.

Test case 2: We need dominating sets of size $2$. The valid sets are $\{2, 4\}$, $\{1, 4\}$ and $\{2, 5\}$. Every other pair leaves some vertex undominated.

## Mex Sort
### Description:
*As always, Hyder seeks Order in Chaos. He thinks a sorted permutation is the only way to achieve order. Help him out!*

You are given $P$, a permutation of $\{0, \dots, N - 1\}$.
This means $P$ is an array of length $N$ containing every integer from $0$ to $N - 1$ in some order.

**$P$ is zero-indexed, i.e $P = [P_0, \dots, P_{N-1}]$.**

You are allowed to perform the following operation at most $\lceil \log_2 N \rceil$ times:

* Choose a subsequence of distinct indices $i_1, i_2, \dots, i_K$ such that there exists no subarray of the **current** permutation $P$ whose MEX is equal to the MEX of the set of values $P_{i_1}, P_{i_2}, \dots, P_{i_K}$.
The MEX of a set of non-negative integers is the smallest non-negative integer that does not belong to the set.
* Rearrange the values at the chosen indices as you wish. This is a permanent change.

Your task is to sort $P$ in ascending order.
Note that you do not need to minimize the number of operations used - you only need to use no more than $\lceil \log_2 N \rceil$ of them.

If it is impossible to sort $P$ using at most $\lceil \log_2 N \rceil$ operations of this type, print $-1$.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains a single integer $N$, denoting the size of the permutation.
    * The second line contains $N$ space-separated integers $P_0, P_1, \dots, P_{N-1}$, representing the permutation.

### Output Format

For each test case:
* If it is impossible to sort $P$ using at most $\lceil \log_2 N \rceil$ operations, output $-1$ on a new line.
* Otherwise, output on a new line the number of operations $M$ ($0 \le M \le \lceil \log_2 N \rceil$) to be performed, followed by $3M$ lines describing the operations.

For each operation, output the following three lines:
* The first line should contain an integer $K$ ($1 \le K \le N$), the size of the chosen subsequence.
* The second line should contain $K$ distinct **indices** chosen for this operation - $i_1, \dots, i_K$
* The third line should contain $K$ distinct **values** $x_1, \dots, x_K$. These values should be a permutation of the values at indices $i_1, \dots, i_K$ before the operation, and mean that the value $x_j$ is to be placed at index $i_j$ by the operation; for each $1 \le j \le K$.

### Constraints

* $1 \le T \le 10^4$
* $6 \le N \le 5 \cdot 10^4$
* $P$ is a permutation of the integers from $0$ to $N - 1$.
* The sum of $N$ over all test cases does not exceed $5 \cdot 10^4$.

### Examples:
**Input:**
```
4
7
2 5 0 3 4 1 6
6
1 2 3 0 5 4
7
5 4 2 1 0 3 6
6
0 1 2 3 4 5
```
**Output:**
```
2
4
0 2 4 5
0 4 1 2
5
0 1 2 4 5
0 1 2 4 5
3
4
0 2 3 5
4 0 3 1
3
1 2 5
0 2 1
4
0 1 4 5
0 1 4 5
-1
0
```
**Explaination:**  
Test case 1: Initially $P = [2, 5, 0, 3, 4, 1, 6]$.
* Operation 1: choose indices $[0, 2, 4, 5]$, which hold the values $\{2, 0, 4, 1\}$, and rearrange them as $[0, 4, 1, 2]$. This gives $P = [0, 5, 4, 3, 1, 2, 6]$.
* Operation 2: choose indices $[0, 1, 2, 4, 5]$, which hold the values $\{0, 5, 4, 1, 2\}$, and rearrange them as $[0, 1, 2, 4, 5]$. This gives $P = [0, 1, 2, 3, 4, 5, 6]$, which is sorted.

Test case 2: Initially $P = [1, 2, 3, 0, 5, 4]$. Three operations are used, after which $P$ becomes $[4, 2, 0, 3, 5, 1]$, then $[4, 0, 2, 3, 5, 1]$, and finally $[0, 1, 2, 3, 4, 5]$.

Test case 3: It is not possible to perform any operation on $P$, and $P$ is not sorted. Hence, the answer is $-1$.

Test case 4: $P$ is already sorted, so no operations are needed.

## *[Other unattempted questions can be viewed here!](https://www.codechef.com/START259B)*

# Unrated Questions:
## Possible Roll
### Description:
Nikhil is playing a board game with a wizard who uses a custom, magically forged $X$-sided die.

Unlike normal dice, this die has a "base multiplier" $K$. The faces of the die are not numbered $1, 2, 3 \dots X$. Instead, they are numbered with the first $X$ positive multiples of $K$.

For example, if the die has $4$ sides and the base multiplier is $3$, the faces are numbered $3, 6, 9$, and $12$.

The wizard rolls the die behind a screen and claims the result is $Y$. Given $X$, $K$, and $Y$, determine if it is mathematically possible for this die to show the number $Y$.

### Input Format

* The only line of input contains three space-separated integers $X$, $K$, and $Y$, denoting the number of sides on the die, the base multiplier, and the wizard's claimed result, respectively.

### Output Format

Output "YES" (without quotes) if it is mathematically possible for the die to show $Y$, and "NO" otherwise.

You can output each letter in any case (lowercase or uppercase).

### Constraints

* $1 \le X \le 10$
* $1 \le K \le 10$
* $1 \le Y \le 100$

### Examples:
#### Example 1:
**Input:**
```
6 5 20
```
**Output:**
```
YES
```
**Explaination:**  
The die has $6$ faces, numbered $5, 10, 15, 20, 25, 30$. Since $20$ is one of these faces, the die can show $20$.

#### Example 2:
**Input:**
```
4 3 15
```
**Output:**
```
NO
```
**Explaination:**  
The die has $4$ faces, numbered $3, 6, 9, 12$. Since $15$ is not one of these faces, the die cannot show $15$.