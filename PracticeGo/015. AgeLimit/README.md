# Age Limit
## Rating: 245
### Description:
Chef wants to appear in a competitive exam. To take the exam, he must meet the following requirements:
* Minimum age limit is $X$ (i.e., age must be **greater than or equal to** $X$).
* Age must be **strictly less than** $Y$.

Given Chef's current age $A$, determine whether he is currently eligible to take the exam.

### Input Format
* The first line contains an integer $T$, the number of test cases.
* Each test case consists of a single line of input containing three space-separated integers $X, Y,$ and $A$.

### Output Format
For each test case, output `YES` if Chef is eligible to take the exam, and `NO` otherwise.

The output is case-insensitive (e.g., `YES`, `yEs`, `yes`, and `yes` are all considered identical).

### Constraints
* $1 \leq T \leq 1000$
* $20 \leq X < Y \leq 40$
* $10 \leq A \leq 50$

### Examples:
**Input:**
```
5
21 34 30
25 31 31
22 29 25
20 40 15
28 29 28
```
**Output:**
```
YES
NO
YES
NO
YES
```
**Explaination:**  
* **Test case 1:** Age $A = 30$. Satisfies $30 \geq 21$ and $30 < 34$. Result: `YES` (Eligible).
* **Test case 2:** Age $A = 31$. Satisfies $31 \geq 25$, but fails $31 < 31$. Result: `NO` (Not eligible).
* **Test case 3:** Age $A = 25$. Satisfies $25 \geq 22$ and $25 < 29$. Result: `YES` (Eligible).
* **Test case 4:** Age $A = 15$. Fails $15 \geq 20$. Result: `NO` (Not eligible).