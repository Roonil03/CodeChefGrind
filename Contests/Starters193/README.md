# Starters 193
## Contest Division: Division 2
## Position:
## Questions:
## Count Odd Even Divisors
### Description:
You have an integer N, and you want to calculate the number of odd divisors of N, and the number of even divisors of N.  
For example, 2 has 1 odd divisor (which is 1), and 1 even divisor (which is 2). 8 has 1 odd divisor (which is 1) and 3 even divisors (which are 2, 4, 8).
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The first and only line of input contains a single integer N.
### Output Format
- For each test case, output on a new line 2 integers - first, the number of odd divisors of N, and second, the number of even divisors of N.
### Constraints
- 1 < T < 100
- 1 ≤ N ≤ 100

### Examples:
#### Example 1:
**Input:**
```
5
1
2
3
4
8
```
**Output:**
```
1 0
1 1
2 0
1 2
1 3
```
**Explaination:**  
Test Case 1:  
1 has only 1 divisor, which is odd.

Test Case 2:  
Explained in statement.

## Check Odd Even Divisors
### Description:
You are given integers A and B. You want to check if there exists some positive integer N such that it has exactly A odd divisors and exactly B even divisors.  
For example, 2 has 1 odd divisor (which is 1), and 1 even divisor (which is 2). 8 has 1 odd divisor (which is 1) and 3 even divisors (which are 2, 4, 8).  
Is it possible? You only need to print Yes or No based on whether there exists some integer N, you do not need to print the value of N.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The first and only line of input contains 2 integers A and B.
### Output Format
For each test case, output on a new line Yes if there exists a valid integer N and No otherwise.

It is allowed to print each character in either case, i.e. YES, yes, yES will all be accepted as a positive response.
### Constraints
- 1 < T ≤ 10<sup>4</sup>
- 0 ≤ A, B ≤ 10<sup>9</sup>

### Examples:
#### Example 1:
**Input:**
```
5
1 0
0 1
1 1
1 3
3 2
```
**Output:**
```
Yes
No
Yes
Yes
No
```
**Explaination:**  
Test Case 1:  
N = 1 satisfies the conditions.

Test Case 2:  
All positive integers are divisible by 1 and hence have at least 1 odd divisor.

Test Case 3:  
N = 2

Test Case 4:  
N = 8

## Add Permutation
### Description:
Given a (1-indexed) permutation P of the integers in the range `[1,N]`, you will first construct an array A also of size N where A<sub>i</sub> = P<sub>i</sub> + i. Now, let f(P) as the number of distinct elements in the array A.   
For example, for P = `[3, 4, 1, 2]` the constructed array A is `[4, 6, 4, 6]` and thus `f(P)` = 2.

Given integers N and K, find a permutation P of the integers in the range `[1,N]` with `f(P)` = K. It can be proven that an answer always exists under the given constraints.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The first and only line of each test case contains 2 integers - N and K.
### Output Format
For each test case, output on a new line N integers - P<sub>1</sub>, P<sub>2</sub>, ..., P<sub>N</sub>, a permutation of integers in `[1, N]` satisfying `f(P)` = K.  
If multiple answers are possible, all will be accepted.
### Constraints
- 1 <= T <= 100
- 1 <= K <= N <= 100

### Examples:
#### Example 1:
**Input:**
```
5
1 1
2 1
2 2
4 2
6 3
```
**Output:**
```
1
2 1
1 2
3 4 1 2
6 3 4 5 2 1
```
**Explaination:**  
Test Case 1:  
For P = `[1]`, A = `[2]` which has only one element.

Test Case 2:  
For P = `[2, 1]`, A = `[3, 3]` which has only one distinct element, i.e. 3.

Test Case 3:  
For P = `[1, 2]`, A = `[2, 4]` which has 2 distinct elements, i.e. 2 and 4.

Test Case 4:  
Explained in problem statement.


### <a href="https://www.codechef.com/START193B">Other unattempted questions can be viewed here!</a>