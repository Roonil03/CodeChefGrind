# Minimal Travel Time
## Rating: 2379
### Description:
Chef's college is starting next week. There are $S$ subjects in total, and he needs to choose $K$ of them to attend each day, to fulfill the required number of credits to pass the semester. There are $N + 1$ buildings. His hostel is in building number 0. Subject $i$ is taught in building $A_i$. After each subject, there is a break, during which he goes back to his hostel. There are $M$ bidirectional paths of length 1 which connects building $u$ to building $v$. Find the minimum possible total distance Chef needs to travel each day if he chooses his subjects wisely.

### Input:

- First line will contain $T$, number of testcases. Then the testcases follow.
- Each testcase contain $M + 2$ lines of input.
- First line will contain 4 space separated integers $N, M, S, K$, number of buildings other than hostel building, number of edges, total number of subjects taught, number of subjects required to pass the semester.
- Next $M$ lines have 2 space separated integers $u, v$ representing the path connecting buildings $u$ and $v$.
- Next line has $S$ space separated integers $A_1, A_2, \dots, A_S$ representing the building in which $i^{th}$ subject is taught.

### Output: 
For each testcase, output in a single line answer to the problem.

### Constraints
* $1 \le T \le 3$
* $1 \le N, S \le 10^5$
* $1 \le M \le 2 * 10^5$
* $1 \le K \le S$
* $1 \le A_i \le N$
* $0 \le u, v \le N$

Its guaranteed that the graph is connected and has no self loops.

### Examples:
#### Example 1:
**Input:**
```
3
2 3 2 2
0 1
1 2
2 0
1 2
2 2 2 2
0 1
1 2
1 2
6 7 5 3
0 1
0 2
0 4
1 3
1 4
2 5
2 6
1 2 3 5 6
```
**Output:**
```
4
6
8
```
**Explaination:**  
TestCase 1:  
First Chef attends the subject in the building 2 and he travels 1 units to go there and 1 units to come back during the break to the hostel.  
Second subject he attends in the building 1 and he travels 1 unit to go there and 1 unit to come back during the break to the hostel.  
In total the total minimum distance to be travelled is $2 + 2 = 4$ units.

TestCase 2:  
First Chef attends the subject in the building 2 and he travels 2 units to go there and 2 units to come back during the break to the hostel.  
Second subject he attends in the building 1 and he travels 1 unit to go there and 1 unit to come back during the break to the hostel.  
In total the total minimum distance to be travelled is $4 + 2 = 6$ units.

TestCase 3:  
First Chef attends the subject in the building 3 and he travels 2 units to go there and 2 units to come back during the break to the hostel.  
Second subject he attends in the building 1 and he travels 1 unit to go there and 1 unit to come back during the break to the hostel.  
Final subject he attends in the building 2 and he travels 1 unit to go there and 1 unit to come back during the break to the hostel.  
In total the total minimum distance to be travelled is $4+2+2= 8$ units.