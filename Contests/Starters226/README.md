# Starters 226
## Contest Division: Division 2
## Position:
# Questions:
## Sub A Add B
### Description:
Chef has a string of length $N$. The exact contents are irrelevant, only the length matters.

Given $2$ parameters $A$ and $B$, Chef does the following repeatedly:

- While the string is of length at least $A$, choose a substring of length $A$ from the string and replace it with a substring of length $B$.

It is guaranteed that $B < A$, so this process will eventually terminate. Find the final length of the string when this terminates.

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case contains $3$ integers — $N$, $A$, and $B$.

### Output Format

For each test case, output on a new line the final length of the string.

### Constraints

- $1 \le T \le 100$
- $1 \le N \le 100$
- $1 \le B < A \le 100$

### Examples:
#### Example 1:
**Input:**
```
3
4 3 2
1 3 2
10 5 1
```
**Output:**
```
2
1
2
```
**Explaination:**  
Test Case 1  
Each action reduces the string length by $1$ since you are replacing a substring of length $3$ with length $2$.  
Chef does the action once to get $N = 3$, and then again to get $N = 2$.  
Now, the length is no longer at least $A$, so we stop.  

Test Case 2  
The initial length is smaller than $A$, so no actions are performed.

## Minimum Distinct Elements After Operations
### Description:
You are given an array of $N$ integers.

You can perform the following operation at most $K$ times:

- Choose $2$ indices $i$ and $j$ such that $1 \le i < j \le N$
- Set the value of $A_j$ to $A_i$

Find the minimum number of distinct elements that could be left in $A$ after performing at most $K$ operations.

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input:
  - The first line contains a single integer $N$.
  - The second line contains $N$ integers — $A_1, A_2, \ldots, A_N$.

### Output Format

For each test case, output on a new line the minimum number of distinct elements after at most $K$ operations.

### Constraints

- $1 \le T \le 10^4$
- $2 \le N \le 2 \cdot 10^5$
- $0 \le K \le N$
- $1 \le A_i \le N$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$

### Examples:
#### Example 1:
**Input:**
```
3
4 0
1 2 3 4
4 2
1 2 3 4
3 1
1 2 2
```
**Output:**
```
4
2
2
```
**Explaination:**  
Test Case 1  
There are no operations to perform since $K = 2$.  
The initial array has $4$ distinct elements.  

Test Case 2  
We can choose $(i, j) = (1, 3)$ and then $(i, j) = (2, 4)$ to get the array $[1, 2, 1, 2]$, which has only $2$ distinct elements.

## Max Minus Min
### Description
You are given an array $A$ of $N$ integers.

You can perform the following operation as many times as you want (possibly $0$):

- Choose index $i$ $(1 \le i \le N)$, and multiply $A_i$ by $2$.

Find the minimum possible value of $\max(A) - \min(A)$ you can achieve through the use of the operations.

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input:
  - The first line contains $N$ — the size of the array.
  - The second line contains $N$ integers — $A_1, A_2, \ldots, A_N$.

### Output Format

For each test case, output on a new line the minimum possible value of $\max(A) - \min(A)$ possible with the use of several operations.

### Constraints

- $1 \le T \le 10^4$
- $2 \le N \le 10^5$
- $1 \le A_i \le 10^5$
- The sum of $N$ over all test cases does not exceed $10^5$

### Examples:
#### Example 1:
**Input:**
```
3
3
2 3 1
3
1 2 2
5
4 2 3 57 10
```
**Output:**
```
1
0
24
```
**Explaination:**  
Test Case 1  
Choose $i = 3$, and multiply by $2$.  
We get $[2, 2, 3]$, which has $\max(A) - \min(A) = 1$.  

Test Case 2  
Choose $i = 1$, and multiply by $2$.  
We get $[2, 2, 2]$, which has $\max(A) - \min(A) = 0$.  

### *[Other unattempted questions can be viewed here!](https://www.codechef.com/START226B)*