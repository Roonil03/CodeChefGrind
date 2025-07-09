# K-Subarrays
## Rating: 2306
### Description:
You are given two integers N and K, and an array A of N integers. You have to choose K disjoint non-empty subarrays such that the score is maximized.
The score is calculated as follows:

$$Score = \sum_{i=1}^{K} \text{Sum}[i] \cdot i$$

where `Sum[i]` denotes sum of elements of i-th subarray. By the i-th subarray, we mean the i-th one in the order from left to right.
Find the maximum score that can be achieved.
Note: The subarrays are not required to cover the whole array. It is allowed for some elements of A to belong to none of the subarrays.
### Input
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains two space-separated integers N and K.
- The second line of each test case contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., Α<sub>Ν</sub>.

### Output
For each test case, print a single line containing one integer - the maximum score.
### Constraints
- 1 <= T <= 1000
- 1 <= N <= 10<sup>5</sup>
- 1 <= K <= min(100, N)
- -10<sup>6</sup> <= A<sub>i</sub> <= 10<sup>6</sup>
- The sum of N over all test cases does not exceed 10<sup>5</sup>
### Subtasks
Subtask #1 (15 points):  
K = 1 

Subtask #2 (35 points):  
K = 2

Subtask #3 (50 points):  
Original constraints

### Examples:
#### Example 1:
**Input:**
```
2
5 2
1 2 -1 3 1
5 2
-1 2 11 -23 12
```
**Output:**
```
11
37
```
**Explaination:**  
Test Case 1:  
One way to choose 2 disjoint non-empty subarrays is:
- S<sub>1</sub> = `[1, 2]` and S<sub>2</sub> = `[3, 1]`  
The score is 3 * 1 + 4 * 2 = 11 which is the maximum possible.

Test Case 2:  
One way to choose 2 disjoint non-empty subarrays is:
- S<sub>1</sub> = `[2, 11]` and S<sub>2</sub> = `[12]`  
The score is 13 * 1 + 12 * 2 = 37 which is the maximum possible.