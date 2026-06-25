# Starters 244
## Contest Division: Division 2
## Position:

# Questions:
## Carrot Collection
### Description:
Deep in a forest live a bear and a rabbit.

The forest has $N$ clearings, numbered from 1 to $N$.
Clearing $i$ has $A_i$ carrots growing in it.

The bear patrols several zones of the forest - specifically, you are given integers $L$ and $R$, such that the bear patrols clearings $L, L + 1, L + 2, \dots, R$.
It is guaranteed that either $L > 1$ or $R < N$, i.e. there exists at least one clearing not patrolled by the bear.

The rabbit wants to collect some of the carrots from the forest.
This will be done via the following process:

* Let $X$ be the current clearing the rabbit is in.
* The rabbit can do any one of the following three things:
    * Take all carrots from clearing $X$. This is allowed only if clearing $X$ still has carrots.
    * Move to clearing $X - 1$. This is allowed only if $X > 1$.
    * Move to clearing $X + 1$. This is allowed only if $X < N$.
* The left/right moves can be done as many times as you like, and it is allowed to visit the same clearing multiple times if you wish.

However, the rabbit **cannot visit** any clearing that's being patrolled by the bear.

The initial value of $X$ can be chosen freely by the rabbit; as long as it is some clearing that's not patrolled.

Find the **maximum** possible number of carrots the rabbit can collect under the above conditions.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains three space-separated integers $N$, $L$, and $R$ — the number of clearings, and the parameters describing the bear's patrol.
    * The second line contains $N$ space-separated integers $A_1, A_2, \dots, A_N$.

### Output Format
For each test case, output on a new line the maximum number of carrots the rabbit can collect.

### Constraints
* $1 \le T \le 1000$
* $2 \le N \le 100$
* $1 \le L \le R \le N$
* $L > 1$ or $R < N$
* $1 \le A_i \le 100$

### Examples:
**Input:**
```
3
3 2 3
4 2 5
4 2 2
4 6 2 3
5 1 3
6 10 4 7 3
```
**Output:**
```
4
5
10
```
**Explaination:**  
**Test case 1:** $N = 3, L = 2, R = 3$ so the bear patrols clearings 2 and 3. The only safe clearing is 1, so the optimal choice for the rabbit is to start at $X = 1$ and pick the $A_1 = 4$ carrots there. The answer is hence 4.

**Test case 2:** It's optimal for the rabbit to start with $X = 3$, and then do the following:
* Take all $A_3 = 2$ carrots from clearing 3.
* Move to clearing 4.
* Take all $A_4 = 3$ carrots from clearing 4.
* This is a total of $2 + 3 = 5$ carrots, which is the best the rabbit can do.

**Test case 3:** The rabbit can start at clearing 5 and take the carrots from clearings 5 and 4, for a total of $3 + 7 = 10$ carrots. This is optimal.

## Dividing by 2
### Description:
You have an array $A$ of $N$ integers. In one operation, you can do the following:
* Choose any index $i (1 \le i \le N)$, and update $A_i = \lfloor \frac{A_i}{2} \rfloor$.

Find the minimum number of operations needed to make all the array elements equal.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line contains a single integer $N$.
    * The second line contains an array of $N$ integers - $A_1, A_2, \dots, A_N$.

### Output Format
For each test case, output on a new line the minimum operations to make all elements equal.

### Constraints
* $1 \le T \le 100$
* $2 \le N \le 100$
* $1 \le A_i \le 10^9$

### Examples:
**Input:**
```
3
2
2 3
4
4 8 9 23
2
42 42
```
**Output:**
```
2
8
0
```
**Explaination:**  
**Test Case 1:** We can do one operation each with $i = 1$ and $i = 2$ to get $[1, 1]$.

## AND OR Conversion 1
### Description:
**This is the first version of the problem. Here, you only need to output whether the pair of strings is good.**

A pair of strings $A$ and $B$, both of length $N$, are said to be good if $A$ can be converted to $B$ by using either of the following operations multiple times:

