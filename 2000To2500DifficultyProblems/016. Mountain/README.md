# Mountain
## Rating: 2047
### Description:
You're given an `NxM` matrix A, where A<sub>(i,j)</sub> = i. 

A mountain in the matrix is defined as a set of cells and is expressed using K + 2 integers: 
P, K, L<sub>1</sub>, L<sub>2</sub>,..., L<sub>K</sub>. 

This translates to: from the (P+i-1)<sup> th</sup> row, select the first L; cells (1 ≤ i ≤ K) in the row. Refer samples for more clarity. 

Your task is to answer Q queries. For the ith query: 
- You are given an integer S<sub>i</sub> and you need to find a mountain with sum S<sub>i</sub>. 

### Input Format 
- The first line contains three space-separated integers N, M, and Q, the dimensions of the matrix and the number of queries. 
- The second line contains Q space-separated integers S<sub>1</sub>, S<sub>2</sub>,..., S<sub>Q</sub>, denoting each query. 
### Output Format 
- For each query, if no possible mountain with given sum exists, output -1. 
- Otherwise, output two lines: 
    - The first line contains two space-separated integers P,K (1 <= P <= N, P + K-1 <= N); 
    - The second line contains K space-separated integers L<sub>1</sub>, L<sub>2</sub>,..., L<sub>K</sub>(1 ≤ L<sub>i</sub> ≤ M). 

If multiple mountains satisfy the condition, you may print any.

### Constrains:
- 2 <= N, M <= 3 . 10<sup>4</sup>
- 1 <= Q<= 10
- 1 <= S<sub>i</sub> <= M . N . (N+1)/2

### Examples:
#### Example 1:
**Input:**
```
5 4 4
20 36 1 60
```
**Output:**
```
2 3
2 4 1
1 5
3 1 4 1 3
1 1
1
1 5
4 4 4 4 4
```
**Expaination**  
Query 1: A possible mountain that satisfies the condition is highlighted below:<br>
<img src="https://s3.amazonaws.com/codechef_shared/download/Images/START79/5atpZQnwFL3BmhW.png"><br>
Here, P = 2 and K = 3 and we are selecting 2, 4, and 1 cells from the second, third, and fourth row respectively. The sum of the highlighted cells is 20. 

Query 2: A possible mountain that satisfies the condition is highlighted below: <br>
<img src="https://s3.amazonaws.com/codechef_shared/download/Images/START79/VOiv8mtob2kyraN.png"><br>
Here, P = 1 and K = 5 and we are selecting 3, 1, 4, 1, and 3 cells from the first, second, third, fourth and fifth rows respectively. The sum of the highlighted cells is 36.