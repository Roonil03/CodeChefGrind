# Maximum Factors Problem
## Rating : 2006
### Description:
You are given an integer N. Let K be a divisor of N of your choice such that K > 1, and let M = N / K. You need to find the smallest K such that 
M has as many divisors as possible.

**Note:** U is a divisor of V if V is divisible by U.

### Input Format
- The first line of the input contains an integer T- the number of test cases. The test cases then follow.
- The only line of each test case contains an integer N.

### Output Format
For each test case, output in a single line minimum value of K such that M has as many divisors as possible.

### Constraints:
- 1 <= T < 3000
- 2 <= N <= 10<sup>9</sup>

### Examples:
#### Example 1:
Input:
```
3
3
4
6
```
Output:
```
3
2
2
```
Explaination:
- Test case 1: The only possible value for K is 3, and that is the answer.
- Test case 2: There are two cases:
    - K=2. Then M = 4/2 = 2, which has 2 divisors (1 and 2).
    - K=4. Then M = 4/4 = 1, which has 1 divisor (1).

    Therefore the answer is 2.
- Test case 3: There are three cases: 
    - K = 2 Then M = 6/2 = 3 which has 2 divisors (1 and 3). 
    - K = 3 Then M = 6/3 = 2 which has 2 divisors (1 and 2). 
    - K = 6 Then M = 6/6 = 1 which has 1 divisor (1).

    Therefore the answer is 2.

