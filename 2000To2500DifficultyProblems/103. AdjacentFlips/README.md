# Adjacent Flips
## Rating: 2426
### Description:
You are given a binary string $S$ of length $N$.

You can perform the following operation on it:

* Choose an index $i$ ($1 < i < N$) such that $S_i = S_{i+1}$, and flip both $S_i$ and $S_{i+1}$. Flipping $S_i$ means it becomes 1 if it was originally 0, and vice versa.

For example, if $S = 0101100$, performing the operation with $i = 4$ would result in $S = 0100000$ and performing it with $i = 6$ would result in $S = 0101111$.

By performing this operation several (possibly, zero) times, is it possible to make $S$ contain only a single type of character (that is, $S$ should contain either all zeros or all ones)?

## Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of two lines of input.
    * The first line of each test case contains a single integer $N$ — the length of $S$.
    * The second line of each test case contains a binary string $S$.

### Output Format

For each test case, output on a new line the answer: `Yes` if it is possible for $S$ to contain only zeros or only ones, and `No` otherwise.

Each letter of the output may be printed in either uppercase or lowercase, i.e., the strings `NO`, `No`, and `no` will all be treated as equivalent.

### Constraints

* $1 \le T \le 10^5$
* $1 \le N \le 2 \cdot 10^5$
* $S$ is a binary string, i.e., contains only the characters `0` and `1`.
* The sum of $N$ across all tests won't exceed $2 \cdot 10^5$.

### Examples:
#### Example 1:
**Input:**
```
4
6
110110
7
0101010
6
101001
5
00000
```
**Output:**
```
Yes
No
No
Yes
```
**Explaination:**  
Test case 1:  
Perform moves as follows:  
$110110 \rightarrow 110000 \rightarrow 110011 \rightarrow 111111$.  
$S$ contains all ones now, as required.  
It would also be acceptable to perform $110110 \rightarrow 110000 \rightarrow 000000$ and reach a state of all zeros.  

Test case 2:  
It's not possible to make a move at all, so the answer is `No`.

Test case 3:  
It can be shown that no matter what, it's not possible to reach a state where all the characters are 0 or all of them are 1.  

Test case 4:  
The string already contains all zeros, no moves are necessary.  