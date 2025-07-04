# Maximum K Sums
## Rating: 2260
### Description:
Chef likes arrays a lot. Today, he found an array A consisting of N positive integers.

Let L denote the sorted (in non-increasing order) list of size `N * (N + 1) / 2` containing the sums of all possible contiguous subarrays of A. Chef is interested in finding the first K elements from the list L. Can you help him in accomplishing this task?
### Input
- There is only a single test case per input file.
- The first line of input contains two space separated integer numbers N and K denoting the size of the array and the number of the maximal sums you need to find.
- The following line contains N space separated integer numbers denoting the array A.
### Output
- Output K space separated integers where the ith integer denotes the ith element of L.
### Constraints
- 1 <= N <= 10 ^ 5
- 1 <= K <= `min(N * (N + 1) / 2 , 10`<sup>`5`</sup>`)`
- 1 <= A<sub>i</sub> <= 10<sup>9</sup>

### Subtasks
**Subtask 1 (47 pts) :**  
1 ≤ N ≤ 1000, 1 ≤ K ≤ min{N*(N+1)/2, 10<sup>5</sup>}

**Subtask 2 (53 pts) :**  
1 ≤ N ≤ 10<sup>5</sup>, 1 ≤ K ≤ `min{N*(N+1)/2, 10`<sup>`5`</sup>`}`

### Examples:
#### Example 1:
**Input:**
```
3 4
1 3 4
```
**Output:**
```
8 7 4 4
```
**Explaination:**  
Test 1:  
<img src="https://s3.amazonaws.com/hr-challenge-images/15909/1461161918-8d79d8843c-B.png"><br>
The first 4 elements of it are `[8, 7, 4, 4]`.

#### Example 2:
**Input:**
```
3 3
10 2 7
```
**Output:**
```
19 12 10
```