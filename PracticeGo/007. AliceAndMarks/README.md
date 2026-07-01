# Alice and Marks
## Rating: 362
### Description:
Alice has scored $X$ marks in her test and Bob has scored $Y$ marks in the same test. Alice is happy if she scored at least twice the marks of Bob's score. Determine whether she is happy or not.

### Input Format
* The first and only line of input contains two space-separated integers $X$ and $Y$ — the marks of Alice and Bob respectively.

### Output Format
For each test case, print `Yes` if Alice is happy and `No` if she is not, according to the problem statement.

The judge is case-insensitive, so you may output the answer in any case. In particular, `YES`, `yes`, and `yEs` are all considered equivalent to `Yes`.

### Constraints
* $1 \leq X, Y \leq 100$

### Examples:
#### Example 1:
**Input:**
```
2 1
```
**Output:**
```
Yes
```
**Explaination:**  
Alice has scored $X = 2$ marks, whereas Bob has scored $Y = 1$ mark. As Alice has scored twice as much as Bob (i.e., $X \geq 2Y$), the answer is `Yes`.

#### Example 2:
**Input:**
```
1 2
```
**Output:**
```
No
```
**Explaination:**  
Alice has scored $X = 1$ mark, whereas Bob has scored $Y = 2$ marks. As Alice has not scored twice as much as Bob (i.e., $X < 2Y$), the answer is `No`.