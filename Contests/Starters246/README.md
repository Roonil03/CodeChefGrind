# Starters 246
## Contest Division: Division 2
## Position: 

# Questions:
## Plant
### Description:
You know, that for the $i$-th of the next $N$ days, the temperature will be $A_i$.

You have a seed for a tree that needs 2 days to grow. The height of the tree will be the minimum of the temperatures on the 2 days of growing time.

Find the maximum possible height of the tree if you choose to optimally plant it's seed at the correct time (within the first $N - 1$ days).

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line contains a single integer $N$.
    * The second line contains $N$ integers - $A_1, A_2, \dots, A_N$.

### Output Format
For each test case, output on a new line the maximum height of the tree.

### Constraints
* $1 \le T \le 100$
* $2 \le N \le 100$
* $1 \le A_i \le 100$

### Examples:
**Input:**
```
2
2
5 7
3
4 7 6
```
**Output:**
```
5
6
```
**Explaination:**  
**Test Case 1:** Just plant the seed on day 1, and it will grow to be height $\min(5, 7)$.

## Red Yellow Cards
### Description:
A football player has received a total of $R$ red cards and $Y$ yellow cards in his life, over the course of multiple matches. Note that here, yellow cards work differently than usual (specifically, they carry forward between matches).

He gets sent off if either he receives a red card, or if he receives his **second** yellow card since his last send off. Thus, yellow cards carry forward between games, and get reset when the player gets sent off.

Given the player's count of red and yellow cards, what is the minimum number of games he must have been sent off in.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* The first and only line contains 2 integers - $R$ and $Y$.

### Output Format
For each test case, output on a new line the minimum matches where he got sent off.

### Constraints
* $1 \le T \le 100$
* $0 \le R, Y \le 100$

### Examples:
**Input:**
```
4
0 5
0 4
2 3
1 0
```
**Output:**
```
2
2
2
1
```
**Explaination:**  
Test Case 1: The player did not receive any red cards, but he got 5 yellows. He would be sent off when he got the 2nd yellow, and the 4th yellow.

Test Case 3: If the player gets cards in this order : yellow, red, yellow, red, yellow; he only gets sent off twice.

## Waiting (Easy)
### Description:
***This is the easy version of the probem. Here, the array is fixed.***

There are $N$ people wanting to enter a movie theatre, however the movie theatre has a weird rule, the people have to enter in order that they bought the tickets.

The people are indexed 1 through $N$ based on when they bought the ticket.

The $i$-th person shows up at time $A_i$, but he may have to wait for others till he is allowed to enter the movie theatre. Assume that you can enter instantly otherwise.

Given the times when the people will arrive, find the total wait time of everyone.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line contains a single integer $N$.
    * The second line contains $N$ integers - $A_1, A_2, \dots, A_N$.

### Output Format
For each test case, output on a new line the total wait time.

### Constraints
* $1 \le T \le 10^4$
* $2 \le N \le 2 \cdot 10^5$
* $1 \le A_i \le 10^9$
* The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
3
4
2 1 4 3
5
2 100 30 40 1
3
20 40 60
```
**Output:**
```
2
229
0
```
**Explaination:**  
**Test Case 1:** Person 2 needs to wait for Person 1 for 1 time unit before they both go in at time 2.  
Person 4 also needs to wait for Person 3 for 1 time unit.

## Waiting (Hard)
### Description:
***This is the hard version of the problem. Here, you can make at most one change to the array.***

There are $N$ people wanting to enter a movie theatre, however the movie theatre has a weird rule, the people have to enter in order that they bought the tickets.

The people are indexed 1 through $N$ based on when they bought the ticket.

The $i$-th person shows up at time $A_i$, but he may have to wait for others till he is allowed to enter the movie theatre. Assume that you can enter instantly otherwise.

You are given the times when the people will arrive, however, now you can change at most 1 value from this list (to some integer in $[1, 10^9]$). Find the the minimum total wait time possible.

### Input Format
* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line contains a single integer $N$.
    * The second line contains $N$ integers - $A_1, A_2, \dots, A_N$.

### Output Format
For each test case, output on a new line the total wait time after changing at most 1 $A_i$ value.

### Constraints
* $1 \le T \le 10^4$
* $2 \le N \le 2 \cdot 10^5$
* $1 \le A_i \le 10^9$
* The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.

### Examples:
**Input:**
```
3
4
2 1 4 3
5
2 100 30 40 1
3
20 40 60
```
**Output:**
```
1
39
0
```
**Explaination:**  
**Test Case 1:** We can change person 1 to also arrive at time 1, then person 2 does not need to wait. In this case, only person 4 will wait 1 time unit for person 3.

## *[Other unattempted questions can be viewed here!](https://www.codechef.com/START244B)*

# Unrated Questions:
## Point Calculation
### Description:
Your favourite team participated in the recent FIFA World Cup, and in the group stages, they won $A$ games, drew $B$ games, and lost $C$ games.

How many points did your team score? A win is awarded 3 points, a draw awarded 1 point, and a loss 0 points.

### Input Format
* The first and only line contains 3 integers - $A, B$ and $C$.

### Output Format
Output the number of points won by your team.

### Constraints
* $0 \le A, B, C \le 3$
* $A + B + C = 3$

### Examples:
#### Example 1:
**Input:**
```
3 0 0
```
**Output:**
```
9
```
**Explaination:**  
Your team won all their 3 games, hence making $3 \cdot 3 = 9$ points.

#### Example 2:
**Input:**
```
0 1 2
```
**Output:**
```
1
```
**Explaination:**  
Your team drew 1 game and lost the others, thus 1 point.