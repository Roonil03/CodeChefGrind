# Full Path Eraser
## Rating: 2094
### Description:
There is a rooted tree of N vertices rooted at vertex 1. Each vertex v has a value A associated with it.  
You choose a vertex v (possibly the root) from the tree and remove all vertices on the path from the root to the vertex v, also including v. This will result in a forest of zero or more connected components.  
The beauty of a connected component is the GCD of the values of all vertices in the component. Find the maximum value of the sum of beauties of the obtained connected components for any choice of v.  
Here, GCD stands for Greatest Common Divisor.
### Input Format
- The first line contains a single integer T-the number of test cases. Then the test cases follow.
- The first line of each test case contains an integer N - the size of the tree.
- The second line of each test case contains N space-separated integers A1, A2,..., AN denoting the values associated with each vertex.
- The next N - 1 lines contain two space-separated integers u and v - denoting an undirected edge between nodes u and v.

It is guaranteed that the edges given in the input form a tree.
### Output Format
For each test case output the maximum value of the sum of beauties of the obtained connected components for any choice of v.
### Constraints
- 1 < T < 2 . 10<sup>4</sup>
- 1 ≤ N ≤3 . 10<sup>5</sup>
- 1 < A<sub>i</sub> < 10<sup>9</sup>
- 1 ≤ u, v ≤ N and u ≠ v
- It is guaranteed that the edges given in the input form a tree.
- The sum of N over all test cases does not exceed 3.10<sup>5</sup>

### Examples:
#### Example 1:
**Input:**
```
1
10
15 30 15 5 3 15 3 3 5 5
1 2
1 5
2 3
2 4
5 6
5 7
5 8
7 9
7 10
```
**Output:**
```
33
```
**Explaination:**  
The tree from the sample is as follows.  
![tree_basic](https://s3.amazonaws.com/codechef_shared/download/Images/the_hypocr1t3/tree_basic.png=450x450)  
If vertex v = 7 is chosen, vertices 1, 5 and 7 are removed.  
![tree_remove](https://s3.amazonaws.com/codechef_shared/download/Images/the_hyp0cr1t3/tree_remove.png=450x450)  
The resulting forest contains five connected components `{8}`, `{6}`, `{10}`, `{9}` and `{2, 3, 4}`.  
![tree_value](https://s3.amazonaws.com/codechef_shared/download/Images/the_hypocr1t3/tree_value.png=450x450)  
The beauties of the connected components are 3, 15, 5, 5 and 5 respectively. Thus the answer is 3 + 15 + 5 + 5 + 5=33.  
It can be shown that this is the maximum value possible for any choice of v.  