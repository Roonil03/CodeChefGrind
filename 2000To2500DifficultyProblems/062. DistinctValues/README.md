# Distinct Values
## Rating: 2236
### Description:
The beauty value of an array is defined as the difference between the largest and second largest elements of the array. Note that the largest and second largest elements can have the same value in case of duplicates.

For example, beauty value of `[2, 5, 3, 1]` = 5-3 = 2 and beauty value of `[7, 6, 7]` = 7 - 7 = 0

You are given an array A of length N. Your task is to find the total number of distinct beauty values among all subarrays of A having length greater than 1.

Note that, a subarray is obtained by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the array.

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of two lines of input.
    - The first line of each test case contains a single integer N - the size of the array.
    - The second line contains N space-separated numbers - A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>, the elements of the array

### Output Format
For each test case, output a single line, the total number of distinct beauty among all subarrays of A having length greater than 1.
### Constraints
- 1 <= T <= 10<sup>4</sup>
- 2 <= N <= 2 * 10<sup>5</sup>
- 1 <= A<sub>i</sub> <= 10<sup>9</sup>
- Sum of N over all test cases does not exceed 2 . 10<sup>5</sup>.


### Examples:
#### Example 1:
**Input:**
```
4
2
1 1
3
4 2 1
4
8 1 7 2
5
6 9 4 2 1
```
**Output:**
```
1
2
4
4
```
**Explaination:**  
Test case 1:   
The only subarray is `[1, 1]` whose beauty is 0. Thus, there is only 1 distinct value of beauty.

Test case 2:   
The subarrays are `[4, 2]`, `[2, 1]`, and `[4, 2, 1]` having beauty 2, 1, and 2 respectively. There are 2 distinct values of beauty.

Test case 3:  
The unique values of beauty are 7, 1, 6, and 5.

Test case 4:  
The unique values of beauty are 3, 5, 2, and 1.