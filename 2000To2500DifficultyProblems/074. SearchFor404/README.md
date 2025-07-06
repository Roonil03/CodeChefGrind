# Search for 404
## Rating: 2296
### Description:
Om has a string S consisting of characters `*`, `4`, and `0` only.
- The character * can be replaced by either 4 or 0.

Om wants to count the total number of subsequences of 404 present in all the possible strings generated after replacing `*`.  
As the number can be huge, you must output the number modulo 10<sup>9</sup> + 7.

For example, if the given string is S = `4 * 4*`, the possible strings after replacing `*` are:
- 4040: Only one subsequence of 404 is present, that is S<sub>1</sub>S<sub>2</sub>S<sub>3</sub>.
- 4044: Two subsequences of 404 are present, that are S<sub>1</sub>S<sub>2</sub>S<sub>3</sub> and S<sub>1</sub>S<sub>2</sub>S<sub>4</sub>.
- 4440: No subsequence of 404 is present.
- 4444: No subsequence of 404 is present.

Thus, total number of 404 subsequences present in all possible generated strings is 3.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of multiple lines of input.
    - The first line of each test case contains an integer N - size of the given string.
    - The second line has a string S of size N.

### Output Format
For each test case, output the total number of subsequences of 404 present in all the possible strings generated after replacing `*`.
As the number can be huge, you must output the number modulo 10<sup>9</sup> + 7
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N <= 10<sup>5</sup>
- S consists of `*`,`4`, and `0` only.
- The sum of N over all test cases won't exceed 10<sup>6</sup>.

### Examples:
#### Example 1:
**Input:**
```
2
4
4*04
4
4*4*
```
**Output:**
```
4
3
```
**Explaination:**  
Test case 1:  
All possible generated strings of `4 * 04` are:
- `4004`: Two subsequences of 404 are present, that are S<sub>1</sub>S<sub>2</sub>S<sub>4</sub> and S<sub>1</sub>S<sub>3</sub>S<sub>4</sub>.
- `4404`: Two subsequences of 404 are present, that are S₁S<sub>3</sub>S<sub>4</sub> and S<sub>2</sub>S<sub>3</sub>S<sub>4</sub>.  
Thus, the total number of 404 subsequences present in all possible generated strings is 4.

Test case 2:   
Already explained in problem statement.