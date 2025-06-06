# K Distinct Array
## Rating: 2015
### Description:
An array is said to be good if all its elements are distinct, i.e. no two elements of the array are equal to each other.

You are given a positive integer N and an integer K such that N ≤ K≤ <sup>(N+1)</sup>C<sub>2</sub>

Construct an array A of length N that satisfies the following conditions:
- A has exactly K good (contiguous) subarrays, and 
- Every element of A is an integer from 1 to N (both inclusive). 

If there are multiple such arrays, you can print any of them. 

*Note:* It can be shown that for all inputs satisfying the given constraints, there is always a valid solution. 

### Input Format 
- The first line contains an integer T, the number of testcases. The description of the T testcases follow. 
- Each testcase consists of a single line with two space separated integers, N and K respectively. 

### Output Format 
- For each testcase print N space separated integers, the elements of the constructed array. 
- If there are multiple outputs, you can print any of them. 
- Your output will be considered correct only if the following conditions are satisfied, 
    - Every element of the array is between 1 and N, and 
    - The array has exactly K good subarrays

### Constraints 
- 1 <= T <= 10<sup>5</sup> 
- 1 <= N <= 10<sup>5</sup> 
- N <= K <= <sup>N + 1</sup>C<sub>2</sub>
- Sum of N over all testcases is atmost 3.10<sup>5</sup>

### Examples:
#### Example 1:
**Input:**
```
3
5 5
5 15
5 7
```
**Output:**
```
1 1 1 1 1
1 2 3 4 5
1 2 2 1 1
```
**Explaination:**  
Test Case 1:
- N = 5, K = 5 All subarrays of length 1 are good, therefore every array of size N has at least N good subarrays. If all elements are equal then these will be the only good subarrays so the given array {1, 1, 1, 1, 1} is a valid solution. Observe that under the constraints there are 5 different solutions (one for each value 1 through 5) and all of them will be considered correct.

Test Case 2:
- N = 5, K = 15 There are only <sup>N + 1</sup>C<sub>2</sub> = 15 subarrays, including the array itself. Therefore the array itself must be good which leads us to the solution given above. Any permutation of {1, 2, 3, 4, 5} is also a valid solution, thus there are 5! = 120 different solutions to this case and all of them will be considered correct. 

Test Case 3: 
- N = 5, K = 7 The constructed array is A = {1, 2, 2, 1, 1} You may verify that the only good subarrays of A, in addition to the 5 subarrays of length 1, are those shown below (subarrays are highlighted red).   
{<span style="color:red">1</span>,<span style="color:red">2</span>,2,1,1}   
{1,2,<span style="color:red">2</span>,<span style="color:red">1</span>,1}