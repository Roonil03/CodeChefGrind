# Yet Another Crossover Episode
## Rating: 2221
### Description:
You are given an integer D. Find an integer sequence A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> such that the following conditions are satisfied:
- 1 ≤ N ≤ 10<sup>5</sup>
- 1 < A<sub>i</sub> < 10<sup>5</sup> for each valid i
- Σ<sup>N</sup><sub>i=1</sub>Σ<sup>N</sup><sub>j = i</sub> (min(A<sub>i</sub>, A<sub>i+1</sub>,..., A<sub>j</sub>) - GCD(A<sub>i</sub>, A<sub>i+1</sub>,..., A<sub>j</sub>)) = D

It can be proved that a solution always exists under the given constraints.

Note: GCD(B<sub>1</sub>, B<sub>2</sub>,..., B<sub>M</sub>) is the greatest integer which divides all the integers B<sub>1</sub>, B<sub>2</sub>,..., B<sub>M.</sub>
### Input
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first and only line of each test case contains a single integer D.

### Output
For each test case, print two lines. The first of these lines should contain a single integer N. The second line should contain N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., Α<sub>Ν</sub>.

If there are multiple solutions, you may find any one of them.
### Constraints
- 1 <= T <= 10
- 0 <= D <= 10<sup>9</sup>

### Examples:
#### Example 1:
**Input:**
```
4
2
5
200
13
```
**Output:**
```
3
3 3 2 
5
2 8 5 1 10 
7
12 10 15 11 19 13 15
4
5 4 4 10 
```