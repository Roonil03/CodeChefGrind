# Starters 247
## Contest Division: Division 2
## Position: 

# Questions:
## Conveyor Belt
### Description:
There is a conveyor belt with $N$ slots, numbered from 1 to $N$. There is also a collection point at each end of the belt, located at positions 0 and $N + 1$.

Each slot has a direction:
* `L`, which moves the object one position to the left;
* `R`, which moves the object one position to the right.

An object will be placed at slot $P$. It repeatedly moves according to the direction of its current slot until it reaches one of the two collection points.

Before placing the object, you may reverse the direction of any number of slots, changing `L` to `R` or `R` to `L`.

Find the minimum number of slots whose directions must be reversed so that the object eventually reaches a collection point.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line contains two space-separated integers $N$ and $P$, denoting the number of slots and the starting position of the object, respectively.
    * The second line contains a string $S$ of length $N$, where $S_i$ denotes the direction of the $i$-th slot.

### Output Format
For each test case, output on a new line the minimum number of slots whose directions must be reversed.

### Constraints
* $1 \le T \le 100$
* $1 \le N \le 100$
* Every character of $S$ is either `L` or `R`.

### Examples:
**Input:**
```
3
4 2
LRLR
5 3
LLRRR
8 5
RRLLRLRL
```
**Output:**
```
1
0
2
```
**Explaination:**  
* Test case 1: Reversing either slot 2 or slot 3 allows the object to reach a collection point. Hence, the answer is 1.
* Test case 2: The object already moves right and reaches the collection point at 6. Hence, no reversals are required.
* Test case 3: Reverse slots 6 and 8. The object then moves right until it reaches the collection point at 9, so the answer is 2.

## Substring Shift
### Description:
You are given a string $S$ consisting of lowercase English letters. You may perform the following operation at most once:
* Choose a non-empty contiguous substring and replace each character in it with the next letter of the alphabet, cyclically; that is, `a` becomes `b`, `b` becomes `c`, and so on, while `z` becomes `a`.

All characters outside the chosen substring remain unchanged.

Find the lexicographically smallest string that can be obtained.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains a single integer $N$, denoting the length of the string.
    * The second line contains a string $S$ of length $N$, consisting of lowercase English letters.

### Output Format
For each test case, output on a new line the lexicographically smallest string that can be obtained.

### Constraints
* $1 \le T \le 10^4$
* $1 \le N \le 2 \cdot 10^5$
* $S_i \in \{a, b, \dots, z\}$ for each $1 \le i \le N$.
* The sum of $N$ over all test cases won't exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
3
4
izbz
3
aba
4
zzbb
```
**Output:**
```
iabz
aba
aabb
```
**Explaination:**  
* Test case 1: Shift the substring [2, 2], changing `z` to `a` and obtaining `iabz`.
* Test case 2: Performing no operation gives the smallest possible string, `aba`.
* Test case 3: Shift the substring [1, 2] to obtain `aabb`.

## Fair Flipping (Easy)
### Description:
*This is the easy version of the problem. You only need to find the lexicographically minimum string reachable.*

You're given a binary string $A$ of length $N$ and an integer $K$ ($1 \le 2K \le N$).

You can modify $A$ using the following operation:

* Choose a subsequence of $A$ with length $2K$ that contains exactly $K$ zeros and $K$ ones.
* Then, flip every character of the chosen subsequence: each 0 becomes 1 and each 1 becomes 0.

Your task is to find the lexicographically smallest$^\dagger$ string that $A$ can be converted into as a result of using this operation several (possibly, zero) times.

$^\dagger$A binary string $P$ of length $N$ is said to be lexicographically smaller than another binary string $Q$ of length $N$ if and only if there exists an index $i (1 \le i \le N)$ such that:

* $P_j = Q_j$ for each $1 \le j < i$; and
* $P_i = 0$ but $Q_i = 1$.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains two space-separated integers $N$ and $K$.
    * The second line contains a binary string $A$ of length $N$.

### Output Format
For each test case, output on a new line the lexicographically smallest string that $A$ can be converted into.

### Constraints
* $1 \le T \le 10^5$
* $1 \le N \le 2 \cdot 10^5$
* $1 \le 2 \cdot K \le N$
* $A_i \in \{0, 1\}$
* The sum of $N$ over all test cases won't exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
4
3 1
010
4 2
1010
5 2
11011
6 2
000101
```
**Output:**
```
001
0101
11011
000011
```
**Explaination:**  
Test case 1: $K = 1$, so each operation involves one 0 and one 1.
Perform one operation with indices 2 and 3. This turns the string into 001 which is optimal.

Test case 2: $K = 2$, so each operation involves two 0's and two 1's.
Perform one operation choosing all four indices. Every character flips, resulting in 0101. This is optimal.

Test case 3: $K = 2$, so each operation involves two 0's and two 1's.
It's impossible to even modify the given string since it only contains one 0. Thus, the answer is the string itself, 11011.

