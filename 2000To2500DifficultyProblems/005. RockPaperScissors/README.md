# Rock Paper Scissors
## Rating: 2013
### Description:
There are N players standing in a line, indexed 1 to N from left to right. They all play a game of Rock, Paper, Scissors. Each player has already decided which move they want to play. You are given this information as a string S of length N, i.e, 
- S<sub>i</sub> is equal to R if player i will play Rock. 
- S<sub>i</sub> is equal to P if player i will play Paper. 
- S<sub>i</sub> is equal to S if player i will play Scissors. 

Let W(i, j) denote the move played by the winner if players i, i + 1, ..., j compete in order from left to right. That is, 
- First, players i and i + 1 play a game 
- The winner of this game plays against player i + 2 
- The winner of the second game plays against player i + 3  
.  
.  
.  
- The winner of the first j - i - 1 games plays against player j, and the move played by the winner of this game is declared to be W (i, j). 

If i = j, then player i is considered to be the winner and W(i, 1) = S<sub>i</sub>.  
Your task is to find the value of W(i, N) for all i from 1 to N. 

*Note:*
If a person with index i and index j (i < j) play against each other, then: 
- If S<sub>i</sub> != S<sub>j</sub>, the winner is decided by classical rules, i.e, rock beats scissors, scissors beats paper, and paper beats rock.
- If S<sub>i</sub> = S<sub>j</sub>, the player with lower index (in this case, 2) wins. 

### Input Format 
- The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows. 
- The first line of each test case contains a single integer N, the number of players. 
- The second line of each test case contains the string S of length N, denoting the moves chosen by the players. 
### Output Format 
For each test case, print a single line containing a string of length N, whose i<sup>th</sup> character is W(i, N). 
### Constraints 
- 1 < T < 10<sup>5 </sup>
- 1 < N < 5 . 10<sup>5</sup> 
- S<sub>i</sub>is either R, Por S 
- Sum of N over all test cases doesn't exceed 5 . 10<sup>5</sup>

### Subtasks 
#### Subtask 1 (10 points): 
- 1 < T < 1000 
- 1 < N < 5000 
- Sum of N over all test cases doesn't exceed 5000 
#### Subtask 2 (90 points): 
Original constraints

### Examples:
#### Example 1:
**Input:**
```
2
1
S
4
SSPR
```
**Output:**
```
S
RRPR
```
**Explaination:**  
Test Case 1.  
- W(1, 1) = S as there is only one player. 

Test Case 2.  
- For W(1, 4) the game is played as follows: 
    - Player 1 and 2 compete, player 1 wins. 
    - Player 1 and 3 compete, player 1 wins. 
    - Player 1 and 4 compete, player 4 wins. 
    - Hence, we print W(1, 4) = S_{4} = R 
- For W(3, 4) the game is played as follows: 
    - Player 3 and 4 compete, player 3 wins. 
    - Hence, we print W(3, 4) = S_{3} = P