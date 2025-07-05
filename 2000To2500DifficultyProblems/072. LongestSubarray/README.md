# Longest Subarray
## Rating: 2267
### Description:
You are given an array A of length N.  
Find the maximum length of any subarray of A, such that, the bitwise OR of all the elements of the subarray is equal to the bitwise OR of the remaining elements of the array.

Report -1 if no such subarray exists.

*Note:*  
- A subarray is formed by deleting some (possibly zero) elements from the beginning of the array and some (possibly zero) elements from the end of the array.
- The bitwise OR of an empty array is considered to be 0.
### Input Format
- The first line of input contains a single integer T, denoting the number of test cases.
- Each test case consists of two lines of input.
    - The first line of each test case contains an integer N- the length of the array A.
    - The second line of each test case contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> representing the array A.

### Output Format
For each test case, output on a new line, the length of longest subarray such that the bitwise OR of all elements of the subarray is equal to the bitwise OR of the remaining elements of the array, or output -1 if no such subarray exists.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N <= 5 * 10<sup>5</sup>
- 1 <= A<sub>i</sub> < 2<sup>30</sup>
- The sum of N over all test cases won't exceed 5 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
3
1 2 4
3
1 3 2
4
2 3 4 7
```
**Output:**
```
-1
1
3
```
**Explaination:**  
Test case 1:  
For no subarray of A, the bitwise OR of the elements of the subarray equals the bitwise OR of the remaining elements.

Test case 2:  
Consider the subarray `[3]` having length 1. The bitwise OR of the subarray is 3 and the bitwise OR of the remaining elements of the array is 1/2 = 3. Thus, the bitwise OR of all elements of the subarray is equal to the bitwise OR of the remaining elements of the array.

Test case 3:  
Consider the subarray `[2, 3, 4]` having length 3. The bitwise OR of the subarray is 2/3/4 = 7 and the bitwise OR of the remaining elements of the array is 7. Thus, the bitwise OR of all elements of the subarray is equal to the bitwise OR of the remaining elements of the array.