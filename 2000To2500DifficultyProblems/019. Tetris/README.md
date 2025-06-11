# Tetris
## Rating: 2062
### Description:
Chef and Chefina are playing a game of Tetris together. In a single move, a player can either clear 1, 2, 3, or 4 lines of blocks. Clearing 4 lines in a single move is called getting a "Tetris".  
Chef and Chefina take turns playing, with Chef starting first.   
Whenever the current player clears only one line, the turn shifts to the other player; otherwise it remains with the current player.   
They will stop playing as soon as at least I lines are cleared in total. That is, the game stops when the sum of the number of lines cleared by both the players is at least L.   

Chef wants to end the game in style, and so would like to be the one who finishes the game and do so by getting a "Tetris", i.e, by clearing 4 lines.   

How many sequences of moves are there in which this happens? 

The number of sequences may be large, so print it modulo 10<sup>9</sup> + 7 
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each of the next T lines contains one integer L - the number of lines to be cleared. 
### Output Format 
For each test case, output on a new line the total number of ways in which Chef can finish the game by getting a "Tetris", modulo 10<sup>9</sup> + 7 
### Constraints 
- 1 <= T <= 10<sup>5</sup>
- 1 <= L <= 10<sup>5</sup>

### Examples:
#### Example 1:
**Input:**
```
4
3
2
4
100000
```
**Output:**
```
3
1
4
246691813
```
**Explaination:**  
Test case 1:  
For L = 3 there are 3 possible ways such that Chef can finish the game with a "Tetris": 
- Clear 4 lines immediately. 
- Clear 2 lines first, then 4. 
- Clear one line, transferring the turn to Chefina. Chefina then clears one line, transferring the turn back to Chef, who then gets a "Tetris". 

Test case 2:  
For L = 2 the only possibility is that Chef gets a "Tetris" on the very first move. 

Test case 3:  
For L = 4 there are 4 valid sequences of moves: `(2, 4)`, `(1, 1, 4)`, `(3, 4)`, `(4)`.