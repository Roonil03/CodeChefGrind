# Starters 225
## Contest Division: Division 2
## Position: 862

# Questions:
## All Even
### Description:
There are $N$ numbers written on a blackboard from left to right: $A_1, A_2, \dots, A_N$ are not necessarily distinct.

You may apply the following three-step procedure, as long as $N \geq 2$:

1. Add $A_N$ to $A_{N-1}$.
2. Erase $A_N$ from the blackboard.
3. Finally, reduce $N$ by 1.

In simpler words, you add the last value to the second-last value; erase the last value from the blackboard.

You like even numbers, so would like to know: is it possible to repeatedly perform this three-step procedure several (possibly zero) times, so that eventually there are only even numbers written on the blackboard?

### Input Format:
- The first line consists of a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input.
- The first line of each test case contains a single integer $N$ — the initial number of values on the blackboard.
- The second line contains $N$ space-separated integers $A_1, A_2, \dots, A_N$ — the values on the blackboard.

### Output Format
For each test case, output on a new line either **YES** or **NO**, depending on whether it's possible to make every value on the blackboard even or not.  
Each character of every value may be printed in either uppercase or lowercase, i.e. strings **NO**, **no**, and **No** will be treated as equivalent.

### Constraints
- $1 \leq T \leq 100$
- $2 \leq N < 100$
- $1 \leq A_i \leq 100$

### Examples:
#### Example 1:
**Input:**
```
4
3
2 1 1
3
1 2 3
4
1 3 1 2
5
2 2 1 4 1
```
**Output:**
```
Yes
Yes
No
Yes
```
**Explaination:**
Test Case 1:   
Initially, $A = [2,1]$  
Perform the given operation once, which adds $A_3$ to $A_2$ and then deletes $A_3$ from the array.    
From the array $[2,1]$, perform the given operation once, which adds $A_3$ to $A_2$ and then deletes $A_3$ from the array.  
All elements are now $A = [2]$, wanted.

Test Case 2: Initially, $A = [1,2,3]$, wanted  
- Perform the operation once. Now, $A = [1,5]$, all elements are odd.
- Perform the operation again. Now, $A = [6]$, and its elements are even.

Test Case 3:  
It can be shown that $A$ always contains at least one odd number, no matter what we do. Thus, the array cannot be turned to even, as wanted.


## Maximum Score
### Description:
Chef is participating in a tournament.  
He must face $N$ opponents.  
If he wins against the $i$-th opponent, he will receive $A_i$ coins, whereas if he loses, he will receive $B_i$ coins.  
It's guaranteed that $A_i \geq B_i$.  

Chef doesn't want to bring too much attention to himself, so he decides that he will lose at least once.  
Under this constraint, what's the maximum total number of coins he can receive?

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first line of each test case contains a single integer $N$ — the number of opponents Chef will face.
- The second line contains $N$ space-separated integers $A_1, A_2, \dots, A_N$.
- The third line contains $N$ space-separated integers $B_1, B_2, \dots, B_N$.

### Output Format
For each test case, output on a new line the answer: the maximum number of coins Chef can obtain after losing at least once.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N \leq 100$
- $1 \leq B_i \leq A_i \leq 100$

### Examples:
#### Example 1:
**Input:**
```
4
3
5 3 8
3 3 4
1
10
5
4
6 3 8 7
5 1 5 1
4
9 8 7 6
9 8 7 6
```
**Output:**
```
16
5
23
30
```
**Explaination:**  
Test Case 1  
It's optimal for Chef to win first match, lose second match, and win third match.  
This way, he gets $A_1 + B_2 + A_3 = 3 + 5 + 8 = 16$ coins.

Test Case 2   
There's only one match, so Chef has no choice but to lose, receiving 5 coins.

### *[Other unattempted questions can be viewed here!](https://www.codechef.com/START225B)*