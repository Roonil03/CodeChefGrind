# Starters 190
## Contest Division: Div 3
## Position: 1437 / 2746
## Questions:
## Number Reduction:
### Description:
Chef has an integer X with him.  
He can perform the following two types of modifications to it, however many times he likes and in any order:
- If X > 3, subtract 3 from X.
- If X is even, divide X by 2.

Find the minimum possible value X can take after performing the given operations several times.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The first and only line of each test case will contain a single integer X.
### Output Format
For each test case, output on a new line the minimum value X can reach.
### Constraints
- 1 <= T <= 100
- 1 <= X <= 100

### Examples
#### Example 1:
**Input:**
```
4
2
3
4
5
```
**Output:**
```
1
3
1
1
```
**Explaination:**  
Test case 1:  
Initially, X = 2 Since it's even, Chef can divide it by 2 and make X = 1 which is the minimum possible.

Test case 2:  
Initially, X = 3 It's not even, so Chef can't divide it by 2. It's also not > 3, so Chef can't subtract 3 from it.  
So, X can't be changed, and its initial value, 3, is the minimum it can reach.

Test case 3:  
Initially, X = 4 Chef can subtract 3 from it to obtain X = 1 which is minimum.

Test case 4:  
Initially, X = 5 Chef can subtract 3 from it to obtain X = 2 and then divide that by 2 to obtain X = 1

## Light All
### Description:
Chefland's jail has N prison cells, all arranged in a row.  
Above each prison cell is a light.  
Each light can be made to face either left or right (but not both).  
The lights aren't very very strong, and so can only light up adjacent cells. In particular,
- If the light at index 1 is facing right, it will light up cells i and i + 1 (the latter only if i + 1 <= N)
- If the light at index i is facing left, it will light up cells i and i-1 (the latter only if i - 1 >= 1 )

Unfortunately, due to a lack of maintenance, not all of the lights are working.  
You are given a binary string S of length N, where S<sub>i</sub> = 1 means the i-th light is working, and S<sub>i</sub> = 0 means it's not working.

Is it possible to choose the directions for all the working lights, so that every cell is lit up by at least one light?
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of two lines of input.
    - The first line of each test case contains a single integer N-the number of cells.
    - The second line contains a binary string S of length N, denoting information about which lights work.
### Output Format
For each test case, output on a new line the answer: Yes if there's a way to choose directions for the lights and light up every cell, and No otherwise.  
Each character of the output may be printed in either uppercase or lowercase, i,e, the strings NO, No, no, and no will all be treated as equivalent.
### Constraints
- 1 <= T <= 100
- 1 <= N <= 100
- S<sub>i</sub>∈ {0,1}

### Examples:
#### Example 1:
**Input:**
```
4
5
10011
5
01010
6
110100
7
0110011
```
**Output:**
```
Yes
No
No
Yes
```
**Explaination:**  
Test case 1:  
The lights at positions 1, 4, 5 are working. Consider the following configuration:
- Light 1 faces right. This lights up cells 1, 2.
- Light 4 faces left. This lights up cells 3, 4.
- Light 5 faces left. This lights up cells 4, 5.
- All cells are now lit up.

Test case 2:
The lights at positions 2, 4 are active.  
To light up cell 1, the light at 2 must face left.  
To light up cell 5, the light at 4 must face right.  
But then this leaves position 3 unlit.  
So, it's impossible to light up all the cells.  

Test case 3:  
There's no way to light up the last cell.  

Test case 4:  
The lights at positions 2, 3, 6, 7 are active.  
One valid configuration is to make them face directions left, right, left, right, respectively.  

## Parry It! (Easy)
### Description:
**This is the easy version of the problem. Here, you only need to find the maximum number of parries possible.**

Chef is playing a videogame, and fighting a particularly difficult boss.  
After several tries, Chef has learned the attack patterns of the boss and knows exactly what to expect.  

The boss will perform N attacks, in order. Each attack can be either dodged or parried.  
The skill level required to dodge the i-th attack is A<sub>i</sub>, and the skill level required to parry the i-th attack is B<sub>i</sub>.  
Dodging is easier than parrying, so A<sub>i</sub> <= B<sub>i</sub> holds for all i.  

Chef's initial skill level is X. The fight will proceed as follows:
- The boss will use each of its attacks in order from 1 to N.
- For the i-th attack:
    - If X < A<sub>i</sub>, Chef will get hit by the i-th attack and lose the fight.
    - If A<sub>i</sub> <= X < B<sub>i</sub>, Chef can only dodge the attack. X does not change.
    - If X >= B<sub>i</sub>, Chef can choose to either dodge or parry the attack.  
If the attack is parried, X will decrease by 1. If the attack is dodged, X will not change.

Chef wins the fight if he manages to either dodge or parry every attack.

<sub>Chef finds parrying much cooler than dodging, so he wants to parry as many attacks as possible.  
Let M denote the maximum number of attacks Chef can parry, while also ensuring that he wins the fight.</sub>

Your task is to find M.

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of three lines of input.
    - The first line of each test case contains two space-separated integers N and X - the number of attacks and Chef's initial skill level.
    - The second line contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> the skill levels of dodging each attack.
    - The third line contains N space-separated integers B<sub>1</sub>, B<sub>2</sub>,..., B<sub>N</sub> the skill levels of parrying each attack.
### Output Format
For each test case, output on a new line the answer: the maximum number of parries Chef can perform.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N <= 2 . 10<sup>5</sup>
- 1 <= A<sub>i</sub> ≤ B<sub>i</sub>≤ 109 
- max(A) ≤ X ≤ 10<sup>9</sup>
- The sum of N over all test cases won't exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
4
4 11
7 2 5 1
10 3 10 4
4 10
7 2 5 1
10 3 10 4
3 6
2 3 6
5 4 7
3 6
2 6 3
5 7 4
```
**Output:**
```
3
3
0
1
```
**Explaination:**  
Test case 1:  
One optimal sequence is as follows: Parry the second attack. Now X = 10  
Dodge the first attack.  
Parry the third attack. Now X = 9  
Parry the last attack. Now X = 8  
Three attacks were parried. It's not possible to parry all four.  

Test case 2:  
The first, second, and fourth attacks can be parried, while the third is to be dodged.  

Test case 3:  
It's not possible to parry any attack: if the first or second attack are parried, the third cannot be even dodged; and Chef skill is too low to parry the third attack.

Test case 4:  
Only the last attack can be safely parried, the rest must be dodged.


## <a href="https://www.codechef.com/START190C">Other unattempted questions can be viewed here!</a>