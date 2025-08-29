# Starters 201
## Contest Division: Division 2
## Position:
## Questions:
## Mixing Liquids
### Description:
Chef is now making orange juice! He has $A$ units of orange syrup, and $B$ units of water.

To make orange juice, Chef must mix the orange syrup and the water in exactly a $1 : 2$ ratio, otherwise the recipe is spoilt. Further, Chef can **only use integer** amounts of liquids, because his measuring cylinder cannot accurately measure fractional quantities.

Chef wants to make as much orange juice as possible. How much will he be able to make? The total quantity of orange juice is the sum of units of orange syrup and water.

### Input Format:
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The only line of each test case contains 2 integers - $A$ and $B$.
### Output Format:
For each test case, output on a new line the maximum quantity of orange juice Chef can make.

### Constraints

- $1 \leq T \leq 100$
- $1 \leq A, B \leq 100$

### Examples:
**Input:**
```
3
1 5
5 5
10 1
```
**Output:**
```
3
6
0
```
**Explaination:**  
Test Case 1:  
Chef can mix 1 unit of orange syrup and 2 units of water to get 3 units of orange juice.

Test Case 2:  
Chef mixes 2 units of orange syrup and 4 units of water.

## Mark Points
### Description:
There are $N$ equi-spaced points numbered $1, 2, \ldots, N$. Initially, all points are unmarked.

In one operation, you can choose $X$ such that $1 < X < N$, and then mark points $X - 1$, $X$, $X + 1$. (If any of them were already marked, they do not get affected)

Finally, you will make a binary string $S$, where $S_i = 1$ if and only if you marked point $i$, and otherwise $S_i = 0$.

---

Now, you forgot what operations you did. You have a binary string $S$ with you. You want to check if it is possible to obtain $S$ by doing some of the above operations of marking points.

Print **Yes** if it is possible to obtain $S$ and **No** otherwise.
### Input Format:
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line of each test case contains $N$ - the number of points.
  - The second line contains $S$ - a binary string.

### Output Format:
For each test case, output on a new line **Yes** if it is possible to obtain $S$ and **No** otherwise.

### Constraints

- $1 \leq T \leq 100$
- $3 \leq N \leq 100$
- $S_i \in \{0, 1\}$

### Examples:
**Input:**
```
7
3
000
4
1111
5
00101
7
0110111
11
11101110111
4
0011
4
1100
```
**Output:**
```
Yes
Yes
No
No
Yes
No
No
```
**Explaination:**  
Test Case 1:  
You can choose to not mark anything.

Test Case 2:  
First perform one operation with X = 2 and then with X = 3.