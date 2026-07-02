# AB Difference
## Rating: 347
### Description:
Chef is taking his baby steps into the world of programming. The very first program he's tasked to write is: 
"Given two integers $A$ and $B$, print $A + B$."

Unfortunately, Chef makes a typo: his program outputs $A \times B$ instead of $A + B$.  
Given the values of $A$ and $B$, find the **absolute difference** between the correct answer and the value his program prints.

### Input Format
The only line of input contains two space-separated integers, $A$ and $B$.

### Output Format
Print a single integer: the difference between the correct answer ($A + B$) and Chef's output ($A \times B$).

### Constraints
* $1 \leq A, B \leq 10$

### Examples:
#### Example 1:
**Input:**
```
4 7
```
**Output:**
```
17
```
**Explaination:**  
The correct answer is $4 + 7 = 11$, but Chef's program prints $4 \times 7 = 28$. The difference between them is $|28 - 11| = 17$.

#### Example 2:
**Input:**
```
1 6
```
**Output:**
```
1
```
**Explaination:**  
The correct answer is $1 + 6 = 7$, but Chef's program prints $1 \times 6 = 6$. The difference between these values is $|6 - 7| = 1$.