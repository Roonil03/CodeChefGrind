# Red Green Grids
## Rating: 2319
### Description:
There is an empty grid (all cells are colored white) of N rows and M columns.

Chef can fill each cell with either RED or GREEN color.  
Chef defines a valid path as a path of cells starting from `(1, 1)` and ending at `(N, M)`, where, Chef moves either right or down by 1 cell each time.  

For a particular grid, Chef defines the score of the grid as the number of valid paths containing equal number of RED and GREEN cells.  

Find the sum of scores of all possible colored grids containing N rows and M columns.  
Since the answer can be large, output it modulo 998244353.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of two integers N and M - denoting the dimensions of the grid.
### Output Format
For each test case, output the sum of scores of all possible colored grids containing N rows and M columns, modulo 998244353.

### Constraints:
- 1 <= T <= 1000
- 1 <= N, M <= 1000

### Examples:
#### Example 1:
**Input:**
```
3
1 1
1 2
2 3
```
**Output:**
```
0
2
72
```
**Explaination:**  
Test case 1:  
There are 2 possible coloured grids of size 1 x 1. In the first grid, the one and only cell is colored RED. In the second grid, the one and only cell is colored GREEN. Neither of the grids have a valid path with equal number of red and green cells. Thus, score of each grid is 0.

Test case 2:  
There are 4 possible coloured grids of the given dimension:  
<img src="https://s3.amazonaws.com/codechef_shared/download/Images/START60.png"><br>
For grids 1 and 4, the scores are 0 as there are no valid paths with equal red and green cells. Grids 2 and 3 have score 1 each. The valid path with equal red and green cells is `(1, 1) → (1, 2)` in both the grids.  
Thus, the sum of scores of all possible coloured grids is 2.