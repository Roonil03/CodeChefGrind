# Chefs Favourite Function
## Rating: 2316
### Description:
Chef's new friend herd gave him two functions f and g.
- The function f is defined over x(x >= 1) as:

$$f(x)=\begin{cases}0, & \text{if } x=1 \\ f\left(\frac{x}{2}\right)+1, & \text{if } x \text{ is even} \\ f\left(\left\lfloor\frac{x}{2}\right\rfloor\right), & \text{if } x \text{ is odd}\end{cases}$$

- The function g is defined over x(x >= 1) as:

$$g(x) = \begin{cases}
    1, & \text{if } x=1 \\
    2 \cdot g\left(\frac{x}{2}\right) + 1, & \text{if } x \text{ is even} \\
    2 \cdot g\left(\left\lfloor\frac{x}{2}\right\rfloor\right), & \text{if } x \text{ is odd}
\end{cases}$$

where `[z]`, denotes the greatest integer less than or equal to z.

He also gave Chef two integers L and R. Chef has to find the maximum value of f(x) + g(x) for L ≤ x <= R.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The only line of each test case contains two space-separated integers L and R, as mentioned in the statement

### Output Format
For each test case, output on a new line the maximum value of f(x) + g(x) for L ≤ x ≤ R.
### Constraints
- 1 ≤ T ≤ 10<sup>5</sup>
- 1 <= L <= R <= 10<sup>9</sup>

### Examples:
#### Example 1:
**Input:**
```
3
1 1
1 2
1 20
```
**Output:**
```
1
4
35
```
**Explaination:**  
Test case 1:  
f(1) = 0 and g(1) = 1 Hence, f(x) + g(x) = 1

Test case 2:  
There are 2 possible values of x.
- x = 1:f * (1) + g(1) = 1
- x = 2:f * (2) + g(2) = (f(1) + 1) + (2g(1) + 1) = 1 + 3 = 4  
Hence the maximum value of f(x) + g(x) = 4