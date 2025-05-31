# Starters 188
## Contest Division: Div 4
## Position: 670 / 14102

## <b>Questions: </b>
## Red and Blue Gems
### Description:
There are R red gems and B blue gems. Each red gem can be sold for P coins, while a blue gem can be sold for Q coins.   
It is not allowed to take gems of both colours. You may either take all of the red gems, or take all of the blue gems.   
Find the maximum number of coins you can obtain by taking some of the gems and then selling them.  
### Input Format 
The first and only line of input contains 4 integers - R, B, P, Q. 
### Output Format 
For each test case, output on a new line the maximum number of coins you can make. 
### Constraints 
- 1 < R, B, P, Q ≤ 10.
### Examples:
#### Example 1:
**Input:**
```
2 3 5 3
```
**Output:**
```
10
```
**Explaination:**  
Taking the red gems would get you 2.5 = 10 coins, while taking the blue gems would get you 3 * 3 = 9 coins. Hence you should take the red gems.

#### Example 2:
**Input:**
```
1 1 6 7
```
**Output:**
```
7
```
**Explaination:**  
There is only 1 red gem and 1 blue gem. The blue gem sells for more, so you should take it, and get 7 coins.

## Train Even or Odd
### Description:
Chef will be going to the gym for some of the next N days. On the i-th day, he is free to go to the gym for A<sub>i</sub> hours.  
Chef does not want to go the gym every day, because he is lazy. But he also does not want to miss too many days without going to the gym once.   
Thus, he decides that he will go every alternate day. He may go on days 1, 3, 5,... or days 2, 4, 6, ....   
Find the maximum total hours he can invest in the gym. 
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of multiple lines of input. 
    - The first line contains N - the number of days. 
    - The second line contains N integers - A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>, the number of hours he is free for on the i-th day. 
### Output Format 
For each test case, output on a new line the maximum total hours he can invest. 
### Constraints 
- 1 < T < 100 
- 1 ≤ N ≤ 100 
- 1 < A<sub>i</sub> ≤ 100 

### Examples:
#### Example 1:
**Input:**
```
3
3
2 5 4
4
6 2 1 7
1
5
```
**Output:**
```
6
9
5
```
**Explaination:**  
Test Case 1 :  
Chef can train on days 1,3 to spend a total of 6 hours at the gym. On the other hand, day 2 alone would only be 5 hours.

## Subset Sum 3
### Description:
You are given an array A of N integers. Determine if their exists a non-empty subsequence of A such that the sum is divisible by 3. 
Print Yes or No accordingly. You do not need to print an example of such a subset. 
B is said to be a subset of A if B can be formed by deleting some elements in A without rearranging the order of the remaining elements. For example, `[1, 2]`, `[1, 1, 2, 3]`, `[2, 3]` are valid subsequences of `[1, 1, 2, 3]` but `[2, 1]` or `[2, 2]` is not. 
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of multiple lines of input. 
    - The first line of each test case contains N - the size of the array. 
    - The second line contains N integers - A<sub>1</sub>, A<sub>2</sub>,..., Α<sub>Ν</sub>. 
### Output Format 
- For each test case, output on a new line `Yes` or `No` depending on whether there exists a non-empty subsequence with sum divisible by 3 or not. 
- Each character can be printed in either case, i.e. `yes`, `YES` and `yES` will all be accepted as positive responses.

### Constraints:
- 1 <= T <= 100
- 1 <= N <= 100
- 1 <= A<sub>i</sub> <= 100

### Examples:
#### Example 1:
**Input:**
```
6
1
2
1
3
2
2 1
2
4 4
4
1 5 1 5
2
3 3
```
**Output:**
```
No
Yes
Yes
No
Yes
Yes
```
**Explaination:**  
Test Case 1 :  
There is only one element, which is not divisible by 3.

Test Case 2 :  
There is only one element, which is divisible by 3.

Test Case 3 :  
We can take the whole array `[1,2]` as that has a sum of 3.

## Yet Another Monsters Problem
### Description:
There are N monsters, with the i-th monster having A<sub>i</sub> hitpoints. A monster is said to be alive when he has a positive number of hitpoints.  
Your job is to kill all monsters. To do this, you can do either of the following 2 actions: 
- Kill a monster completely in 1 second, i.e. choose some monster X who is alive and then reduce his hitpoints to 0. 
- Damage all alive monsters by 1 hitpoint. This also takes 1 second. Some monster's may die as a result of their hitpoints becoming 0. 

Find the minimum time (in seconds) to kill all monsters completely. 
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of multiple lines of input. 
- The first line of each test case contains N - the number of monsters. 
- The second line contains N integers - A1, A2,..., AN, the hitpoints of the monsters. 
### Output Format 
- For each test case, output on a new line the minimum time to kill all monsters. 
### Constraints 
- 1<T< 10<sup>4</sup> 
- 1≤ N ≤2.10<sup>5</sup> 
- 1 < A<sub>i</sub> ≤ 10<sup>9</sup> 
- The sum of N over all test cases does not exceed 2.10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
3
1 5 1
2
1 1
3
5 6 7
```
**Output:**
```
2
1
3
```
**Explaination:**  
Test Case 1:  
First, we damage all monsters by 1 hitpoint. This kills monsters 1 and 3, and leaves monster 2 with 4 hitpoints. Then, we attack monster 2 alone and kill him completely in 1 second. Thus, we killed all monsters in 2 seconds.

## K Boxes
### Description:
There are N thieves numbered 1, 2, ..., N.  
The thief numbered i has a level of A; and has B₁ gold coins with him. All the levels A; are distinct integers in the range 1 to N. A thief i can steal from another thief j if and only if his level is greater than the level of the other thief, i.e. A₁ > Aj.  
A single thief can only try to steal from at most K other thieves since otherwise he will be caught for sure. Also, he cannot steal from the same thief twice.  
For each thief, you want to know the maximum number of gold coins they can steal. The answer for each thief should be independent of the others, and you may assume, when calculating the answer for a particular thief, that other thieves won't steal from anybody and also not interfere in his plan.  
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of multiple lines of input. 
    - The first line of each test case contains N and K - the number of thieves and boxes, and the maximum stealing parameter. 
    - The second line contains N integers - A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>, the levels of the thieves. 
    - The third line contains N integers - B<sub>1</sub>, B<sub>2</sub>,..., B<sub>N</sub>, the number of gold coins each thief has. 
### Output Format 
For each test case, output N integers - the maximum amount each thief can steal for thieves 1, 2,..., N in this order.

### Constraints:
- 1 <= T <= 10<sup>4 </sup>
- 1 <= K < N <= 2 * 10<sup>5 </sup>
- 1 <= A<sub>i</sub> <= N 
- A<sub>i</sub> !=  A<sub>j</sub> for i≠j 
- 1 <= B<sub>i</sub> <= 10<sup>9 </sup>
- The sum of N over all test cases does not exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
2
3 1
2 3 1
10 50 20
5 3
4 2 5 3 1
45 42 37 55 29
```
**Output:**
```
20 20 0
126 29 142 71 0
```
**Explaination:**  
Test Case 1:
- Thief numbered 1 steals from thief numbered 3 since that is the only thief he can steal from. 
- Thief numbered 2 can steal from both thieves 1 and 3, but he is limited to stealing from at most one person. That's why he chooses thief 3 since he has more gold coins. 
- Thief numbered 3 cannot steal from anybody.



#### <i><a href="https://www.codechef.com/START188D">Other unattempted questions can be viewed here!</a></i>