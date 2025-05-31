# K Increment Palindrome
## Rating: 2038
### Description:
Chef has an array A of size N and an integer K. He can perform the following operation on A any number of times: 
- Select any K distinct indices i<sub>1</sub>, i<sub>2</sub>,..., i<sub>k</sub> and increment the array elements at these K indices by 1.  Formally, set A<sub>i<sub>j</sub></sub> := A<sub>i<sub>j</sub></sub> + 1 for all 1 ≤ j ≤ K. 

For example, if A =` [3, 2, 8, 4, 6]` and we select the indices 2, 3, 5, then A becomes `[3, 2+1,8+ 1, 4, 6+1]` i.e. `[3, 3, 9, 4, 7]`. 

Determine if Chef can make the array A palindromic by applying the given operation any number of times. 

Note: An array is called palindrome if it reads the same backwards and forwards, for e.g. `[4, 10, 10, 4]` and `[7, 1, 7]` are palindromic arrays. 
### Input Format 
- The first line contains a single integer T - the number of test cases. Then the test cases follow. 
- The first line of each test case contains two integers N and K - the size of the array A and the parameter mentioned in the statement. 
- The second line of each test case contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> denoting the array A. 
### Output Format 
- For each test case, output `YES` if we can make A palindromic by applying the given operation. 
- Otherwise, output `No`.
- You may print each character of `YES` and `No` in uppercase or lowercase (for example, `yes`, `yEs`, `Yes` will be considered identical). 
### Constraints 
- 1 <= T <= 10<sup>5 </sup>
- 1 <= K <= N <= 10<sup>5 </sup>
- 1 <= A<sub>i</sub> <= 10<sup>6 </sup>
- Sum of N over all test cases does not exceed 2.10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
4
5 3
2 4 5 4 2
6 1
4 5 5 4 6 4
6 2
4 5 5 4 6 4
4 2
1 2 3 3
```
**Output:**
```
YES
YES
YES
NO
```
**Explaination:**  
Test case 1:  
The given array A is already palindromic. 

Test case 2:
We can apply the following operations: 
- Select index `[4]`: A becomes `[4, 5, 5, 5, 6, 4]` 
- Select index `[2]`: A becomes `[4, 6, 5, 5, 6, 4]` 

Test case 3:   
We can apply the following operations: 
- Select index `[2, 4]`: A becomes `[4, 6, 5, 5, 6, 4]` 

Test case 4:  
It can be proven that A can not be converted into a palindrome using the given operations.