# Mahesh and his lost array
## Rating: 2212
### Description:
Mahesh got a beautiful array named A as a birthday gift from his beautiful girlfriend Namratha. There are N positive integers in that array. Mahesh loved the array so much that he started to spend a lot of time on it everyday. One day, he wrote down all possible subsets of the array. Then for each subset, he calculated the sum of elements in that subset and wrote it down on a paper. Unfortunately, Mahesh lost the beautiful array :(. He still has the paper on which he wrote all subset sums. Your task is to rebuild beautiful array A and help the couple stay happy :)
### Input
The first line of the input contains an integer T denoting the number of test cases. First line of each test case contains one integer N, the number of elements in A. Second line of each test case contains 2<sup>N</sup> integers, the values written on paper
### Output
- For each test case, output one line with N space separated integers in non-decreasing order.
### Constraints
- 1 ≤ T ≤ 50
- 1 ≤ N ≤ 15
- 0 ≤ Values on paper ≤ 10<sup>9</sup>
- All input values are valid. A solution always exists

### Examples:
#### Example 1:
**Input:**
```
2
1
0 10
2
0 1 1 2
```
**Output:**
```
10
1 1
```
**Explaination:**  
Test case #2  
For the array `[1,1]`, possible subsets are `{}`, `{1}`, `{1}`, `{1,1)`, respective sums are 0, 1, 1, 2