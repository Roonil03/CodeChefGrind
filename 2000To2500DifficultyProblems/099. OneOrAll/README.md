# One or All
## Rating: 2420
### Description:
Chef and Chefina are playing a game. There are $N$ piles where $i$-th pile contains $A_i$ stones.

The players take alternate turns with **Chef starting the game**. In his/her turn, a player can make one of the following type of move:

* **Type 1:** Choose any non-empty pile and remove 1 stone from that pile.
* **Type 2:** Remove 1 stone each from all the $N$ piles. This move can be done only if all the $N$ piles contain at least 1 stone.

The player who cannot make a move loses the game.

Determine the winner of the game if both players play optimally.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line of each test case contains a single integer $N$ denoting the number of piles.
    * The next line contains $N$ space-separated integers $A_1, A_2, A_3, \dots, A_N$ denoting the number of stones in each pile initially.
### Output Format

For each test case, output `CHEF` if Chef wins the game, `CHEFINA` otherwise.

You may print each character in uppercase or lowercase. For example, the strings `CHEF`, `Chef`, `chef`, and `cHeF` are all considered the same.

### Constraints

* $1 \le T \le 5000$
* $1 \le N \le 10^5$
* $1 \le A_i \le 10^9$
* The sum of $N$ over all test cases won't exceed $5 \cdot 10^5$.

### Examples:
#### Example 1:
**Input:**
```
3
4
1 1 1 1
3
1 2 3
1
15
```
**Output:**
```
CHEF
CHEFINA
CHEF
```
**Explaination:**  
Test case 1:  
Chef can make a move of type 2 and remove 1 stone each from all the piles. Thus, Chefina has no valid move to make and she loses.

Test case 2:  
Consider the following sequence of moves:
* Chef removes 1 stone each from all piles. Thus the remaining stones are $[0, 1, 2]$.
* Chefina removes 1 stone from pile 2. Thus the remaining stones are $[0, 0, 2]$.
* Chef removes 1 stone from pile 3. Thus the remaining stones are $[0, 0, 1]$.
* Chefina removes 1 stone from pile 3. Thus the remaining stones are $[0, 0, 0]$.

Thus, Chef has no valid move to make and he loses.