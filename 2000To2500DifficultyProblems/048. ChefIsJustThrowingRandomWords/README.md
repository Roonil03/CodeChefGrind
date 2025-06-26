# Chef Is Just Throwing Random Words
## Rating: 2181
### Description:
Chef once had a deep epiphany and ended up saying: Given a sequence of positive integers a<sub>1</sub>, a<sub>2</sub>,..., a<sub>n</sub>, if you take each of its 2<sup>N</sup> subsequences and write down the sum of elements of this subsequence, what will the bitwise `OR` of the written integers be?

Yes, you read it right, but can you solve it?

### Input
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains a single integer N.
- The second line contains N space-separated integers a<sub>1</sub>, a<sub>2</sub>,..., a<sub>N</sub>.

### Output
For each test case, print a single line containing one integer - the bitwise OR of sums of all subsequences.

### Constraints
- 1 <= T <= 5
- 1 <= N <= 10<sup>5</sup>
- 1 <= a<sub>i</sub> < 2<sup>30</sup> for each valid i

### Subtasks
`Subtask #1 (100 points):` original constraints

### Examples:
#### Example 1:
**Input:**
```
2
2
1 1
3
1 9 8
```
**Output:**
```
3
27
```