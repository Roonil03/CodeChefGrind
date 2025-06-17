# Maximising Vacations
## Rating: 2147
### Description:
You are given Chef's calendar for the next N days, defined as a binary string S of length N where S<sub>i</sub> = 0 means that Chef has a holiday on the ith day from now, and S<sub>i</sub> = 1 means that Chef has to work on that day.  
Chef wants to plan his vacations. For each vacation, Chef needs X consecutive holidays in his calendar. Obviously, he can only go on one vacation at a time.  
Chef can take at most one extra holiday. That is, he can flip at most one digit in S from 1 to 0. If he does this optimally, what is the maximum number of vacations that he can go on?  
### Input Format
- The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains two space-separated integers N and X.
- The second line of each test case contains a binary string S of length N - Chef's schedule.
### Output Format
For each test case, output on a new line the answer the maximum number of vacations Chef can take if he takes at most one more extra holiday.
### Constraints
- 1 <= T <= 1000
- 1 <= N <= 2 * 10<sup>5</sup>
- 1 <= X <= N
- The sum of N across all test cases does not exceed 2 . 10<sup>5</sup>

### Examples:
#### Example 1:
**Input:**
```
3
7 2
0010001
4 3
1010
5 2
00100
```
**Output:**
```
3
1
2
```
**Explaination:**  
Test Case 1:  
Chef can flip the 3rd digit to make his calendar `0000001`. This allows him to take 3 vacations in the first 6 days.

Test Case 2:  
Chef can flip the 3rd digit to make his calendar `1000`. This allows him to take one vacation using the last 3 days.

Test Case 3:  
Regardless of whether Chef flips the 3rd digit or not, he can take at most 2 vacations.