# Minimize swaps
## Rating: 2164
### Description:
You are given a binary string S.  
In one operation, you can pick an index i (1 < i < |S|) and swap the characters S<sub>i</sub> and S<sub>(i+1)</sub>.

Find the minimum number of operations required, such that, the decimal representation of the final binary string is divisible by 3. If it is impossible to do so, print -1 instead.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of single line of input, containing a binary string S.
### Output Format
For each test case, output on a new line, the minimum number of operations required, such that, the decimal representation of the final binary string is divisible by 3. If it is impossible to do so, print -1 instead.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 ≤ |S| ≤ 3 . 10<sup>5</sup>
- S consists of 0 and 1 only.
- The sum of S over all test cases won't exceed 3 . 10<sup>5.</sup>

### Examples:
#### Example 1:
**Input:**
```
3
0000
111
11001
```
**Output:**
```
0
-1
1
```
**Explaination:**  
Test case 1:  
There is no need to apply any operation since the decimal representation of `0000` is 0 which is divisible by 3.

Test case 2:  
It can be shown that we cannot make the decimal representation of the string divisible by 3 using any number of operations.

Test case 3:  
The decimal representation of 11001 is 25. Using one operation, we pick i = 2 and swap S2 and S3. Thus, the string becomes 10101, whose decimal representation is 21, which is divisible by 3