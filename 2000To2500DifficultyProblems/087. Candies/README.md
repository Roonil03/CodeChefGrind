# Candies
## Rating: 2329
### Description:
Chef gave you an infinite number of candies to sell. There are $N$ customers, and the budget of the $i^{th}$ customer is $A_i$ rupees, where $1 \leq A_i \leq M$.

You have to choose a price $P$, to sell the candies, where $1 \leq P \leq M$.
The $i^{th}$ customer will buy exactly $\lfloor \frac{A_i}{P} \rfloor$ candies.
Chef informed you that, for each candy you sell, he will reward you with $C_P$ rupees, as a bonus. Find the $\textbf{maximum}$ amount of bonus you can get.

$\textbf{Note:}$

*   We are not interested in the profit from selling the candies (as it goes to Chef), but only the amount of bonus. Refer the samples and their explanations for better understanding.
*   $\lfloor x \rfloor$ denotes the largest integer which is not greater than $x$. For example, $\lfloor 2.75 \rfloor = 2$ and $\lfloor 4 \rfloor = 4$.

### Input Format

*   The first line of input will contain a single integer $T$, denoting the number of test cases.
*   Each test case consists of multiple lines of input.
    *   The first line of each test case contains two space-separated integers $N$ and $M$, the number of customers and the upper limit on budget/price.
    *   The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$, the budget of $i^{th}$ person.
    *   The third line contains $M$ integers - $C_1, C_2, \ldots, C_M$, the bonus you get per candy, if you set the price as $i$.

### Output Format

For each test case, output on a new line, the maximum amount of bonus you can get.

### Constraints

* $1 \le T \le 10^{4}$
* $1 \le N, M \le 10^{5}$
* $1 \le A_{i} \le M$
* $1 \le C_{j} \le 10^{6}$
* The elements of array $C$ are not necessarily non-decreasing.
* The sum of $N$ and $M$ over all test cases won't exceed $10^{5}$.

### Examples:
#### Example 1:
**Input:**
```
2
5 6
3 1 4 1 5
1 4 5 5 8 99
1 2
1
4 1
```
**Output:**
```
20
4
```
**Explaination:**  
Test case 1:  
- If we choose $P = 1$, the number of candies bought by each person is $\left[\frac{3}{1}, \frac{1}{1}, \frac{4}{1}, \frac{1}{1}, \frac{5}{1}\right]$. Thus, our bonus is $(3+1+4+1+5) \cdot 1 = 14$.
- If we choose $P = 2$, the number of candies bought by each person is $\left[\frac{1}{2}, \frac{0}{2}, \frac{2}{2}, \frac{0}{2}, \frac{2}{2}\right]$. Thus our bonus is $(1+0+2+0+2) \cdot 4 = 20$.
- If we choose $P = 3$, the number of candies bought by each person is $\left[\frac{1}{3}, \frac{0}{3}, \frac{1}{3}, \frac{0}{3}, \frac{1}{3}\right]$. Thus our bonus is $(1+0+1+0+1) \cdot 5 = 15$.
- If we choose $P = 4$, the number of candies bought by each person is $\left[\frac{0}{4}, \frac{0}{4}, \frac{1}{4}, \frac{0}{4}, \frac{1}{4}\right]$. Thus our bonus is $(0+0+1+0+1) \cdot 5 = 10$.
- If we choose $P = 5$, the number of candies bought by each person is $\left[\frac{0}{5}, \frac{0}{5}, \frac{0}{5}, \frac{0}{5}, \frac{1}{5}\right]$. Thus our bonus is $(0+0+0+0+1) \cdot 8 = 8$.
- If we choose $P = 6$, the number of candies bought by each person is $\left[\frac{0}{6}, \frac{0}{6}, \frac{0}{6}, \frac{0}{6}, \frac{0}{6}\right]$. Thus our bonus is $(0+0+0+0+0) \cdot 99 = 0$.

Thus, the answer is 20.

Test case 2:  
- If we choose $P = 1$, the number of candies bought by each person is $\left[\frac{1}{1}\right]$. Thus, our bonus is $1 \cdot 4 = 4$.
- If we choose $P = 2$, the number of candies bought by each person is $\left[\frac{0}{2}\right]$. Thus, our bonus is $0 \cdot 1 = 0$.

Thus, the answer is 4.