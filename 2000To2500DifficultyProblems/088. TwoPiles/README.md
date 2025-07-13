# Two Piles
## Rating: 2347
### Description:
You are given $N$ pairs of integers. The $i$-th pair is $(A_i, B_i)$.
You also have two piles with you, both initially empty.

You will perform the following process:

* For each $i$ from $1$ to $N$, choose exactly one of $A_i$ or $B_i$.
* Then, add the chosen integer to one of your two piles.

At the end of the process, both piles must be non-empty (i.e., you should have added at least one integer to both).

The value of a pile is defined to be its maximum element.
If you make your choices optimally, find the minimum possible difference between the values of the piles.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line of each test case contains a single integer $N$ - the number of pairs.
    * The next $N$ lines describe the pairs. The $i$-th of these lines contains two space-separated integers $A_i$ and $B_i$ - the elements of the $i$-th pair.

### Output Format

For each test case, output on a new line the minimum possible difference between the values of the piles.

### Constraints

*   $1 \le T \le 10^{4}$
*   $2 \le N \le 2 \cdot 10^{5}$
*   $1 \le A_{i}, B_{i} \le 10^{9}$
*   The sum of $N$ over all test cases won't exceed $2 \cdot 10^{5}$.

### Examples:
#### Example 1:
**Input:**
```
3
2
1 6
4 9
2
1 9
4 6
4
10 10
23 55
21 80
105 91
```
**Output:**
```
2
3
11
```
**Explaination:**  
Test case 1:  
The pairs are $(1, 6)$ and $(4, 9)$.
Choose $6$ from the first pair, and $4$ from the second pair, and place them on different piles.
The maximums are $6$ and $4$, and the difference between them is $|6 - 4| = 2$.
Achieving a smaller difference is not possible.

Test case 2:  
The pairs are $(1, 9)$ and $(4, 6)$.
Choose $1$ from the first pair and $4$ from the second pair and place them on different piles, for a difference of $3$.

Test case 3:  
One optimal solution is:
- From the first pair, place $10$ on pile 1.
- From the second pair, place $55$ on pile 2.
- From the third pair, place $80$ on pile 2.
- From the fourth pair, place $91$ on pile 1.  
The difference between the maximums of the piles is $|80 - 91| = 11$. This is the smallest possible difference.