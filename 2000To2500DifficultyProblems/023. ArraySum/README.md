# Array Sum
## Rating: 2077
### Description:
You are given an even integer N and an integer K. 
Generate an array A of size N such that: 
- 1 <= Ai <= 10<sup>5</sup> for all 1 <= i <= N; 
- The number of odd elements in the array is same as the number of even elements. 
- The sum of all elements of the array is K. 

If multiple such arrays exist, print any. If no such array exists, print -1 instead. 
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of two space-separated integers N and K - the size of the array and the required sum. 
### Output Format 
For each test case, output on a new line, N space-separated integers, denoting the array A satisfying the given conditions. 
If multiple such arrays exist, print any. If no such array exists, print -1 instead. 
### Constraints 
- 1 <= T <= 1000 
- 2 ≤ N ≤ 10<sup>5</sup>, N is even 
- 1 <= K <= 10<sup>9</sup> 
- The sum of N over all test cases won't exceed 10<sup>6</sup>.

### Examples:
#### Example 1:
**Inpu:**
```
3
2 5
4 1
4 20
```
**Output:**
```
4 1
-1
3 4 5 8
```
**Explaination:**  
Test case 1: 
Consider the array A = `[4, 1]` It contains 1 even as well as 1 odd element. Also, the sum of elements of the array is 4+1 = 5. 

Test case 2:
It can be proven that there exists no array which satisfies the given conditions. 

Test case 3:
Consider the array A = `[3, 4, 5, 8]` It contains 2 even as well as 2 odd elements. Also, the sum of elements of the array is 3 + 4 + 5 + 8 = 20

