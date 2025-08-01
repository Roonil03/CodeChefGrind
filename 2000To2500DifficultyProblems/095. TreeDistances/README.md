# Tree Distances
## Rating: 2383
### Description:
A tree is defined as a connected, undirected graph with $n$ vertices and $n - 1$ edges. The distance between two vertices in a tree is equal to the number of edges on the unique simple path between them.

You are given two integers $x$ and $y$. Construct a tree with the following properties:

*   The number of pairs of vertices with an even distance between them equals $x$.
*   The number of pairs of vertices with an odd distance between them equals $y$.

By a pair of vertices, we mean an ordered pair of two (possibly, the same or different) vertices.

### Input

The first line of the input contains a single integer $T$ denoting the number of test cases. Each test case consists of one line containing two space-separated integers $x$ and $y$.

### Output

For each test case, if there is no tree satisfying the given properties, print "NO" (without quotes).

Otherwise, on the first line print "YES" (without quotes). Then print integer $n$ denoting the number of vertices in the tree, followed by $n - 1$ lines describing the edges of the tree in any order. Vertices are numbered from $1$ to $n$. If there are multiple answers, print any of them.

### Constraints
- $1 \le T \le 100$
- $1 \le x, y \le 10^9$
- $x+y \le 10^9$

### Examples:
#### Example 1:
**Input:**
```
4
2 2
29 20
3 12
6 3
```
**Output:**
```
YES
2
1 2
YES
7
1 2
1 3
2 4
2 5
3 6
3 7
NO
NO
```
**Explaination:**  
In the first test case, the pairs 
`(1,1)` and 
`(2,2)` have an even distance, while the pairs 
`(1,2)` and 
`(2,1)` have an odd distance.