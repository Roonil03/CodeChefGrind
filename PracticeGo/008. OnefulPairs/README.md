# Oneful Pairs
## Rating: 374
### Description:
Chef defines a pair of positive integers $(a, b)$ to be a **Oneful Pair** if:

$$a + b + (a \cdot b) = 111$$

For example, $(1, 55)$ is a Oneful Pair, since $1 + 55 + (1 \cdot 55) = 56 + 55 = 111$.
But $(1, 56)$ is not a Oneful Pair, since $1 + 56 + (1 \cdot 56) = 57 + 56 = 113 \neq 111$.

Given two positive integers $a$ and $b$, output `Yes` if they are a Oneful Pair, and `No` otherwise.

### Input Format
The only line of input contains two space-separated integers $a$ and $b$.

### Output Format
Output `Yes` if $(a, b)$ form a Oneful Pair. Output `No` if they do not.

You may print each character of `Yes` and `No` in uppercase or lowercase (for example, `yes`, `yEs`, `Yes` will be considered identical).

### Constraints
* $1 \leq a, b \leq 1000$

### Examples:
#### Example 1:
**Input:**
```
1 55
```
**Output:**
```
Yes
```
**Explaination:**  
$(1, 55)$ is a Oneful Pair, since $1 + 55 + (1 \cdot 55) = 56 + 55 = 111$.

#### Example 2:
**Input:**
```
1 56
```
**Output:**
```
No
```
**Explaination:**  
$(1, 56)$ is not a Oneful Pair, since $1 + 56 + (1 \cdot 56) = 57 + 56 = 113 \neq 111$.