# Max Shift After XOR
## Rating: 2444
### Description:
You are given an array $A$, consisting of $N$ integers.

Consider the following definitions:

* **Prefix xor array** of an array $A$ is defined as the array $B$ such that $B_i = A_1 \oplus A_2 \oplus \dots \oplus A_i$, where $\oplus$ denotes **bitwise XOR operation**. In other words, $B = [A_1, A_1 \oplus A_2, \dots, A_1 \oplus A_2 \oplus \dots \oplus A_N]$.
* The **value of an array** $A$ is the number of distinct values in array $B$. For example, for array $A = [1, 2, 3, 0]$, we have $B = [1, 3, 0, 0]$, The array $B$ has 3 distinct values, thus, the value of array $A$ is 3.
* **One right shift** on the array $A$ is a transformation that changes the array $A = [A_1, A_2, \dots, A_N]$ to $A' = [A_N, A_1, \dots, A_{N-1}]$.

Calculate the **maximum value** of the array $A$ you can get, by performing any (possibly zero) number of right shifts on the array $A$.

### Input Format

* The first line of input contains $T$ — the number of test cases you need to solve.
* The first line of each test case contains one integer $N$ — the size of the array.
* The second line of each test case contains $N$ space-separated integers $A_1, A_2, \dots, A_N$ — the elements of the array $A$.

### Output Format

For each test case, output on a new line the maximum value of an array $A$ you can achieve after performing any (possibly zero) number of right shifts on the array.

### Constraints

* $1 \le T \le 10^5$
* $2 \le N \le 2 \cdot 10^5$
* $0 \le A_i \le 2^{60} - 1$
* Sum of $N$ over all test cases doesn't exceed $2 \cdot 10^5$.

### Subtasks

* **Subtask 1 (20 points):**  
Sum of $N$ over all test cases doesn't exceed 2000.

* **Subtask 2 (80 points):**  
Original constraints.

### Examples:
#### Example 1:
**Input:**
```
3
2
0 0
6
1 1 1 2 2 2
4
1 2 2 8
```
**Output:**
```
1
4
4
```
**Explaination:**  
Test case 1:  
Perform zero right shifts on $A = [0, 0]$. Thus, $B = [0, 0 \oplus 0] = [0, 0]$. Thus, the *value* of array $A$ is 1.

Test case 2:  
Perform two right shifts on $A = [1, 1, 2, 2, 2]$. Thus, $A$ becomes $[2, 2, 1, 1, 2]$. The array $B = [2, 0, 1, 0, 3]$. Thus, the *value* of $A$ is 4. It can be shown that the value of $A$ cannot exceed 4.

Test case 3:  
Perform three right shifts on $A = [1, 2, 2, 8]$. Thus, $A$ becomes $[2, 2, 8, 1]$. The array $B = [2, 2 \oplus 2, 2 \oplus 2 \oplus 8, 2 \oplus 2 \oplus 8 \oplus 1] = [2, 0, 8, 9]$. Thus, the *value* of $A$ is 4. It can be shown that the value of $A$ cannot exceed 4.