* Choose an index $i(1 \le i < N)$, update $A_i$ and $A_{i+1}$ both to $A_i|A_{i+1}$.
* Choose an index $i(1 \le i < N)$, update $A_i$ and $A_{i+1}$ both to $A_i\&A_{i+1}$.

Here, | denotes Bitwise OR (evaluates to 1 iff both inputs are 1, and 0 otherwise), and similarly, & denotes Bitwise AND.

---

You are given a pair of strings $A$ and $B$ of length $N$. Output Yes if they are good, and No otherwise.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line contains a single integer $N$.
    * The second line contains a binary string $A$.
    * The third line contains a binary string $B$.

### Output Format
For each test case, output on a new line Yes if it is possible to convert $A$ to $B$ and No otherwise.

### Constraints
* $1 \le T \le 10^4$
* $2 \le N \le 2 \cdot 10^5$
* $A_i \in \{0, 1\}$
* $B_i \in \{0, 1\}$
* The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
3
3
010
001
2
01
10
2
00
11
```
**Output:**
```
Yes
No
No
```
**Explaination:**  
**Test Case 1:** You can do the following operations:
* Choose $i = 2$, and use the OR operation to get $A = 011$.
* Choose $i = 1$, and use the AND operation to get $A = 001$, as required.
## AND OR Conversion 2
### Description:
**This is the second version of the problem. Here, you need to find the number of string $B$.**

A pair of strings $A$ and $B$, both of length $N$, are said to be good if $A$ can be converted to $B$ by using either of the following operations multiple times:

* Choose an index $i(1 \le i < N)$, update $A_i$ and $A_{i+1}$ both to $A_i|A_{i+1}$.
* Choose an index $i(1 \le i < N)$, update $A_i$ and $A_{i+1}$ both to $A_i\&A_{i+1}$.

Here, | denotes Bitwise OR (evaluates to 1 iff both inputs are 1, and 0 otherwise), and similarly, & denotes Bitwise AND.

---

You are given a string $A$ of length $N$. Count how many binary strings $B$ exist of length $N$, such that the pair $(A, B)$ is good. Since the answer may be large, find it modulo 998244353.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line contains a single integer $N$.
    * The second line contains a binary string $A$.

### Output Format
For each test case, output the number of strings $B$ which form a good pair with $A$.

### Constraints
* $1 \le T \le 10^4$
* $2 \le N \le 2 \cdot 10^5$
* $A_i \in \{0, 1\}$
* $B_i \in \{0, 1\}$
* The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
3
3
010
2
01
2
00
```
**Output:**
```
7
3
1
```
**Explaination:**  
**Test Case 1:** The following binary strings $B$ are good as a pair with $A : 000, 001, 010, 100, 011, 110, 111$.

## Tree Swapping (Easy)
### Description:
**This is the easy version of the problem. Here, the sum of $N$ is $\le 5000$.**

You are given a tree with $N$ nodes labelled 1 through $N$.

For a given pair of binary strings $S$ and $T$, we define $f(S, T)$ as follows:

* In one operation, you can swap $S_u$ and $S_v$ if $(u, v)$ are adjacent in the tree.
* $f(S, T)$ is defined as the minimum swaps necessary to make $S = T$.
* In case it is not possible to make $S = T$, $f(S, T)$ would be defined as 0.

---

You are given a string $S$ where some characters are ? instead, indicating that they are not fixed yet.

Over all possible binary strings $S$ (formed by replacing ? by 0 or 1), find the sum of $f(S, T)$ modulo 998244353.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line contains a single integer $N$.
    * The next $N - 1$ lines contain 2 integers each - $u$ and $v$, representing an edge.
    * The next line contains a string $S$.
    * The next line contains a binary string $T$.

### Output Format
For each test case, output the sum of $f(S, T)$ over all valid $S$ modulo 998244353.

### Constraints
* $1 \le T \le 1000$
* $2 \le N \le 5000$
* $1 \le u, v \le N$
* $S_i \in \{0, 1, ?\}$
* $T_i \in \{0, 1\}$
* The sum of $N$ over all test cases does not exceed 5000.

