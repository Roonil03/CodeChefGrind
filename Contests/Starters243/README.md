# Starters 243
## Contest Division: Division 2
## Position: 216
# Questions:
## Lose Less
### Description:
Chefland is participating in the football world cup.
Every football match played by Chefland has one of three outcomes: Chefland can win, the match can be tied, or Chefland can lose.

* If Chefland wins the match, they will receive **3** points.
* If the match is tied, they will receive **1** point.
* If Chefland loses the match, they will receive **0** points.

Chefland has played $M$ matches so far, and has received a total of $N$ points from these matches. However, you do not remember how many of these matches were wins, ties, or losses.

Find the **minimum** number of losses Chefland could possibly have had, while ending up with exactly $N$ points from $M$ matches.

**Additional constraint:** It is guaranteed that for any $(M, N)$ pair given as input, there exists at least one way to attain exactly $N$ points from $M$ matches.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of a single line of input, containing two space-separated integers $M$ and $N$ — the number of matches and the number of points Chefland has, respectively.

### Output Format
For each test case, output on a new line the minimum number of losses Chefland could have faced, while ending up with $N$ points from $M$ matches.

### Constraints
* $1 \le T \le 1000$
* $1 \le M \le 20$
* $0 \le N \le 3 \cdot M$
* It is guaranteed that there exists a way to end up with $N$ points from $M$ matches.

### Examples:
**Input:**
```
5
3 3
5 0
6 7
8 22
9 2
```
**Output:**
```
0
5
1
0
7
```
**Explaination:**  
**Test case 1:** There are $M = 3$ matches and $N = 3$ points. If Chefland ties all three games, they will receive one point from each for a total of 3 points. This way, there are no losses; so the answer is 0.

**Test case 2:** There are $M = 5$ matches and $N = 0$ points. The only way to get 0 points is to lose every match; so the answer is 5.

**Test case 3:** There are $M = 6$ matches and $N = 7$ points. One way to reach 7 points from 6 matches is as follows:
* Win one match, scoring 3 points.
* Tie four matches, scoring 4 points in total.
* Lose one match, scoring 0 points.

This is $1 + 4 + 1 = 6$ matches, for a total of $3 + 4 + 0 = 7$ points, with only one loss. It can be verified that reaching 7 points is impossible with fewer than one loss, so the answer is 1.

**Test case 4:** One way of reaching 22 points in 8 matches is to win 7 matches and tie one match; so there are no losses.

## Starved for Seating
### Description:
You're the manager of a football stadium, and it's now time to decide whether to upgrade it or not.

There are $N$ football teams. You know that the $i$-th team has $A_i$ fans.
Each person is a fan of exactly one team, so the total number of people is $(A_1 + \dots + A_N)$.

It is guaranteed that each $A_i$ is an **even integer**.

When a match between teams $X$ and $Y$ ($X \neq Y$) happens in the stadium,
* **All** fans of teams $X$ and $Y$ will attend the match.
    * This means $A_X$ fans of team $X$ and $A_Y$ fans of team $Y$.
* For every **other** team, **exactly half** of its fans will attend the match.
    * That is, for each $i$ such that $1 \le i \le N, i \neq X, i \neq Y$, exactly $\frac{A_i}{2}$ fans will attend.

Your stadium currently has $K$ seats.
There are $\frac{N(N-1)}{2}$ possible matches between two different teams. For how many of these matches does the stadium *not* have enough seating already?
That is, for how many of these matches will there be strictly more than $K$ fans attending?

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains two space-separated integers $N$ and $K$ — the number of teams and the number of seats in the stadium, respectively.
    * The second line contains $N$ space-separated integers $A_1, \dots, A_N$.

### Output Format
For each test case, output on a new line the number of matches for which the stadium does *not* have enough seating.

### Constraints
* $1 \le T \le 100$
* $1 \le N \le 100$
* $1 \le K \le 10000$
* $0 \le A_i \le 100$
* $A_i$ is even for each $1 \le i \le N$

### Examples:
**Input:**
```
4
3 10
2 4 6
4 14
8 4 0 6
4 25
8 4 0 6
6 100
20 30 18 48 6 24
```
**Output:**
```
1
2
0
4
```
**Explaination:**  
**Test case 1:** There are three teams, and so $\frac{3 \cdot 2}{2} = 3$ matches possible between them. Looking at each one:
* If teams 1 and 2 play, the number of fans attending will be $A_1 + A_2 + \frac{A_3}{2} = 2 + 4 + 3 = 9$.
* If teams 1 and 3 play, the number of fans attending will be $A_1 + \frac{A_2}{2} + A_3 = 2 + 2 + 6 = 10$.
* If teams 2 and 3 play, the number of fans attending will be $\frac{A_1}{2} + A_2 + A_3 = 1 + 4 + 6 = 11$.

