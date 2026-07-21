# Starters 242
## Contest Division: Division 2
## Position: 339
# Questions:
## Draft Picks
### Description:
$N$ people are preparing to play a card game. The people are numbered $1$ to $N$.
There are $K$ cards, with exactly one card having strength $x$ for each $1 \leq x \leq K$.

In an attempt to keep things fair, the players decide to pick cards in a *snake draft*.
This means the process is as follows:

* First, player 1 will pick one card, then player 2 will pick one card, then player 3, and so on until player $N$ picks a card (or all cards have been picked.)
* After all $N$ players have picked one card each, the order reverses: player $N$ will pick a card, then player $N - 1$, and so on until player 1.
* After all $N$ players have picked one card each, the order reverses again: so players 1 to $N$ will pick their third cards in this order.
* This process of players picking one card each in order from either 1 to $N$ or $N$ to 1 and then reversing order continues over and over again till all $K$ cards have been picked.

On their turn, every player will always pick the card with the **maximum** remaining strength.

The *deck strength* of a player is defined to be the sum of strengths of all the cards they picked.
For example, if a player picks three cards with strengths $3, 7$, and $11$, their deck strength is $3 + 7 + 11 = 21$.

After all picks have been made, what is the **maximum deck strength** any one player has?

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of a single line of input, containing two space-separated integers $N$ and $K$.

### Output Format

For each test case, output on a new line the answer: the maximum deck strength of any one player.

### Constraints

* $1 \leq T \leq 10^4$
* $2 \leq N \leq 100$
* $1 \leq K \leq 100$


### Examples
**Input:**
```
4
2 2
3 7
5 3
6 20
```
**Output:**
```
2
10
3
37
```
**Explaination:**  
**Test case 1**: There are two players and two cards.
* Player 1 will choose the card with strength 2.
* Player 2 will choose the card with strength 1.

Their deck strengths are 2 and 1 respectively. The largest deck strength is hence 2.

**Test case 2**: There are 3 players and 7 cards. The process is as follows:

* The initial direction is forward.
    * Player 1 will pick card 7.
    * Player 2 will pick card 6.
    * Player 3 will pick card 5.
* After all three players have picked, the direction reverses.
    * Player 3 will pick card 4.
    * Player 2 will pick card 3.
    * Player 1 will pick card 2.
* The direction reverses again.
    * Player 1 will pick card 1.
    * There are no more cards, so the process ends.

The deck strengths are:

* Player 1 picked cards 7, 2, 1 for a total of $7 + 2 + 1 = 10$.
* Player 2 picked cards 6, 3 for a total of $6 + 3 = 9$.
* Player 3 picked cards 5, 4 for a total of $5 + 4 = 9$.

The maximum deck strength is hence 10.

**Test case 3**: There are 5 players but only 3 cards. Players 1, 2, 3 will pick cards 3, 2, 1 in order and the picking process will end. The largest deck strength is 3.

## Eventually Equal
### Description:
You are given three positive integers $A, B$, and $C$.

You would like to make $A$ and $B$ equal to each other.
To achieve this, you have the following two types of moves available to you:

1. Simultaneously replace $A$ by $\gcd(A, C)$, and $B$ by $\gcd(B, C)$.
   Note that both replacements *must* be made: it is not allowed to replace only $A$ or only $B$.
2. Increment $C$ by 1.

Find the **minimum** number of moves needed to make $A$ and $B$ equal using the above two types of moves.

Each type of move can be used as many times as you like, and in any order.

It can be proved that it's always possible to make the values of $A$ and $B$ equal using a finite number of moves.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of a single line of input, containing three space-separated integers $A, B$, and $C$.

### Output Format

For each test case, output on a new line the minimum number of moves needed to make $A$ and $B$ equal.

### Constraints

* $1 \leq T \leq 10^5$
* $1 \leq A, B, C \leq 10^9$

### Examples:
**Input:**
```
4
5 5 12
7 6 13
14 9 9
7 6 22
```
**Output:**
```
0
1
3
2
```
**Explaination:**  
**Test case 1**: $A = B = 5$, they're already equal so no moves are required.

**Test case 2**: $A = 7, B = 6, C = 13$.
A single move is enough, because performing a replacement move does the following:
* Sets $A$ to $\gcd(A, C) = \gcd(7, 13) = 1$.
* Sets $B$ to $\gcd(B, C) = \gcd(6, 13) = 1$.
$A$ and $B$ are now equal.

**Test case 3**: One optimal solution using 3 moves is as follows:
* Increment $C$ by 1. Now $A = 14, B = 9, C = 10$.
* Increment $C$ by 1 again. Now $A = 14, B = 9, C = 11$.
* Use the replacement move.
    * $A$ becomes $\gcd(14, 11) = 1$
    * $B$ becomes $\gcd(9, 11) = 1$
    * $A$ and $B$ are hence equal.

## Split And Differ
### Description:
You are given an array $A$ of length $N$.
Find any array $B$ of length **at most $3N$**, containing **positive integers**, such that the following conditions hold:

