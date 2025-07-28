# Balanced Suffix
## Rating: 2447
### Description:
You're given a string $S$ of length $N$ and an integer $K$.

Let $C'$ denote the set of all characters in $S$. The string $S$ is called **good** if, for every suffix of $S$:

* The difference between the frequencies of any two characters in $C'$ does not exceed $K$.
* In particular, if the set $C'$ has a single element, the string $S$ is good.

Find whether there exists a rearrangement of $S$ which is good. If multiple such rearrangements exist, print the **lexicographically smallest** rearrangement. If no such rearrangement exists, print $-1$ instead.

Note that a suffix of a string is obtained by deleting some (possibly zero) characters from the beginning of the string. For example, the suffixes of $S = \text{`abca`}$ are $\{\text{`a`}, \text{`ca`}, \text{`bca`}, \text{`abca`}\}$.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains two space-separated integers $N$ and $K$ — the length of the string and the positive integer as mentioned in the statement, respectively.
    * The next line consists of a string $S$ of length $N$ containing lowercase English alphabets only.

### Output Format

For each test case, output on a new line the lexicographically smallest *good* rearrangement of $S$.

If no such rearrangement exists, print $-1$ instead.

### Constraints

* $1 \le T \le 2000$
* $1 \le N \le 10^5$
* $1 \le K \le N$
* $S$ consists of lowercase english alphabets only.
* The sum of $N$ over all test cases won't exceed $2 \cdot 10^5$.

### Examples:
#### Example 1:
**Input:**
```
4
3 1
aaa
4 2
baba
4 1
babb
7 2
abcbcac
```
**Output:**
```
aaa
aabb
-1
abcabcc
```
**Explaination:**  
Test case 1:  
Since $C = \{a\}$, the string $S$ is good.

Test case 2:  
The set $C = \{a, b\}$. Consider the rearrangement `aabb`. Let $f_a$ and $f_b$ denote the frequencies of $a$ and $b$ respectively:
* In suffix `b`, $f_b = 1$ and $f_a = 0$. Thus, $|f_b - f_a| = 1 \le K$.
* In suffix `bb`, $f_b = 2$ and $f_a = 0$. Thus, $|f_b - f_a| = 2 \le K$.
* In suffix `abb`, $f_b = 2$ and $f_a = 1$. Thus, $|f_b - f_a| = 1 \le K$.
* In suffix `aabb`, $f_b = 2$ and $f_a = 2$. Thus, $|f_b - f_a| = 0 \le K$.

Thus, the rearrangement `aabb` is good. It is also the lexicographically smallest rearrangement possible of string $S$.

Test case 3:  
It can be proven that there exists no rearrangement of $S$ which is good.

Test case 4:  
The set $C = \{a, b, c\}$. Consider the rearrangement `abcabcc`. Let $f_a$, $f_b$, and $f_c$ denote the frequencies of $a, b,$ and $c$ respectively:
* In suffix `c`, $f_a = 0, f_b = 0$, and $f_c = 1$. Thus, $|f_b - f_a|$, $|f_c - f_b|$, and $|f_a - f_c|$ are all less than or equal to $K = 2$.
* In suffix `cc`, $f_a = 0, f_b = 0$, and $f_c = 2$. Thus, $|f_b - f_a|$, $|f_c - f_b|$, and $|f_a - f_c|$ are all less than or equal to $K = 2$.
* In suffix `bcc`, $f_a = 0, f_b = 1$, and $f_c = 2$. Thus, $|f_b - f_a|$, $|f_c - f_b|$, and $|f_a - f_c|$ are all less than or equal to $K = 2$.
* In suffix `abcc`, $f_a = 1, f_b = 1$, and $f_c = 2$. Thus, $|f_b - f_a|$, $|f_c - f_b|$, and $|f_a - f_c|$ are all less than or equal to $K = 2$.
* In suffix `cabcc`, $f_a = 1, f_b = 1$, and $f_c = 3$. Thus, $|f_b - f_a|$, $|f_c - f_b|$, and $|f_a - f_c|$ are all less than or equal to $K = 2$.
* In suffix `bcabcc`, $f_a = 1, f_b = 2$, and $f_c = 3$. Thus, $|f_b - f_a|$, $|f_c - f_b|$, and $|f_a - f_c|$ are all less than or equal to $K = 2$.
* In suffix `abcabcc`, $f_a = 2, f_b = 2$, and $f_c = 3$. Thus, $|f_b - f_a|$, $|f_c - f_b|$, and $|f_a - f_c|$ are all less than or equal to $K = 2$.

Thus, the rearrangement `abcabcc` is good. It is also the lexicographically smallest *good* rearrangement of string $S$.