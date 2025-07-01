# Cute Chef Gift
## Rating: 2235
### Description:
Chef wants to give a gift to Chefina to celebrate their anniversary. Of course, he has a sequence a<sub>1</sub>, a<sub>2</sub>,..., a<sub>n</sub> ready for this occasion. Since the half-heart necklace is kind of cliche, he decided to cut his sequence into two pieces and give her a piece instead. Formally, he wants to choose an integer l ( 1 < l < N) and split the sequence into its prefix with length l and its suffix with length N - 1.

Chef wants his gift to be cute; he thinks that it will be cute if the product of the elements in Chefina's piece is coprime with the product of the elements in his piece. Can you tell him where to cut the sequence? Find the smallest valid I such that Chef's gift would be cute.
### Input
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains the integer N.
- The second line contains N space-separated integers a<sub>1</sub>, a<sub>2</sub>,..., a<sub>N</sub>.
### Output
For each test case, print a single line containing one integer I where Chef should cut the sequence.  
It is guaranteed that a solution exists for the given test data.

### Constraints
- 1 <= T <= 20
- 2 <= N <= 10<sup>5</sup>
- 2 <= a<sub>i</sub> <= 10<sup>5</sup> for each valid i
- the sum of N over all test cases does not exceed 3. 105
### Subtasks
**Subtask #1 (25 points):**  
- N <= 200
- the sum of N over all test cases does not exceed 600
### Subtask #2 (40 points):
- N <= 2000
- the sum of N over all test cases does not exceed 6,000
### Subtask #3 (35 points):  
original constraints

### Examples:
#### Example 1:
**Input:**
```
1
4
2 3 4 5
```
**Output:**
```
3
```
