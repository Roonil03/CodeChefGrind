# Winter
## Rating : 2007
### Description:
```
Uneori îmi spun: am să mor
atât de singuratecă-n mijlocul lor;
limba simplă a bucuriilor n-am învâțat;
am să mor ca o pasăre care prea mult a zburat,
dar n-a făcut cuib nicăieri.

― Oamenii ma uimesc, Magda Isafost
```
As of writing the informal statement, the winter just came and the statement was in season. Now, it is not winter anymore, so here is the formal statement instead:

You are given a connected graph with N nodes and M edges. You are given Q queries of the following types: 
1. u: Given node u(1 <= u <= N) set the state of the node u to frozen. 
2. t: Given t, let t units of time pass by
3. v: Given node v(1 <= v <= N) answer if node v is currently frozen. 

Initially, no node is frozen. 
The graph has the following property: 
- If, at time T, a node u is frozen, then, at time (T + 1) all neighbours of u become frozen. 

For each query of type 3, answer whether the node is currently frozen.

**Note:**
- If a node is already frozen, it remains unaffected after a type 1 query. 
- If, for a frozen node u, a neighbour v of node u is frozen at time T, node v remains unaffected at time (T + 1)

### Input Format 
- The first line of input contains three integers N, M, and Q. 
- M lines follow, the i<sup>th</sup> of which contains two integers u; and v₁, representing there is an edge between nodes u<sub>i</sub> and v<sub>i</sub>. 
- Then, Q lines follow, the j<sup>th</sup> of which contains two integers type<sub>j</sub> and x<sub>j</sub>. 
If type<sub>j</sub> is 1 or 2, it indicates that you must effectuate an update of the type type<sub>j</sub> with parameter z<sub>j</sub>. 
Otherwise, answer the query with parameter x<sub>j</sub>

### Output Format 
For each query of type 3, print `YES` if the queried node is frozen. Otherwise, print `NO`. 

You may print each character of the string in uppercase or lowercase (for example, the strings `Yes`, `yEs`, `yes` and `YES` will all be treated as identical).

### Constraints 
- 1 <= N Q <= 10<sup>5</sup>
- 1 <= M <= 3 * 10<sup>5</sup>
- 1 <= u<sub>i</sub>, v<sub>i</sub> <= N 
- 1 < type<sub>j</sub> <3 
- 1 <= x<sub>j</sub> <= N if the query type is 1 or 3.
- 1 <= x<sub>j</sub> <= 10 <sup>9</sup> if the query type is 2.

### Subtasks 
- Subtask 1 (10 points): 1 ≤ N ≤ 1000, 1 < Q ≤ 2000, 1 <= M <= 3000. 
- Subtask 2 (30 points): Each node in the given graph has at most two neighbours. 
- Subtask 3 (60 points): Original constraints.

### Examples:
#### Example 1:
Input
```
6 6 6
1 2
2 3
4 1
5 4
6 1
6 5
1 1
3 1
1 5
2 1
3 4
3 3
```
Output:
```
YES
YES
NO
```
Explaination:
Test Case 1: The graph looks like:
<img src="https://s3.amazonaws.com/codechef_shared/download/Images/LTIME106/cine4.png"><br>
Query 1: Freeze the node 1. The graph looks like:
<img src="https://s3.amazonaws.com/codechef_shared/download/Images/LTIME106/cine2.png"><br>
Query 2: Find the status of node 1. Since node 1 is frozen, we print YES.  
Query 3: Freeze the node 5. The graph looks like:
<img src="https://s3.amazonaws.com/codechef_shared/download/Images/LTIME106/cine5.png"><br>
Query 4: 1 unit of time passes. Before this, nodes 1 and 5 were frozen.   
After 1 second, all the neighbours of node 1, i.e., nodes 2, 4, and 6, and all the neighbours of node 5, i.e., nodes 4 and 6 are frozen.   
Thus, after this query, the frozen nodes in the graph are 1, 2, 4, 5, and 6. The graph looks like:
<img src="https://s3.amazonaws.com/codechef_shared/download/Images/LTIME106/cine3.png"><br>
Query 5: Find the status of node 4. Since node 4 is frozen, we print YES.  
Query 6: Find the status of node 3. Since node 3 is not frozen, we print NO.  