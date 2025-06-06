# Prime Factor Division
## Rating: 2016
### Description:
```
Mario has reached Bowser's Castle and is inches away from rescuing Princess Peach. He has to answer the following problem at the gate to be allowed to enter. Can you help him? 
```
Let `S(M)` denote the set of all prime factors of M.  
Given two positive integers A and B, determine whether A is divisible by all elements in `S(B)`. 
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of a single line of input, A and B, as mentioned in the statement. 
### Output Format 
For each test case, print `YES` if A is divisible by all elements in S(B) and no otherwise.  
You may print each character of the string in uppercase or lowercase (for example, the strings `YES`, `yEs`, `yes`, and `yeS` will all be treated as identical). 
### Constraints 
- 1 < T≤ 10<sup>5 </sup>
- 1 ≤ A, B ≤ 10<sup>18</sup>

### Examples:
#### Example 1:
**Input:**
```
3
21 63
72 72
25 20
```
**Output:**
```
YES
YES
NO
```
**Explaination:**  
Test case 1:  
The set of all prime factors of B = 63 is given by S(B) = {3, 7} Also, A = 21 is divisible by all elements in S(B).

Test case 2:  
The set of all prime factors of B = 72 is given by S(B) = {2, 3} Also, A = 72 is divisible by all elements in S(B).

Test case 3:  
The set of all prime factors of B = 20 is given by S(B) = {2, 5} Here, A = 25 is not divisible by 2 in S(B).