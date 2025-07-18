# Connect All Cities
## Rating: 2417
### Description:
The country of Berland initially has $N$ isolated cities, the $i$-th city has a significance of $A_i$. The President of Berland wants to connect all the cities. He can construct a bidirectional road of length $L$ ($L > 0$) from city $X$ to city $Y$ if $(A_X \& A_Y) = L$, where `&` represents the **bitwise AND** operator.

What is the minimum total length of roads he has to construct, in order to connect all the cities in Berland? Print -1 if it is impossible.

**Note:** City $X$ and City $Y$ are said to be connected if there exists a sequence of cities $C_1, C_2, \dots, C_K$ ($K \ge 1$) such that $C_1 = X$, $C_K = Y$, and there exists a road from $C_i$ to $C_{i+1}$, ($1 \le i < K$). All the cities in Berland are said to be connected when every pair of cities in Berland are connected.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains $N$ — the number of cities.
    * The second line contains $N$ space-separated integers $A_1, A_2, \dots, A_N$ — the significance of each of the $N$ cities.

### Output Format

For each test case, output on a new line the minimum total length of roads to connect all the cities in Berland, or -1 if it is impossible.

### Constraints

* $1 \le T \le 10^5$
* $1 \le N \le 10^5$
* $0 \le A_i \le 10^9$
* The sum of $N$ over all test cases won't exceed $3 \cdot 10^5$.

### Examples:
#### Example 1:
**Input:**
```
2
4
4 4 4 4
3
2 4 6
```
**Output:**
```
12
6
```
**Explaination:**  
Test case 1:  
The following roads with minimum total length can be constructed to connect Berland:
* A road with $L = 4$ between city 1 and city 2, since $(A_1 \& A_2) = 4$.
* A road with $L = 4$ between city 2 and city 3, since $(A_2 \& A_3) = 4$.
* A road with $L = 4$ between city 3 and city 4, since $(A_3 \& A_4) = 4$.

Test case 2:  
The following roads with minimum total length can be constructed to connect Berland:
* A road with $L = 2$ between city 1 and city 3, since $(A_1 \& A_3) = 2$.
* A road with $L = 4$ between city 2 and city 3, since $(A_2 \& A_3) = 4$.