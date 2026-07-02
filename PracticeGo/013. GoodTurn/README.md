# Good Turn
## Rating: 238
### Description:
Chef and Chefina are playing with dice. In one turn, both of them roll their dice at once. A turn is considered **good** if the sum of the numbers on their dice is greater than 6.

Given that in a particular turn Chef and Chefina rolled $X$ and $Y$ on their respective dice, determine whether the turn was good.

### Input Format
* The first line of input contains a single integer $T$, denoting the number of test cases.
* Each test case contains two space-separated integers $X$ and $Y$ — the numbers Chef and Chefina got on their respective dice.

### Output Format
For each test case, output on a new line `YES` if the turn was good and `NO` otherwise.

Each character of the output may be printed in either uppercase or lowercase (e.g., `NO`, `no`, `nO`, and `No` will be treated as equivalent).

### Constraints
* $1 \leq T \leq 100$
* $1 \leq X, Y \leq 6$

### Examples:
#### Example 1:
**Input:**
```
4
1 4
3 4
4 2
2 6
```
**Output:**
```
NO
YES
NO
YES
```
**Explaination:**  
* **Test case 1:** $1 + 4 = 5$ (sum is smaller than 6). The turn is **not good**.
* **Test case 2:** $3 + 4 = 7$ (sum is greater than 6). The turn is **good**.
* **Test case 3:** $4 + 2 = 6$ (sum is equal to 6). The turn is **not good**.
* **Test case 4:** $2 + 6 = 8$ (sum is greater than 6). The turn is **good**.