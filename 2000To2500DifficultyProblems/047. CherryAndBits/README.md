# Cherry and Bits
## Rating: 2179
### Description:
Cherry has a binary matrix A consisting of N rows and M columns. The rows are numbered from 1 to N, columns are numbered from 1 to M. Element at row i (1 ≤ i ≤ N) and column j (1 ≤ j ≤ M) is denoted as A<sub>ij</sub>. All elements of A are either 0 or 1.

He performs Q queries on matrix. Each query is provided by four integers x<sub>1</sub>, y<sub>1</sub>, x<sub>2</sub>, y<sub>2</sub> which define the rectangle, where (x<sub>1</sub>, y<sub>1</sub>) stands for the coordinates of the top left cell of the rectangle, while (x<sub>2</sub>, y<sub>2</sub>) stands for the coordinates of the bottom right cell. You need to flip all the bits i.e. (0 to 1, 1 to 0) that are located fully inside the query rectangle.

Finally, print the matrix after performing all the queries.

Note: x<sub>1</sub> represents the row number while y<sub>1</sub> represents the column number.
### Input:
- The first line of the input contains two integers N and M - the number of rows and the number of columns in the matrix.
- Each of the next N lines contains a string of length M, where the j<sup>th</sup> character of i<sup>th</sup> line denotes the value of A<sub>i,j</sub>.
- Next line contains an integer Q - the number of queries.
- Then follow Q lines with queries descriptions. Each of them contains four space-seperated integers x<sub>1</sub>, y<sub>1</sub>, x<sub>2</sub>, y<sub>2</sub> - Coordinates of the up left and bottom right cells of the query rectangle.

### Output:
Print the matrix, in the form of N strings, after performing all the queries.
### Constraints
- 1 <= N, M <= 1000
- 0 ≤ A<sub>ij</sub> ≤ 1
- 1 <= Q <= 10<sup>6</sup>
- 1 <= x<sub>1</sub> <= x<sub>2</sub> <= N
- 1 <= y<sub>1</sub> <= y<sub>2</sub> <= M

### Examples:
#### Example 1:
**Input:**
```
2 2
00
00
3
1 1 1 1
2 2 2 2
1 1 2 2 
```
**Output:**
```
01
10
```
**Explaination:**  
After processing the 1st query 1 1 1 1, matrix becomes:  
[<sup>1 0</sup>  
<sub>0 0</sub>]  
After processing the 2nd query 2 2 2 2, the matrix becomes:  
[<sup>1 0</sup>  
<sub>0 1</sub>]  
After processing the 3rd query 1 1 2 2, matrix becomes:  
[<sup>0 1</sup>  
<sub>1 0</sub>]  
We need to output the matrix after processing all queries.