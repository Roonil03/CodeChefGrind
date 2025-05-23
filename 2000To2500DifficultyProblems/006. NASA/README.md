# NASA
## Rating: 2014
### Description:
```
I'ma need space, I'ma, I'ma need 
You know I'm a star; space, I'ma need space 
I'ma need space, I'ma, I'ma need space (N-A-S-A) 
```
Given an array A of size N. 

Find total number of pairs in the array (i, j) (1 ≤ i ≤ j ≤ N) such that: 
- A<sub>i</sub> ⊕ A<sub>j</sub> is a palindrome (in decimal representation), where ⊕ denotes the bitwise XOR operator. 
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of multiple lines of input. 
- The first line of each test case contains one integer N - the size of the array. 
- The next line contains N space-seperated integers as array elements. 
### Output Format 
- For each test case, output on a new line, the number of pairs satisfying the given condition. 
### Constraints 
- 1 < T ≤ 10<sup>2 </sup>
- 1 ≤ N ≤ 10<sup>5 </sup>
- 0 ≤ A<sub>i</sub> < 2<sup>15 </sup>
- The sum of N over all test cases does not exceed 2.10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
2
4
13 27 12 26
3
2 2 2
```
**Output:**
```
8
6
```
**Explaination:**  
Test case 1:  
The pairs which form palindrome are : 
- 13 ⊕ 13 = 0 
- 13 ⊕ 27 = 22 
- 13 ⊕ 12 = 1 
- 27 ⊕ 27 = 0 
- 27 ⊕ 26 = 1 
- 12 ⊕ 12 = 0 
- 12 ⊕ 26 = 22 
- 26 ⊕ 26 = 0 

Test case 2:  
All the pairs form palindrome.