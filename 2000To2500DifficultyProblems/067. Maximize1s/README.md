# Maximize 1s
## Rating: 2255
### Description:
You are given a binary string S. You are allowed to perform the following operation at most once:
- Pick some substring of S
- Flip all the values in this substring, i.e, convert 0 to 1 and vice versa

For example, if S = 1<b>00101</b>011 you can pick the underlined substring and flip it to obtain S 1<b>11010</b>011.

For the substring of S consisting of all the positions from L to R, we define a function `f(L, R)` to be the number of 1's in this substring. For example, if S = 100101011 then f(2, 5) = 1 and f(4, 9) = 4 (the respective substrings are 0010 and 101011).

If you perform the given operation optimally, find the maximum possible value of
$$
\sum_{L=1}^{N}\sum_{R=L}^{N} f(L, R)
$$
that can be obtained. Note that the substring flip operation can be performed at most once.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of single line of input, containing a binary string S.
### Output Format
For each test case, output on a new line the maximum possible value of ∑<sup>N</sup><sub>L=1</sub>∑<sup>N</sup><sun>R = L</sub> f(L,R) that can be obtained.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= |S| <= 3 * 10<sup>5</sup>
- The sum of |S| over all test cases won't exceed 3 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
111
000
00100
```
**Output:**
```
10
10
26
```
**Explaination:**  
Test case 1:  
There is no need to apply the operation since everything is already a 1. The answer is thus the sum of:
- `f(1, 1)` = 1
- `f(1, 2)` = 2
- `f(1, 3)` = 3
- `f(2, 2)` = 1
- `f(2, 3)` = 2
- `f(3, 3)` = 1  
which is 10.

Test case 2:  
Flip the entire string to obtain `111`, whose answer has been computed above.

Test case 3:  
Flip the entire string to obtain `11011`. The sum of `f(L, R)` across all substrings is now 26, which is the maximum possible.