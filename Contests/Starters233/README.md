# Starters 233
## Contest Division: Division 2
## Position: 58
# Questions:
## Movie
### Description:
Chef and his friends are going to watch a movie. He will buy $N$ movie tickets and $M$ buckets of popcorn for him and his friends.

The price of a movie ticket is $A$ rupees, and the price of a bucket of popcorn is $B$ rupees.

However, there is a special offer for a combo pack of $1$ movie ticket and $1$ bucket of popcorn for $C$ rupees. It is guaranteed that

$$
\max(A, B) < C \leq A + B
$$

i.e. the combo is more expensive than a single movie ticket or a single bucket of popcorn, but less expensive than buying them individually.

What is the minimum amount, in rupees, that Chef needs to spend?

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case contains $5$ integers: $N$, $M$, $A$, $B$, and $C$.

### Output Format

For each test case, output on a new line the minimum amount Chef needs to spend.

### Constraints

- $1 \leq T \leq 100$
- $1 \leq N, M \leq 10$
- $1 \leq A, B \leq 100$
- $\max(A, B) < C \leq A + B$

### Examples:
**Input:**
```
3
2 1 10 10 15
5 10 15 12 26
10 10 100 100 200
```
**Output:**
```
25
190
2000
```
**Explaination:**  
Test Case 1: Chef can buy one combo offer for 
15 rupees, and then one movie ticket for 
10 rupees, thus spending 
25 total.

## K Median
### Description:
You have an array $A$ of $N$ integers, and an integer $K$. You must delete exactly $K$ elements from the array.

After deleting $K$ elements, you wonder what are the possible median values of the remaining array. Print all of the possible median values.

---

The median of an array $B$ of length $M$ is the $\left\lceil \frac{M}{2} \right\rceil$ smallest element. For example, the median of $[2, 4, 3, 1]$ is $2$ and the median of $[1, 2, 2]$ is also $2$.

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line contains $2$ integers $N$ and $K$.
  - The second line contains $N$ integers: $A_1, A_2, \ldots, A_N$.

### Output Format

For each test case, output on a new line all the possible medians after deleting $K$ elements, in sorted order.

### Constraints

- $1 \leq T \leq 100$
- $1 \leq K < N \leq 100$
- $1 \leq A_i \leq 10^9$

### Examples:
**Input:**
```
5
4 1
4 2 1 3
4 2
4 2 1 3
4 3
78 19 100 25
6 4
1 3 7 10 15 21
6 4
5 5 5 5 5 5
```
**Output:**
```
2 3 
1 2 3 
19 25 78 100 
1 3 7 10 15 
5 
```
**Explaination:**  
Test Case 1: We are allowed only $1$ deletion.  
- We can delete the element $1$ to get $[2, 3, 4]$, which has a median of $3$.
- We can delete the element $3$ to get $[1, 2, 4]$, which has a median of $2$.  
It can be shown that no other medians are possible.

## AB or C
### Description:
You are given $3$ arrays of positive integers $A$, $B$, and $C$, all of length $N$.

Now, you need to construct another array $D$ of length $N$ such that $D_i$ is either $A_i$, $B_i$, or $C_i$ for each $1 \leq i \leq N$. You can independently choose which value to take for each index.

Find the minimum possible value of $\max(D) - \min(D)$ when we optimally choose the array $D$.

Here, $\max(D)$ represents the maximum element of $D$, and symmetrically $\min(D)$ represents the minimum element.

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line contains a single integer $N$ — the size of the arrays.
  - The $i$-th of the next $N$ lines contain $3$ integers each: $A_i$, $B_i$, and $C_i$.

### Output Format

For each test case, output a single integer — the minimum possible value of $\max(D) - \min(D)$.

### Constraints

