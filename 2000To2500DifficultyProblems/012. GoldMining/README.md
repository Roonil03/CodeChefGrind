# Gold Mining
## Rating: 2033
### Description:
Chef and Chefu are working as gold miners. There are a total of N gold mines, numbered 1 through N. For each valid i, the i-th gold mine contains G<sub>i</sub> gold in total; if only Chef worked in it, it would take him A<sub>i</sub> days to completely mine it, while if only Chefu worked in it, it would take him B<sub>i</sub> days.  
Each of our miners may only work in one mine at a time, but they may decide to start working in another mine at any time (even in the middle of some day), any number of times. They also choose the mines to work in independently from each other and they may work in the same mine at the same time. Mining gold is a continuous process, i.e. if a miner works for t days (where t is a real number) in a mine where this miner has mining speed g gold per day, then he will mine g*t gold. Obviously, it is impossible to work in a mine after no gold remains in it. For example, if a gold mine contains 30 gold and Chef needs 2 days to completely mine it, but he spends 1 day in it, then he will mine 15 gold; if Chefu needs 1 day to completely mine the same gold mine, and both Chef and Chefu start working in this mine at the same time, it will be empty after 2/3 days - Chefu will mine 20 gold, while Chef will mine 10 gold.  
At each point of time, both Chef and Chefu know the gold mine in which the other miner is working. Each of them wants to gather the maximum amount of gold for himself. Find the amounts of gold the miners will have if they both act optimally. 

### Input 
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows. 
- The first line of each test case contains a single integer N. 
- N lines follow. For each valid i, the i-th of these lines contains three space-separated integers G<sub>i</sub>, A<sub>i</sub> and B<sub>i</sub>.

### Output 
For each test case, print a single line containing two space-separated real numbers - the amount of gold mined by Chef and the amount of gold mined by Chefu. Your answer will be considered correct if the absolute or relative error of each amount of gold does not exceed 10<sup>-6</sup>.

### Constraints 
- 1 <= T <= 1000 
- 1 <= N <= 10 <sup>5</sup> 
- 1 <= G<sub>i</sub> <= 10 <sup>5</sup> for each valid i 
- 1 <= A<sub>i</sub> <= 10 <sup>5</sup> for each valid i 
- 1 <= B<sub>i</sub> <= 10 <sup>5</sup> for each valid i 
- the sum of N over all test cases does not exceed 10<sup>6 </sup>
### Subtasks 
- **Subtask #1** (50 points): `N <= 2` 
- **Subtask #2** (50 points): original constraints

### Examples:
#### Example 1:
**Input:**
```
2
1
30 2 1
3
10 1 1
20 2 2
30 3 3
```
**Output:**
```
10.00000 20.00000
30.00000 30.00000
```