### Examples:
**Input:**
```
3
2
1 2
??
01
3
1 2
2 3
0??
111
5
1 2
1 3
1 4
1 5
0??1?
10101
```
**Output:**
```
1
0
7
```
**Explaination:**  
**Test Case 1:** There are 4 possible strings:
* $S = 00, 11 : f(S, T) = 0$ because it is impossible to make $S = T$.
* $S = 01 : f(S, T) = 0$ because $S = T$.
* $S = 10 : f(S, T) = 1$ because you can do one swap of $S_1$ and $S_2$.

## *[Other unattempted questions can be viewed here!](https://www.codechef.com/START244B)*

# Unrated Questions:
## Teleport Home
### Description:
Chef has traveled a long way, and now wants to get home.

Chef is $D$ kilometers away from home, and he can walk at a speed of 1 kilometer per hour.

Chef also has the ability to teleport. He can teleport for a distance of **at most** $T$ kilometers, which happens instantly and doesn't require any time.

The teleport can be used **at most once**.

Find the **minimum** time, in hours, that Chef needs to reach home.

### Input Format
* The only line of input will contain two space-separated integers $D$ and $T$ — the distance away from home of Chef and the teleport distance, respectively.

### Output Format
* Output a single integer: the minimum time Chef needs to reach home.

### Constraints
* $1 \le D, T \le 200$

### Examples:
#### Example 1:
**Input:**
```
5 3
```
**Output:**
```
2
```
**Explaination:**  
Chef's house is 5 kilometers away, and he can teleport up to 3 kilometers.  
So, it's optimal to teleport 3 kilometers (which takes no time), and then walk the remaining $5 - 3 = 2$ kilometers. At a rate of 1 kilometer per hour, this takes two hours, so the answer is 2.

#### Example 2:
**Input:**
```
5 7
```
**Output:**
```
0
```
**Explaination:**  
Chef's house is 5 kilometers away, and he can teleport up to 7 kilometers.  
Because $5 \le 7$, he can simply directly teleport to his home, taking 0 hours.

#### Example 3:
**Input:**
```
63 12
```
**Output:**
```
51
```
**Explaination:**  
Chef's house is 63 kilometers away, and he can teleport up to 12 kilometers.  
It's optimal to teleport 12 kilometers (which takes no time), and then walk the remaining $63 - 12 = 51$ kilometers. At a rate of 1 kilometer per hour, this takes 51 hours, so the answer is 51.

## Passing Chain
### Description:
$N$ football players stand in a line in order to practice their passes.

The players are numbered 1 to $N$.
Initially, player 1 has the ball.

All the players have a passing power of $K$.
At any point of time, if player $X$ has the ball:

* If $X + K \le N$, the ball will be passed to player $X + K$.
* Otherwise, the ball will remain with player $X$.

You are given $N$ and $K$. Find the number of the player who will have the ball in the end, given that player 1 starts with it.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of a single line of input, containing two space-separated integers $N$ and $K$ — the number of football players and their passing power.

### Output Format
For each test case, output on a new line the answer: the number of the player who will have the ball in the end.

### Constraints
* $1 \le T \le 2500$
* $1 \le N, K \le 50$

### Examples:
**Input:**
```
4
4 1
6 2
6 7
11 6
```
**Output:**
```
4
5
1
7
```
**Explaination:**  
**Test case 1:** $K = 1$, so each player passes to the next one. The ball goes from player 1 to player 2, to player 3, to player 4. Player 4 can't pass it further so that's where it ends; and the answer is 4.

**Test case 2:** $K = 2$, so the sequence of passes is:
* Player 1 passes to player $1 + 2 = 3$.
* Player 3 passes to player $3 + 2 = 5$.
* Player 5 can't pass to anyone since $5 + 2 = 7 > N$.  
Thus, the answer is 5.

**Test case 3:** Player 1 is unable to pass the ball because $1 + K = 1 + 7 = 8 > 6 = N$. So, the ball remains