* No two adjacent elements of $B$ are equal, and
* It is possible to partition $B$ into exactly $N$ non-empty contiguous subarrays such that the sum of the elements in the $i$-th part is equal to $A_i$.

Formally, you need to find an integer $K$ and an array $B_1, B_2, \dots, B_K$ such that:

* $1 \leq K \leq 3N$,
* $1 \leq B_i$ for each $1 \leq i \leq K$,
* $B_i \neq B_{i+1}$ for each $1 \leq i < K$,
* There exist integers $1 = L_1 \leq R_1 < L_2 \leq R_2 < \dots < L_N \leq R_N = K$ such that $L_i = R_{i-1} + 1$ for every $2 \leq i \leq N$, and also for every $1 \leq i \leq N$,
$$\sum_{j=L_i}^{R_i} B_j = A_i$$

If no array satisfying the given conditions exists, output the single integer $-1$.
If multiple such arrays exist, you may find any of them. In particular, you do not need to minimize or maximize the length of $B$.

It can be proved that if at least one such array $B$ exists, then there will exist an answer array whose length doesn't exceed $3N$.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains a single integer $N$.
    * The second line contains $N$ space-separated integers $A_1, A_2, \dots, A_N$.

### Output Format

For each test case:

* If no solution exists, output the single integer $-1$ on a new line.
* If a solution does exist, output two lines.
    * The first line must contain a single integer $K$ ($1 \leq K \leq 3N$), the length of the array $B$ you found.
    * The second line must contain $K$ space-separated integers $B_1, B_2, \dots, B_K$, denoting the elements of the array you found.

If there are multiple valid arrays, you may find any of them.

### Constraints

* $1 \leq T \leq 10^5$
* $1 \leq N \leq 2 \cdot 10^5$
* $1 \leq A_i \leq 2 \cdot 10^5$
* The sum of $N$ over all test cases won't exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
4
4
1 2 1 3
3
7 7 4
4
7 1 1 8
1
2
```
**Output:**
```
4
1 2 1 3
8
4 3 1 2 3 1 3 1
-1
1
2
```
**Explaination:**  
**Test case 1**: The array $A = [1, 2, 1, 3]$ has no adjacent equal elements already, so simply printing that is a correct answer.

**Test case 2**: For $A = [7, 7, 4]$, consider the array $B = [4, 3, 1, 2, 3, 1, 3, 1]$.

* Clearly, no adjacent elements of $B$ are equal.
* Further, by splitting $B$ into $[4, 3], [1, 2, 3, 1], [3, 1]$ we see that the parts have sums $7, 7, 4$ as desired.
Thus, this array $B$ satisfies the conditions.

**Test case 3**: It can be shown that no valid array $B$ exists that satisfies the necessary conditions.

## Dabbling in Distribution
### Description:
You are given an array $A$ of length $N$ containing positive integers.

An index $i (1 \leq i \leq N)$ is called *active* if $A_i > 0$.

You may modify the array by repeatedly performing the following operation:

* Choose an **active** index $i$ with value $x = A_i$, such that $x$ is **strictly smaller** than the current number of active indices.
* Set $A_i$ to $0$.
  Note that index $i$ is no longer active, i.e. the number of active indices decreases by $1$.
* After that, choose exactly $x$ *distinct* active indices and increase each of their values by $1$.

Find the **maximum** number of operations that can be performed.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains a single integer $N$, denoting the length of the array $A$.
    * The second line contains $N$ space-separated integers $A_1, \dots, A_N$.

### Output Format

For each test case, output on a new line the answer: the maximum number of operations that can be performed.

### Constraints

* $1 \leq T \leq 10^5$
* $1 \leq N \leq 2 \cdot 10^5$
* $1 \leq A_i \leq N$
* The sum of $N$ over all test cases won't exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
4
4
1 2 3 4
3
1 1 1
5
4 1 4 2 1
8
5 2 6 2 7 3 1 8
```
**Output:**
```
2
2
3
5
```
**Explaination:**  
**Test case 1**: One way of performing two operations is as follows:

* First, choose $i = 3$.
    * $A_i = 3$, so we must add $1$ to three other active indices.
    * Add $1$ to indices $1, 2, 4$.
    * Then set $A_i = 0$.
    * The array is now $[2, 3, 0, 5]$.
* Next, choose $i = 1$.
    * $A_i = 2$, so we must add $1$ to two other active indices.
    * Choose indices $2, 4$.
    * The array becomes $[0, 4, 0, 6]$.
* No more operations can be performed.

It can be verified that performing more than two operations is impossible. Thus, the answer is $2$.

**Test case 2**: With $A = [1, 1, 1]$, we can perform two operations as follows:

* Choose $i = 1$, and add $1$ to index $2$. The array becomes $[0, 2, 1]$.
* Choose $i = 3$, and again add $1$ to index $2$. The array becomes $[0, 3, 0]$.
* No more operations can be performed.

### *[Other unattempted questions can be viewed here!](https://www.codechef.com/START242B)*