# Interesting Array
## Rating: 2145
### Description:
An array is called interesting if no subarray of length greater than 2 is non-increasing or non-decreasing.

Chef has an array A of length N. He wants to make the array interesting by rearranging the elements in any order.

If there exist multiple such arrays, output any one.  
If no such array exists, print -1 instead.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of two lines of input.
    - The first line of each test case contains an integer N denoting the length of array A.
    - The next line contains N space separated integers, A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>
### Output Format
For each test case, output on a single line, any possible interesting array. If no such array is possible, output -1.
### Constraints
- 1 <= T <= 100
- 1 ≤ N ≤ 10<sup>5</sup>
- 1 < A<sub>i</sub> ≤ 10<sup>9</sup>
- The sum of N over all test cases won't exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
3
2 2 2
4
2 6 5 2
5
5 5 2 4 2
```
**Output:**
```
-1
6 2 5 2
5 2 4 2 5
```
**Explaination:**
Test case 1:  
There is no way of arranging the elements such that no subarray of length greater than 2 is non-increasing or non-decreasing.

Test case 2:  
A possible rearrangement of the elements is `[6, 2, 5, 2]`. Note that the subarrays of length greater than 2 are `{[6, 2, 5], [2, 5, 2], [6, 2, 5, 2]}`. None of these subarrays are non-increasing or non-decreasing.

Test case 3:  
A possible rearrangement of the elements is `[5, 2, 4, 2, 5]`. Note that the subarrays of length greater than 2 are `{[5, 2, 4], [2, 4, 2], [4, 2, 5], [5, 2, 4, 2], [2, 4, 2, 5], [5, 2, 4, 2, 5]}`. None of these subarrays are non-increasing or non-decreasing.