# Chandelier
## Rating: 2368
### Description:
A linear chandelier is held up by $N$ supports. The $i^{th}$ support initially holds up a weight $W_i$, and will collapse if the weight on it is more than or equal to $A_i$. Note that initially, $W_i < A_i$ for all $1 \le i \le N$.

Whenever $W_i \ge A_i$ for some support, the following happens:
* The $i^{th}$ support is destroyed;
* Let $x$ and $y$ be uniformly random non-negative integers such that $x + y = W_i$.
* Add $x$ to $W_{i-1}$ and add $y$ to $W_{i+1}$.

Note that:
* If either one of the neighbours do not exist, all the weight is added to the remaining neighbour.
* If both neighbours do not exist, the weight dissipates.

For all $1 < i < N$, find the minimum weight you need to add to $W_i$, so that there is a nonzero chance all supports end up destroyed.

### Input Format
* The first line of input contains a single integer $T$, denoting the number of test cases.
* The first line of each test case contains $N$, the number of supports.
* The second line of each test case contains $N$ integers $W_1, W_2, \dots, W_N$, denoting initial weight on each support.
* The third line of each test case contains $N$ integers $A_1, A_2, \dots, A_N$, denoting the minimum load at which a support destroys.

### Output Format

For each test, output $N$ space-separated integers. The $i^{th}$ of these should be the minimum weight you need to add to the $i^{th}$ chandelier, so that there is a nonzero chance that all supports end up destroyed.

### Constraints

* $1 \le T \le 10^{4}$
* $1 \le N \le 3 \cdot 10^{5}$
* $1 \le W_{i} < A_{i} \le 10^{9}$
* The sum of $N$ over all test cases does not exceed $3 \cdot 10^{5}$.

### Examples:
#### Example 1:
**Input:**
```
4
3
1 1 1
2 2 2
1
1
1000000000
2
1 1234
2 5678
7
122 179 269 184 250 104 455
398 203 318 340 312 489 464
```
**Output:**
```
1 1 1
999999999
4443 4444
276 146 49 156 291 385 9
```
**Explaination:**  
Test case 1:   
The following is possible if we add weight 1 to support 2:
* Support 2 collapses, since $W_2 = 2 \ge 2$. A weight $x=1$ gets added to $W_1$, and a weight $y=1$ gets added to $W_3$.
* Support 1 collapses, since $W_1 = 2 \ge 2$.
* Support 3 collapses, since $W_3 = 2 \ge 2$.

If we add zero weight, then nothing would happen and all supports would stay standing. So the answer for $i=2$ is 1.

Test case 2:  
We have to add 999999999 weight to the only support to make it collapse.

Test case 3:  
Note that we could add a weight of 1 to support 1 to make it collapse, but then, there would be no way to make the second support collapse. We can show that we have to add at least 4443 weight to support 1 to make it possible for both supports to end up destroyed.