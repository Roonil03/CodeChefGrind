# Partition It
## Rating: 2202
### Description:
Chef has the N numbers 1, 2, 3, ..., N. He wants to give exactly K of these numbers to his friend and keep the rest with him.

He can choose any K numbers such that the GCD of any number from Chef's set and any number from his friend's set is equal to 1.

Formally, suppose Chef gives the set of numbers A to his friend and keeps B with himself (where |A| = K and |B| = N - K). Then A and B must satisfy:  
gcd(a, b) = 1 V a ∈ A, b ∈ B

Chef needs your help in choosing these K numbers. Please find any valid set of K numbers that will satisfy the condition, or tell him that no such set exists.

### Input Format
- The first line of input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first and only line of each test case contains two space-separated integers N and K.

### Output Format
For each test case first output a single line containing "`YES`" (without quotes) if a set of size K satisfying Chef's condition exists; and "`NO`" if no such set exists. This line is not case-sensitive so "`Yes`", "`no`", etc. are also acceptable.

Next, if the answer is "YES", print another line containing K distinct space-separated integers from 1 to N denoting the numbers which Chef will give to his friend. The integers can be printed in any order.

If there are multiple solutions, you may print any of them.
### Constraints
- 1 <= T <= 10<sup>4</sup>
- 2 <= N <= 10<sup>5</sup>
- 1 <= K <= N - 1
- Sum of N over all test cases does not exceed 5 * 10<sup>5</sup>

### Examples:
#### Example 1:
**Input:**
```
3
4 1
4 2
6 3
```
**Output:**
```
Yes
3
Yes
4 2
No
```
**Explaination:**  
Test case 1:  
Chef can give `[3]` to his friend and keep `[1, 2, 4]` for himself. 3 is coprime with 1, 2 and 4 so the condition is satisfied. Another possible solution is Chef giving `[1]` to his friend.

Test case 2:  
Chef can give `[2, 4]` and keep `[1, 3]` (or vice versa). It can be seen that `gcd(2, 1)` = 1, `gcd(2, 3)` = 1, `gcd(4, 1)` = 1, `gcd(4,3)` = 1 and so the condition is satisfied.

Test case 3:  
There is no set of 3 numbers that can satisfy the given condition.