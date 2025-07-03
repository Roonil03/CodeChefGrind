# Chef and Ants
## Rating: 2244
### Description:
Chef has been researching ant colonies for many years and finally discovered all their secrets.

An ant colony consists of N distinct lines (numbered 1 through N) that pass through a point O, which is the queen's home. For each valid i, there are M<sub>i</sub> ants on the i-th line.

For each valid i and j, the j-th ant on the i-th line initially has a non-zero coordinate X<sub>i,j</sub> with the following meaning:
- The distance of this ant from O is |X<sub>i,j</sub>|
- Let's choose a direction along the i-th line from O. The exact way in which this direction is chosen does not matter here, it only needs to be the same for all ants on the same line.
- If X<sub>i,j</sub> is positive, this ant is at the distance |X<sub>i,j</sub>| from O in the chosen direction. Otherwise, it is at this distance from O in the opposite direction.

In other words, two ants j and k on a line i are at the same side of O if the signs of X<sub>i,j</sub> and X<sub>i,k</sub> are the same or on opposite sides if the signs are different.

All ants move with the same constant speed. Initially, all of them are moving towards O. Whenever two or more ants meet (possibly at O), all of these ants turn around and start moving in the opposite directions with the same speed. We call this a collision. Even if an ant reaches O without meeting an ant there, it keeps moving in the same direction. An ant may change direction multiple times.

Help Chef find the total number of collisions between ants. Note that even if more than two ants meet, it counts as only one collision.

### Input:
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains a single integer N.
- N lines follow. For each valid i, the i-th of these lines contains an integer M<sub>i</sub>, followed by a space and M<sub>i</sub> space-separated integers X<sub>i,1</sub>, X<sub>i,2</sub>,..., X<sub>i,M</sub>
### Output
For each test case, print a single line containing one integer - the number of collisions between ants.
### Constraints
- 1 < T < 1,000
- 1 ≤ N ≤2 . 10<sup>5</sup>
- 1 <= M<sub>i</sub> < 5 . 10<sup>5</sup> for each valid i
- 1 ≤ |X<sub>i,j</sub>| ≤ 10<sup>9</sup> for each valid i, j
- X<sub>i,j</sub> < X<sub>i,j+1</sub> for each valid i, j
- the sum of N over all test cases does not exceed 2 . 10<sup>5</sup>
- the sum of M₁+ M<sub>2</sub> + ... + M<sub>N</sub> over all test cases does not exceed 10<sup>6</sup>
### Subtasks
**Subtask #1 (30 points):**  
N=1

**Subtask #2 (70 points):**  
original constraints

### Examples:
#### Example 1:
**Input:**
```
1
2
2 -2 1
1 2
```
**Output:**
```
2
```
**Explaination:**  
Example case 1: First, the ants on the first line collide at the coordinate -1/2 and change directions. Finally, ant 2 on the first line collides with the only ant on the second line; this happens at O. No collisions happen afterwards.