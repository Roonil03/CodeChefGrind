# Make that Array!
## Rating: 2323
### Description:
Chef is given two arrays A and B, each having N elements.

In one move, Chef can choose an index i (1 ≤ i ≤ N-1), get (A<sub>i</sub> - A<sub>i+1</sub>) points, and then swap A<sub>1</sub> and A<sub>i+1</sub>.

For example: If Chef has the array - `[10, 7, 5]` and Chef chooses index 1 during his move, he will get 10-73 points and the new array will become `[7, 10, 5]`

Can you help Chef in finding the maximum number of points he can get while converting the array A into array B?

Note: It is guaranteed in the input that there exists a sequence of moves which can convert array A into B.
### Input Format
- The first line of input contains a single integer T, denoting the number of testcases. The description of the T testcases follows.
- The first line of each test case contains a single integer N denoting the number of elements in A and B.
- The second line of each test case contains N space separated integers A<sub>1</sub>, A<sub>2</sub>, ..., Α<sub>Ν</sub>.
- The third line of each test case contains N space separated integers B<sub>1</sub>, B<sub>2</sub>, ..., B<sub>N</sub>.

### Output Format
For each test case, print a single line containing one integer, which is the maximum number of points that Chef can get while converting the array A into array B
### Constraints
- 1 <= T <= 5 * 10<sup>4</sup>
- 2 <= N <= 5 * 10<sup>5</sup>
- 1 <= A<sub>i</sub> <= 10<sup>5</sup>
- 1 <= B<sub>i</sub> <= 10<sup>5</sup>
- The sum of N over all test cases does not exceed 5 . 10<sup>5</sup>

### Examples:
#### Example 1:
**Input:**
```
3
2
1 2
2 1
3
3 2 1
1 2 3
3
1 2 3
1 2 3
```
**Output:**
```
-1
4
0
```
**Explaination:**  
Test Case 1:  
Chef can choose i = 1 in the first move, get 1-2 = -1 points and swap A<sub>1</sub> and A<sub>2</sub>. After this move, A is converted into B. We can prove that there exists no other sequence of moves which can result in higher score while converting A into B. 

Test Case 2:  
One possible sequence of moves is the following:
- Choose i = 2 Total points = 1, and A will become `[3, 1, 2]`. 
- Choose i = 1 Total points = 1 + 2, and A will become `[1, 3, 2]`. 
- Choose i = 2 Total points = 1 + 2 + 1 , and A will become `[1, 2, 3]`.

There are other possible sequences of moves which can result in total 4 points, but no such sequence exists which can result in more than 4 points, and simultaneously convert A into B.