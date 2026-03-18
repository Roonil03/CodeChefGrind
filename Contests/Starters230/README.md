# Starters 230
## Contest Division: Division 2
## Position: 
# Questions:
## Reselling Items
### Description:
Chef is trying to buy some items from a store, and then resell them elsewhere to make a profit. For the $i$-th item, Chef knows that he can resell it for $A_i$ coins.

The store has an ongoing offer. The first $K$ items that Chef buys will be offered at a discount of $5$ coins each, but the remaining items will all be offered at $10$ coins each.

Chef can choose to buy any number of items, and in any order that he desires. What is the maximum profit Chef can make?


### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line contains $2$ integers — $N$ and $K$.
  - The second line contains $N$ integers — $A_1, A_2, \ldots, A_N$.


### Output Format

For each test case, output on a new line the maximum profit.

### Constraints

- $1 \leq T \leq 100$
- $1 \leq K \leq N \leq 100$
- $1 \leq A_i \leq 15$

### Examples:
#### Example 1:
**Input:**
```
5
2 1
15 15
2 1
6 10
2 2
6 10
5 3
10 12 3 6 7
2 2
1 1
```
**Output:**
```
15
5
6
14
0
```
**Explaination:**  
Test Case 1: Chef bought the first item for cost of 
5 and resold it for 
15 coins. Then, he buys the second item for cost of 
10 and resold it for 
15. His total profit is 
15−5+15−10=15 coins.

Test Case 2: Chef bought the second item for cost of 
5 and resold it for 
10 coins. The total profit is 
5 coins.

## Sets Diff by K
### Description:
For a permutation $P$ and an integer $K$, we define $f(P, K)$ as the set $S$ formed by the following process:

- Initially, let $S$ be an empty set.
- For each $i = 1, 2, \ldots, N$:
  - Check if there exists $x \in S$ such that $|x - P_i| \leq K$.
  - Append $P_i$ to $S$ if and only if there does not exist such $x$.

---

You are given a set $S$ of elements, represented by a binary array $B$ of size $N$. Here, $x \in S$ if and only if $B_x = 1$.

Does there exist a permutation $P$ such that $f(P, K) = S$? Print Yes or No accordingly.


### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line contains $2$ integers — $N$ and $K$.
  - The second line contains $N$ integers — $B_1, B_2, \ldots, B_N$.


### Output Format

For each test case, output *Yes* if there exists a valid permutation $P$ and *No* otherwise.


### Constraints

- $1 \leq T \leq 100$
- $1 \leq K \leq N \leq 100$
- $0 \leq B_i \leq 1$

### Examples:
#### Example 1:
**Input:**
```
5
3 1
1 0 1
3 1
0 1 1
3 1
0 1 0
7 2
1 0 0 1 0 0 1
5 1
0 0 0 0 0
```
**Output:**
```
Yes
No
Yes
Yes
No
```
**Explaination:**  
Test Case 1 : For the permutation 
P=[1,3,2], the set formed is 
{1,3} as required.

Test Case 2 : There is no valid permutation 
P.

Test Case 3 : For the permutation 
P=[2,3,1], the set formed is 
{2} as required.

## Sum of Second Max
### Description:
For an array $B$, we define $f(B)$ as the second largest element of the array. For example,
$f([2, 4, 5, 1]) = 4$.

You are given a permutation array $A$ of $N$ integers (each element from $[1, N]$ occurs exactly once).

Compute the sum of $f$ of all subarrays of $A$ of size at least $2$. Formally, compute the following sum:

$$
\sum_{L=1}^{N} \sum_{R=L+1}^{N} f(A_L, A_{L+1}, \ldots, A_R).
$$

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line contains $N$ — the size of the array.
  - The second line contains $A_1, A_2, \ldots, A_N$ — the elements.

### Output Format

For each test case, output the sum

$$
\sum_{L=1}^{N} \sum_{R=L+1}^{N} f(A_L, A_{L+1}, \ldots, A_R).
$$

### Constraints

- $1 \leq T \leq 10^4$
- $2 \leq N \leq 2 \cdot 10^5$
- $1 \leq A_i \leq N$
- $A_i \neq A_j$ for all $i \neq j$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
#### Example 1:
**Input:**
```
3
3
1 3 2
4
1 2 3 4
5
2 1 4 5 3
```
**Output:**
```
5
14
31
```
**Explaination:**  
Test Case 1 : There are 
3 subarrays, 
[1,3], 
[3,2] and 
[1,3,2]. The second-maxes are 
1,2 and 
2, with a sum of 
5.

## A to B (Easy)
### Description:
You are given $2$ binary strings $A$ and $B$, both of length $N$.

You can perform the following operation on $A$ multiple times (possibly $0$):

- Choose $L$ and $R$ such that $1 \leq L \leq R \leq N$, and flip all the values $A_L, A_{L+1}, \ldots, A_R$.
- The cost of this operation is $1$ if $A_L = A_R$, and $0$ otherwise.

Flipping a value means changing it to $1$ if it was $0$, and vice versa.

What is the minimum total cost of operations to transform $A$ to $B$?

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line contains a single integer $N$.
  - The second line contains a binary string $A$.
  - The third line contains a binary string $B$.


### Output Format

For each test case, output the minimum total cost of transforming $A$ to $B$.


### Constraints

- $1 \leq T \leq 100$
- $1 \leq N \leq 50$
- $|A| = |B| = N$
- $A_i \in \{0,1\}$
- $B_i \in \{0,1\}$

### Examples:
#### Example 1:
**Input:**
```
4
3
010
110
2
00
11
1
0
0
3
010
111
```
**Output:**
```
0
1
0
1
```
**Explaination:**  
Test Case 1: First, we do the operation on 
L=2 and 
R=3 to get 
A=001, and then on 
L=1 and 
R=3 to get
A=110. This makes 
A equal to 
B for 
0 cost.

## Prefix Max Counting
### Description:
For a permutation $P$, we define $f(P)$ to be its prefix max array, i.e.,
$f(P)_i = \max(P_1, P_2, \ldots, P_i)$.

Now, you are given a partially filled permutation $P$ of the integers $[1, N]$, i.e., some elements are $-1$.

You want to replace the $-1$ elements with integers in $[1, N]$ to make it a permutation.

What is the total number of distinct $f(P)$ possible? Since the answer may be large, print it modulo $998244353$.


### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line contains a single integer $N$.
  - The second line contains $N$ integers — $P_1, P_2, \ldots, P_N$.


### Output Format

For each test case, output on a new line the number of possible values of $f(P)$ modulo $998244353$.


### Constraints

- $1 \leq T \leq 100$
- $2 \leq N \leq 5000$
- $P_i = -1$ or $1 \leq P_i \leq N$
- All the non $-1$ values in $P$ are distinct.
- The sum of $N$ over all test cases does not exceed $5000$.

### Examples:
#### Example 1:
**Input:**
```
5
3
-1 -1 -1
3
1 2 3
4
2 -1 3 -1
4
-1 -1 2 -1
8
-1 -1 1 -1 -1 5 -1 -1
```
**Output:**
```
5
1
2
5
132
```
**Explaination:**  
Test Case 1 : All 
6 permutations of 
N=3 are possible. But 
[3,1,2] and 
[3,2,1] form the same prefix maximum array, and hence there are only 
5 distinct prefix maximum arrays possible.

### *[Other unattempted questions can be viewed here!](https://www.codechef.com/START230B)*