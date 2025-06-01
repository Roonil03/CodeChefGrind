# No Palindrome
## Rating: 2054
### Description:
Given positive integers N and K, let S denote the smallest number of N digits (with no leading zeros) such that: 
- No substring of S having length strictly greater than K is a palindrome. 

Find the sum of digits of S. 

*Note:*
- A substring of a number is obtained by deleting some (possibly zero) digits from the beginning of the number and some (possibly zero) digits from the end of the number. For example, some substrings of the number `3010` are `3010`, `301`, `010`, `01`, `10` and `0`. 

- Leading zeros are considered in a substring. In the above example, 010 and 01 are valid substrings. 
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of two space-separated integers N and K as mentioned in the statement. 
### Output Format 
For each test case, output on a new line, the sum of digits of the smallest number of N digits satisfying the given condition.
### Constraints:
- 1 <= T <= 5000 
- 1 <= K < N <= 10<sup>9</sup>

### Examples:
#### Example 1:
**Input:**
```
2
2 1
3 2
```
**Output:**
```
1
1
```
**Explaination:**  
Test case 1:  
The smallest number of 2 digits satisfying the condition is 10. Here no substring of length greater than 1 is a palindrome.

Test case 2:  
The smallest number of 3 digits satisfying the condition is 100. The sum of its digits is 1