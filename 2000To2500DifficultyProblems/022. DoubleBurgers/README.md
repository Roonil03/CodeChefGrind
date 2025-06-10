# Double Burgers
## Rating 2072
### Description:
You have taken an eating challenge from Chef and now you have to eat exactly Y burgers. You will eat in the following way: 
- In the first minute you will eat exactly X burgers and every minute after that you will eat exactly twice the number of burgers you ate in the previous minute. 
- Since you can get tired of eating, Chef also allows you take a break from eating for exactly 1 minute. 
- When you start eating again after taking a break, your eating streak resets, i.e. in the first minute after the break you will eat exactly X burgers and every minute after that you will eat exactly double the burgers you ate on the previous minute. 

Let a<sub>1</sub>, a<sub>2</sub>,..., a<sub>k</sub> be the lengths of your eating streaks in minutes. Chef requires that all a<sub>i</sub> are pairwise distinct.  
Find the minimum number of minutes you need to eat exactly Y burgers or determine it is impossible to do so. 
### Input 
- The first line contains a single integer T denoting the number of test cases. The description of T test cases follows. 
- The first and only line of each test case contains two space-separated integers X and Y. 
### Output 
For each test case, print a single line containing one integer - the minimum number of minutes you need to eat exactly Y burgers, or -1 if it is impossible. 
### Constraints 
- 1 < T < 10 <sup>5</sup> 
- 1 ≤ X, Y < 10<sup>18</sup>

### Examples:
#### Example 1:
**Input:**
```
2
1 7
1 4
```
**Output:**
```
3
4
```