- $1 \leq T \leq 10^4$
- $1 \leq N \leq 2 \cdot 10^5$
- $1 \leq A_i, B_i, C_i \leq 10^9$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
2
4
2 4 8
10 12 7
1 6 3
8 2 3
4
10 7 7
2 5 5
3 9 9
11 12 12
```
**Output:**
```
2
6
```
**Explaination:**  
Test Case 1: We can choose $D_1 = C_1 = 8$, $D_2 = C_2 = 7$, $D_3 = B_3 = 6$, and $D_4 = A_4 = 8$. Thus, $D = [8, 7, 6, 8]$ and $\max(D) - \min(D)$ is $2$.

Test Case 2: A possible optimal array $D$ is $[7, 5, 9, 11]$.

## Median Updates
### Description:
For a binary string $S$ of length $N$, we define $f(S)$ as another string of length $N$, where the $i$-th character $f(S)_i$ is the median of the characters $S_{i-1}$, $S_i$, and $S_{i+1}$.

We allow the string to be circular, i.e. we consider $S_0$ as $S_N$ and $S_{N+1}$ as $S_1$.

Given a binary string $S$ of length $N$, define a sequence of strings as follows:

- $A_0 = S$
- $A_i = f(A_{i-1})$ for $i \geq 1$

Find the time when the sequence becomes stable, i.e. the minimum $i$ such that $A_i = A_{i-1}$. If no such $i$ exists, output $-1$ instead.

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line contains a single integer $N$ — the size of the string.
  - The second line contains a binary string $S$ of length $N$.

### Output Format

For each test case, output the minimum $i$ such that $A_i = A_{i-1}$ or $-1$ if no such $i$ exists.

### Constraints

- $1 \leq T \leq 10^4$
- $3 \leq N \leq 2 \cdot 10^5$
- $S_i \in \{0, 1\}$
- $|S| = N$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
3
4
1100
4
1010
3
110
```
**Output:**
```
1
-1
2
```
**Explaination:**  
Test Case 1: Here, $A_0 = 1100$, $A_1 = 1100$, $A_2 = 1100$, and so on. Hence the minimum index is $1$.

Test Case 2: $A_0 = 1010$, $A_1 = 0101$, $A_2 = 1010$, $A_3 = 0101$, and it keeps alternating. Hence, the answer is $-1$.

Test Case 3: $A_0 = 110$, $A_1 = 111$, $A_2 = 111$ and so the minimum index such that $A_i = A_{i-1}$ is $2$.

## Tree LCA Sets
### Description:
Given a tree with $N$ nodes numbered $1$ to $N$, with a special property: the tree is rooted at node $1$, and $\mathrm{par}_i < i$ for all nodes (the parent of each node has a strictly smaller index).

For a subset of nodes $S$, we define an array $A$ of size $N$ in the following way:

$$
A_i = \min_{x \in S} (\mathrm{lca}(x, i))
$$

Here, $\mathrm{lca}(x, y)$ denotes the lowest common ancestor of $x$ and $y$.

There are a total of $2^N - 1$ non-empty subsets $S$ possible. Consider the **distinct** arrays $A$ that are possible from these subsets. Find the sum of $\sum (A_1 + A_2 + \dots + A_N)$ over all distinct arrays $A$ possible. Since the answer may be large, output it modulo $998244353$.

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line contains a single integer $N$ — the size of the tree.
  - The second line contains $N - 1$ integers — $\mathrm{par}_2, \mathrm{par}_3, \ldots, \mathrm{par}_N$, the parents of the vertices.

### Output Format

For each test case, output a single integer — the sum of $\sum (A_i)$ over all distinct arrays $A$ that are possible modulo $998244353$.

### Constraints

- $1 \leq T \leq 10^4$
- $2 \leq N \leq 2 \cdot 10^5$
- $1 \leq \mathrm{par}_i < i$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
2
3
1 1
3
1 2
```
**Output:**
```
12
14
```
**Explaination:**  
Test Case 1: There are $7$ subsets $S$ possible, the corresponding arrays $A$ are as follows:
- $S = \{1\}: A = [1, 1, 1]$
- $S = \{2\}: A = [1, 2, 1]$
- $S = \{3\}: A = [1, 1, 3]$
- $S = \{1, 2\}: A = [1, 1, 1]$
- $S = \{1, 3\}: A = [1, 1, 1]$
- $S = \{2, 3\}: A = [1, 1, 1]$
- $S = \{1, 2, 3\}: A = [1, 1, 1]$

Thus, there are $3$ distinct arrays: $[1, 1, 1]$, $[1, 2, 1]$ and $[1, 1, 3]$. The sum of $\sum (A_i)$ is $3 + 4 + 5 = 12$.

## Reverse Costs
### Description:
For $2$ arrays $A$ and $B$, both of length $N$, we define $f(A, B)$ as follows:

- An integer $s$ is said to be good if it is possible to transform $A$ to $B$ using the following operation several (possibly $0$) times:
  - Choose a range $(l, r)$ such that $(r - l + 1) \geq s$ and $1 \leq l \leq r \leq N$.
  - Reverse the subarray $[A_l, A_{l+1}, \ldots, A_r]$.
- $f(A, B)$ is defined as the maximum possible $s$ which is good.
- When $A = B$, we define $f(A, B) = N + 1$.
- When there is no good $s$, we define $f(A, B) = 0$.

You are given an array $A$ of length $N$. Find the sum of $f(A, B)$ over all $B$ which are permutations of the elements in $A$.

Since the answer may be large, you should find it modulo $998244353$.

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line contains a single integer $N$.
  - The second line contains $N$ integers — $A_1, A_2, \ldots, A_N$.

### Output Format

For each test case, output the sum of $f(A, B)$ over all $B$ which are permutations of $A$ modulo $998244353$.

### Constraints

- $1 \leq T \leq 10^4$
- $3 \leq N \leq 2 \cdot 10^5$
- $1 \leq A_i \leq N$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
4
3
1 1 1
3
2 1 1
4
1 2 3 4
5
1 2 1 2 1
```
**Output:**
```
4
9
59
37
```
**Explaination:**  
Test Case 1: There is only one valid array $B$, which is $[1, 1, 1]$, the same as $A$. Hence, $f(A, B) = N + 1 = 4$ for that array.

