# Ancient Berland Roads
## Rating: 2324
### Description:
In Ancient Berland, there were N towns, along with M bidirectional roads connecting them. With time, some roads became unusable, and nobody repaired them.

As a person who is fond of Ancient Berland history, you now want to undertake a small research study. For this purpose, you want to write a program capable of processing the following kinds of queries:
- D K : meaning that the road numbered K in the input became unusable. The road numbers are 1-indexed.
- P A x : meaning that the population of the Ath town became x.

Let's call a subset of towns a region if it is possible to get from each town in the subset to every other town in the subset by the usable (those, which haven't already been destroyed) roads, possibly, via some intermediary cities of this subset. The population of the region is, then, the sum of populations of all the towns in the region.

You are given the initial road system, the initial population in each town and Q queries, each being one of two types above. Your task is to maintain the size of the most populated region after each query.

### Input

The first line of each test case contains three space-separated integers — N, M, and Q — denoting the number of cities, the number of roads, and the number of queries, respectively.

The following line contains N space-separated integers, the ith of which denotes the initial population of the ith city.

The jth of the following M lines contains a pair of space-separated integers — X<sub>j</sub>, Y<sub>j<sub> — denoting that there is a bidirectional road connecting the cities numbered X<sub>j</sub> and Y<sub>j</sub>.

Each of the following Q lines describes a query in one of the forms described earlier.

### Output:
Output Q lines. On the ith line, output the size of the most populated region after performing i queries.

### Constraints

- 1 ≤ X<sub>j</sub>, Y<sub>j</sub> ≤ N
- Roads' numbers are 1-indexed.
- There is no road that gets removed twice or more.
- 1 ≤ P<sub>i</sub> ≤ 10<sup>5</sup>

### Subtasks:
Subtask 1 (30 points) :  
1 ≤ N, M, Q ≤ 10<sup>3</sup>

Subtask 2 (70 points) :  
1 ≤ N, M, Q ≤ 5 × 10<sup>5</sup>

### Examples:
#### Example 1:
**Input:**
```
3 3 6
1 2 3
1 2
2 3
3 1
P 1 3
D 1
P 2 3
D 2
P 3 10
D 3
```
**Output:**
```
8
8
9
6
13
10
```
**Explaination:**  
- After the first query, the populations are `(3, 2, 3)` and the most populated region is `{1, 2, 3}`.
- After the second query the populations and the regions remain the same.
- After the third query the populations are `(3, 3, 3)` and the most populated region is again `{1, 2, 3}`.
- After the fourth query the populations remain the same, but we have two regions: `{1, 3}` and `{2}`. The most populated region is `{1, 3}`.
- After the fifth query the populations become equal to `(3, 3, 10)` respectively, and the most populated region is again `{1, 3}`.
- After the last query we have populations the same, but now every city forms it own separate region, and the most populated region is region `{3}`.