## Red Blue Swaps
### Description:
You are given a permutation $A$ of the integers $[1, N]$ and a binary array $B$. $B_i = 0$ represents the $i$-th element is coloured red, and $B_i = 1$ represents blue.

You can do the following operation as many times as you want (possibly 0):

* Choose an index $i$ such that:
    * $1 \le i < N$
    * $B_i \ne B_{i+1}$, the colours should be different
    * The red coloured element should be larger than the blue coloured element. For example, if $B_i = 0$ and $B_{i+1} = 1$, $A_i > A_{i+1}$ should hold.
* Swap $A_i$ and $A_{i+1}$, and also swap $B_i$ and $B_{i+1}$.

Using the above operation, find the number of arrays $A$ possible. Since the answer may be large, find it modulo 998244353.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line contains a single integer $N$.
    * The second line contains $N$ integers - $A_1, A_2, \dots, A_N$.
    * The third line contains $N$ integers - $B_1, B_2, \dots, B_N$.

### Output Format
For each test case, output on a new line the number of possible arrays $A$ modulo 998244353.

### Constraints
* $1 \le T \le 10^4$
* $2 \le N \le 5000$
* $1 \le A_i \le N$
* $A_i \ne A_j$ for all $1 \le i < j \le N$
* $0 \le B_i \le 1$
* The sum of $N^2$ over all test cases does not exceed $5000^2$.

### Examples:
**Input:**
```
4
3
1 2 3
1 0 1
3
3 2 1
1 0 0
3
3 2 1
0 0 1
5
2 3 1 4 5
1 0 1 0 1
```
**Output:**
```
2
1
3
6
```
**Explaination:**  
Test Case 1: You can choose index $i = 1$, and swap to get $A = [2, 1, 3]$. Thus, $A = [1, 2, 3]$, the original array and $A = [2, 1, 3]$ are the 2 possible arrays.

Test Case 2: You cannot perform any swaps.

## Fair Flipping (Hard)
### Description:
*This is the hard version of the problem. You need to also find the minimum number of moves needed to obtain the lexicographically minimum string.*

You're given a binary string $A$ of length $N$ and an integer $K$ ($1 \le 2K \le N$).

You can modify $A$ using the following operation:

* Choose a subsequence of $A$ with length $2K$ that contains exactly $K$ zeros and $K$ ones.
* Then, flip every character of the chosen subsequence: each 0 becomes 1 and each 1 becomes 0.

Your task is to find the lexicographically smallest$^\dagger$ string that $A$ can be converted into as a result of using this operation several (possibly, zero) times.

Additionally, find the minimum number of operations needed to obtain this lexicographically minimum string.

$^\dagger$A binary string $P$ of length $N$ is said to be lexicographically smaller than another binary string $Q$ of length $N$ if and only if there exists an index $i(1 \le i \le N)$ such that:

* $P_j = Q_j$ for each $1 \le j < i$; and
* $P_i = 0$ but $Q_i = 1$.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains two space-separated integers $N$ and $K$.
    * The second line contains a binary string $A$ of length $N$.

### Output Format
For each test case, output two lines:
* The first line should contain the lexicographically smallest string that $A$ can be converted into.
* The second line should contain the minimum number of operations needed to reach this string.

### Constraints
* $1 \le T \le 10^5$
* $1 \le N \le 2 \cdot 10^5$
* $1 \le 2 \cdot K \le N$
* $A_i \in \{0, 1\}$
* The sum of $N$ over all test cases won't exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
4
3 1
010
4 2
1010
5 2
11011
6 2
000101
```
**Output:**
```
001
1
0101
1
11011
0
000011
2
```
**Explaination:**  
Test case 1: $K = 1$, so each operation involves one 0 and one 1.
Perform one operation with indices 2 and 3. This turns the string into 001 which is optimal.
One operation is used.

Test case 2: $K = 2$, so each operation involves two 0's and two 1's.
Perform one operation choosing all four indices. Every character flips, resulting in 0101. This is optimal.
One operation is used.

Test case 3: $K = 2$, so each operation involves two 0's and two 1's.
It's impossible to even modify the given string since it only contains one 0. Thus, the answer is the string itself, 11011.
No operations are used.

## *[Other unattempted questions can be viewed here!](https://www.codechef.com/START247B)*

# Unrated Questions:
## Square Paper
### Description:
You have a rectangular piece of paper of dimensions $A \cdot B$. You are wondering what is the largest square piece of paper you can cut off from this rectangular piece.

Find the area of this maximum square paper.

You are only allowed to cut along parallel to the edges of the paper, so either horizontal or vertical cuts.

### Input Format
* The only line of input contains 2 integers - $A$ and $B$.

### Output Format
Output a single integer - the area of the maximum square you can cut off

### Constraints
* $1 \le A, B \le 5$

### Examples:
#### Example 1:
**Input:**
```
2 3
```
**Output:**
```
4
```
**Explaination:**  
You can cut off a 2 ⋅ 2 square from the rectangle.

#### Example 2:
**Input:**
```
4 3
```
**Output:**
```
9
```