Test Case 2: There are $3$ valid arrays $B$ as follows:
- $B = [2, 1, 1]$: $B = A$, so $f(A, B) = 4$.
- $B = [1, 2, 1]$: $f(A, B) = 2$ because we can perform one operation of reversing the range $[1, 2]$ in $A$ to get $B$.
- $B = [1, 1, 2]$: $f(A, B) = 3$ because we can perform one operation of reversing the range $[1, 3]$ in $A$ to get $B$.

Hence, the sum is $4 + 2 + 3 = 9$.

## Balance Substrings
## Description:
For a binary string $S$, and an integer $K$, we define $f(S, K)$ as the minimum sum of costs of choosing $K$ non-intersecting substrings from $S$. The cost of a substring is its balance, i.e. $|c_0 - c_1|$ where $c_0$ represents the number of $0$s and $c_1$ the number of $1$s.

Note that it is not necessary that every element be part of some chosen substring.

For example, $f(1011, 2)$ is $1$ because we can choose the substrings $10$ (index $1$ to $2$) and $1$ (index $3$). The balance of the first is $0$, and the second is $1$.

We define

$$
g(S) = \sum_{k=1}^{|S|} f(S, k)
$$

Given an integer $N$, find the sum of $(g(S))^N$ over all $2^N$ binary strings of length $N$. Since the answer may be large, output it modulo $998244353$.

### Input Format

- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case contains a single integer $N$.

### Output Format

For each test case, find the sum of $g(S)^N$ over all $2^N$ binary strings of length $N$ modulo $998244353$.

### Constraints

- $1 \leq T \leq 100$
- $1 \leq N \leq 10^6$
- The sum of $N$ over all test cases does not exceed $10^6$.

### Examples:
**Input:**
```
5
1
2
3
343
900000
```
**Output:**
```
2
26
816
491096447
113011126
```
**Explaination:**  
Test Case 1: There are $2$ binary strings of length $1$, and both have $g(S) = f(S, 1) = 1$.

Test Case 2: Here is the analysis:
- For the strings $00$ and $11$, $f(S, 1) = 1$ and $f(S, 2) = 2$. Hence $g(S) = 3$.
- For the strings $01$ and $10$, $f(S, 1) = 0$ and $f(S, 2) = 2$. Hence $g(S) = 2$.

Thus, the sum of $g(S)^2$ is $3^2 + 3^2 + 2^2 + 2^2 = 26$.

# Unrated Questions:
## Cake Discount
### Description:
You buy $N$ cakes from Chef's bakery. Normally, each cake costs $100$ rupees.

However, Chef has a special discount offer. If you buy at least $5$ cakes, then you get a $15$ percent discount on all your bought cakes, i.e. each cake costs only $85$ rupees.

Find the cost, in rupees, that you paid for the $N$ cakes.

### Input Format

- The first and only line contains $1$ integer $N$.

### Output Format

Output the cost of buying $N$ cakes.

### Constraints

- $1 \leq N \leq 10$

### Examples:
**Input 1:**
```
4
```
**Output 1:**
```
400
```
**Explaination 1:**  
There is no discount since you bought $4$ cakes, and so you pay the whole $100$ rupees for each of them.

**Input 2:**
```
5
```
**Output 2:**
```
425
```
**Explaination 2:**  
Since you bought $5$ cakes, the discount is applied and each cake costs only $85$ rupees.

> Solved all the questions in the contest!
### The contest can be viewed [here](codechef.com/START233B)