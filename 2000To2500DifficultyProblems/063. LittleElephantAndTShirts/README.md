# Little Elephant and T-Shirts
## Rating: 2242
### Description:
Little Elephant and his friends are going to a party. Each person has his own collection of T-Shirts. There are 100 different kind of T-Shirts. Each T-Shirt has a unique id between 1 and 100. No person has two T-Shirts of the same ID.

They want to know how many arrangements are there in which no two persons wear same T-Shirt. One arrangement is considered different from another arrangement if there is at least one person wearing a different kind of T-Shirt in another arrangement.

### Input
First line of the input contains a single integer T denoting number of test cases. Then T test cases follow.

For each test case, first line contains an integer N, denoting the total number of persons. Each of the next N lines contains at least 1 and at most 100 space separated distinct integers, denoting the ID's of the T-Shirts ith person has.

### Output
For each test case, print in single line the required number of ways modulo 1000000007 = 10<sup>9</sup>+7.

### Constraints
- 1 ≤ T ≤ 10
- 1 ≤ N ≤ 10

### Examples:
#### Example 1:
**Input:**
```
2
2
3 5
8 100
3
5 100 1
2
5 100
```
**Output:**
```
4
4
```
**Explaination:**  
For the first case, 4 possible ways are `(3,8)`, `(3,100)`, `(5,8)` and `(5,100)`.  
For the second case, 4 possible ways are `(5,2,100)`, `(100,2,5)`, `(1,2,100)`, and `(1,2,5)`.  