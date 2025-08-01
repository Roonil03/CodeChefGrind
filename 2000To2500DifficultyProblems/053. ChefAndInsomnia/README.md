# Chef and insomnia
## Rating: 2197
### Description:
Chef sometimes suffers from insomnia. During sleepless nights, he often plays this game: He creates an array A of N integers and also decides one integer K. After that, he tries to count the number of non-empty contiguous subsequences (subsegments) of A, such that there are no bad pairs of integers in this subsegment. A pair `(x, y)` of integers is called bad if x is situated to the left of y in the array and x mod y = K. Finally, before going to sleep, Chef wrote down the answer on a sheet of paper. Sadly, he has forgotten it this morning and want your help regarding that.
### Input
- The first line contains two integers - N and K.
- Second line contains N integers - A<sub>1</sub>, A<sub>2</sub> ... A<sub>N</sub> - separated by spaces, denoting the array A.
### Output
- A single line containing an integer - the answer to the problem.

### Constraints
- 1 <= N, A<sub>i</sub> <= 10<sup>5</sup>
- 0 <= K <= 10<sup>5</sup>
### Subtasks
Subtask 1:  
N <= 100 (15 points)

Subtask 2:  
N <= 1000 (15 points)

Subtask 3:  
K = 0 (10 points)

Subtask 4:  
Original constraints (60 points)

### Examples:
#### Example 1:
**Input:**
```
3 2
5 3 1
```
**Output:**
```
4
```