The stadium has $K = 10$ seats. Only the last match has $> 10$ fans attending, so the answer is 1.

**Test case 2:** There are 6 possible matches between 4 teams. Among them,
* If teams 1 and 2 play, $8 + 4 + 0 + 3 = 15$ fans will attend.
* If teams 1 and 4 play, $8 + 2 + 0 + 6 = 16$ fans will attend.

These two matches have $> K = 14$ fans attending. It can be verified that the other four matches will have $\le 14$ fans attending, so there's no issue with them.
The answer is hence 2.

**Test case 3:** This is the same as the previous example, but with larger $K$. This time, there's enough seating for all the matches, so the answer is 0.

## OR Operations
### Description:
You are given an array $A$ of $N$ integers.

In one operation, you can do the following:
* choose an index $i (1 \le i < N)$
* delete both $A_i$ and $A_{i+1}$ and insert back $(A_i | A_{i+1})$ into the same place.

Here, $|$ denotes the Bitwise OR Operator.

Find the minimum number of operations needed to make all remaining array elements equal.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line contains a single integer $N$.
    * The second line contains $N$ integers - $A_1, A_2, \dots, A_N$.

### Output Format
For each test case, output on a new line the minimum number of operations to make all remaining array elements equal.

### Constraints
* $1 \le T \le 10^4$
* $2 \le N \le 2 \cdot 10^5$
* $0 \le A_i < 2^{30}$
* The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
4
2
3 4
3
3 1 2
3
6 6 6
5
7 2 4 3 1
```
**Output:**
```
1
1
0
3
```
**Explaination:**  
**Test Case 2:** You can perform an operation with $i = 2$ to get $[3, 3]$.

## GCD Arrays (Easy)
### Description:
**This is the easy version of the problem. In this version, $M \le 100$.**

An array $A$ of length $N$ is called **good** if it satisfies the following conditions:
* $\gcd(A_1, A_2, \dots, A_N) = 1$
* $\gcd(A_L, A_{L+1}, \dots, A_R) \neq 1$ for all $(L, R) \neq (1, N)$

That is, every other subsegment except the full array should have $\gcd \neq 1$.

Given integers $N$ and $M$, count the number of good arrays of size $N$ satisfying $1 \le A_i \le M$. Since the answer may be large, find it modulo $998244353$.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* The first and only line of input contains 2 integers $N$ and $M$.

### Output Format
For each test case, output on a new line the number of good arrays modulo $998244353$.

### Constraints
* $1 \le T \le 50$
* $3 \le N \le 2 \cdot 10^5$
* $3 \le M \le 100$

### Examples:
**Input:**
```
5
3 3
3 6
3 12
4 12
200000 100
```
**Output:**
```
0
4
42
74
263141891
```
**Explaination:**  
* **Test Case 1:** There are no valid arrays.
* **Test Case 2:** The 4 valid arrays are as follows: `[2, 6, 3]`, `[3, 6, 2]`, `[4, 6, 3]` and `[3, 6, 4]`.

## Binary Flipping (Easy)
### Description:
**This is the easy version of the problem. In this version, $N \le 100$.**

For a binary array $S$ of length $N$, define $f(S)$ in the following way:

* Consider performing operations as follows:
    * Choose index $i$ such that $1 \le i \le N - 2$ and $S_i = S_{i+2}$
    * Flip the value of $S_{i+1}$, i.e., 0 to 1 or vice versa.
* $f(S)$ is the number of arrays reachable by the use of several (possibly 0) such operations.

You are given an array $A$ of length $N$, which contains 0, 1 and -1s. Let $K$ denote the number of -1 in the array $A$.

Over all $2^K$ ways of replacing the -1 in array $A$ with either 0 or 1, find the sum of $f(A)$ over all such ways. Since the answer may be large, find it modulo 998244353.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line contains a single integer $N$.
    * The second line contains $N$ integers - $A_1, A_2, \dots, A_N$.

### Output Format
For each test case, output on a new line the total sum of $f(A)$ over all ways of replacing the -1s modulo 998244353.

### Constraints
* $1 \le T \le 50$
* $3 \le N \le 100$
* $-1 \le A_i \le 1$

### Examples:
**Input:**
```
6
3
0 0 1
3
0 1 0
4
-1 -1 -1 -1
4
1 -1 -1 0
5
0 -1 0 -1 0
12
-1 -1 0 -1 -1 -1 1 -1 -1 -1 1 -1
```
**Output:**
```
1
2
40
10
24
176176
```
**Explaination:**  
* **Test Case 1:** The array $A$ is already fixed, and there is no operation to do.
* **Test Case 2:** The array $A$ is already fixed, but $f(A) = 2$ because we can also obtain $[0, 0, 0]$ by doing an operation with $i = 1$.

### *[Other unattempted questions can be viewed here!](https://www.codechef.com/START243B)*