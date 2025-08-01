# Travelling in the Graph
## Rating: 2108
### Description:
You are given a graph with N vertices (numbered 1 to N) and M bidirectional edges, which doesn't contain multiple edges or self-loops - that is, the given graph is a simple undirected graph. 

For each pair of vertices a, b such that 1 <= a, b <= N it is possible to add a new edge between vertices a and b to the graph, with a cost of (a - b)<sup>2</sup>. 

Find the minimum cost of adding edges so that vertex N is reachable from vertex 1. 
### Input Format 
- The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows. 
- The first line of each test case contains 2 space-separated integers, N and M. 
- The ith of the next M lines contains 2 space-separated integers u¡ and v₁, denoting a bidirectional edge between vertex ui and vertex vị in the graph. 
### Output Format 
For each test case, output the answer in a single line. 
### Constraints 
- 1 <= T <= 1000 
- 2 <= N <= 2 * 10<sup>5 </sup>
- 0 <= M <= 2 * 10<sup>5 </sup>
- 1 <= u<sub>i</sub>>, v<sub>i</sub>> <= N 
- The graph doesn't contain self-loops or multiple edges 
- Sum of N over all testcases is no more than 2 . 10<sup>5 </sup>. 
- Sum of M over all testcases is no more than 2 . 10<sup>5 </sup>.

### Examples:
#### Example 1:
**Input:**
```
3
2 0
5 4
3 2
1 4
5 3
4 2
6 3
1 2
3 2
1 3
```
**Output:**
```
1
0
3
```
**Explaination:**  
Test Case 1:  
Add an edge between vertices 1 and 2, with cost (1-2)<sup>2</sup> = 1. 

Test Case 2:  
Vertices 1 and 5 are already connected, so no edges need to be added