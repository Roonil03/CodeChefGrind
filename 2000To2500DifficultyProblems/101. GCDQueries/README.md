# GCD Queries
## Rating: 2422
### Description:
You are given an array $A$ consisting of $N$ integers along with $Q$ queries.

For each query:

* **$X$**: Given an integer $X$, print and **remove** the minimum element in the array $k$, such that $\gcd(X, k) > 1$, where $\gcd$ denotes the greatest common divisor.
If no value present in the array satisfies the condition, print and remove the minimum element of the array.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line of each test case consists of a single integer $N$ — the number of elements in the array.
    * The second line of each test case contains $N$ space-separated integers $A_1, A_2, \dots, A_N$ — the elements of the array $A$.
    * The third line contains one integer $Q$, denoting the number of queries.
    * The next line contains $Q$ space-separated integers, where the $i^{th}$ integer is $X_i$, denoting the $i^{th}$ query.

### Output Format

For each test case, print $Q$ space-separated integers denoting the answer to each query.

### Constraints

* $1 \le T \le 10^5$
* $1 \le Q \le N \le 2 \cdot 10^5$
* $1 \le A_i, X_i \le 10^6$
* The sum of $N$ over all test cases won't exceed $2 \cdot 10^5$.
* The sum of $Q$ over all test cases won't exceed $2 \cdot 10^5$.

### Examples:
#### Example 1:
**Input:**
```
1
5
2 9 3 15 10
4
2 2 3 7
```
**Output:**
```
2 10 3 9
```
**Explaination:**  
Test case 1:  
The given array is $[2, 9, 3, 15, 10]$ and there are 4 queries:
* Query 1: Given $X = 2$. The elements $2$ and $10$ satisfy the condition. Since $2$ is smaller, we print and remove $2$ from array. The array becomes $A = [9, 3, 15, 10]$.
* Query 2: Given $X = 2$. The element $10$ satisfies the condition. We print and remove $10$ from array. The array becomes $A = [9, 3, 15]$.
* Query 3: Given $X = 3$. The elements $3$ and $9$ satisfy the condition. Since $3$ is smaller, we print and remove $3$ from array. The array becomes $A = [9, 15]$.
* Query 4: Given $X = 7$. No element satisfies the condition, so we have to select $9$ since it is the smallest element present. We print and remove $9$ from array. The array becomes $A = [15]$.