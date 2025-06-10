# Starters 189
## Contest Division: Div 4
## Position: 689 / 12999
## Questions:
## Pizza Party
### Description:
Chef is hosting a pizza party and has invited A boys and B girls. Don't forget to include Chef himself; he is a boy.  
It is known that a boy eats 4 slices of pizza while a girl eats 3 slices of pizza. Further, a single pizza comes with 8 total slices of pizza.  
How many pizzas does Chef need to ensure nobody remains hungry? It is fine to waste some of the food. 
### Input Format 
- The first and only line of input contains 2 integers - A and B, the number of boys and girls invited to the party. 
### Output Format 
- For each test case, output on a new line the number of pizzas needed. 
### Constraints 
- 0 ≤ A, B ≤ 100

### Examples:
#### Example 1:
**Input:**
```
2 0
```
**Output:**
```
2
```
**Explaination:**  
There are 2 other boys invited apart from Chef, so a total of 3 boys. They need at least 12 slices of pizza and 2 pizzas will have 16 slices, so it is sufficient.
### Example 2:
**Input:**
```
0 4
```
**Output:**
```
2
```
**Explaination:**  
There is only one boy, Chef himself, and 4 girls. They will eat a total of 16 slices which is exactly the number of slices in 2 pizzas.

#### Example 3:
**Input:**
```
100 100
```
**Output:**
```
88
```

## Distinct 2 Subarray
### Description:
An array is called good if it has exactly 2 distinct elements. For example, `[1, 1, 2, 1, 2]`, `[5, 3]` are good but `[1, 2, 3]` and `[1, 1, 1]` are not.  
You are given an array A of N elements and you should find the length of the shortest possible good subarray† of A. If no good subarray exists, print -1 instead.  
<sub>† B is said to be an subarray of A if B can be formed by deleting a (possibly empty) prefix of A and a (possibly empty) suffix of A. For example, `[4, 1, 3]`, `[3, 5]` and `[4, 1, 3, 5, 2]` are subarrays of `[4, 1, 3, 5, 2]` but `[5, 3]` and `[1, 5]` are not. </sub>
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of multiple lines of input. 
- The first line of each line contains N - the length of the array. 
- The second line contains N integers - A<sub>1</sub>, A<sub>2</sub>,..., Α<sub>N</sub>. 
### Output Format 
- For each test case, output on a new line the length of the shortest good subarray of A, or -1 if none exist. 
### Constraints 
- 1 < T < 100 
- 1 ≤ N ≤ 100 
- 1 ≤ A<sub>i</sub> ≤ 100

### Explainations:
#### Example 1:
**Input:**
```
3
2
5 3
1
1
4
7 7 5 5
```
**Output:**
```
2
-1
2
```
**Explaination:**  
Test Case 1:  
`[5, 3]` itself is good, and is the shortest possible good subarray of A. 

Test Case 2:  
There are no good subarrays because the only subarray contains 1 distinct element only.

## Nutrition Cost
### Description:
There are N different food items, each providing an essential vitamin A, and costing B₁. There is an integer parameter C which represents the value of a single vitamin to you.   
You will buy some of the food items to maximize C . X - Y (Cmultiplied by X minus Y), where X represents the number of distinct vitamins eaten, and Y represents the total cost of all the food items. Find this maximum possible value. It is also possible to buy no food item at all, in which case the answer is simply 0. 
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of multiple lines of input. 
 The first line of each test case contains N and C - the number of food items and the value of a vitamin. 
- The second line contains N integers - A<sub>1</sub>, A<sub>2</sub>,..., Α<sub>Ν</sub>. 
- The third line contains N integers - B<sub>1</sub>, B<sub>2</sub>,..., B<sub>N</sub>. 
### Output Format 
For each test case, output on a new line the maximum possible value of C. X - Y as explained in the statement. 
### Constraints 
- 1 <= T <= 100 
- 1 <= N <= 100 
- 1 <= A<sub>i</sub> <= N 
- 1 <= B<sub>i</sub>, C <= 100

### Examples:
#### Example 1:
**Input:**
```
3
3 5
1 2 3
1 1 1
3 1
1 2 3
2 2 2
5 6
3 4 2 2 3
7 4 1 1 8
```
**Output:**
```
12
0
7
```
**Explaination:**  
Test Case 1 :  
It is optimal to buy all the food items. You will get 3 distinct vitamins and it will cost you a total of 3. Thus, your value is 5 ⋅ 3 − 3 =12.

Test Case 2 :  
It is optimal to not buy any food item.

## Create Binary String
## Description:
You want to make a binary string S of length N. You will be paid according to the following rules: 
- For each occurrence of the subsequence `0` in S, you are paid A coins. 
- For each occurrence of the subsequence `1` in S, you are paid B coins. 
- For each occurrence of the subsequence `01` in S, you are paid C coins. 
- For each occurrence of the subsequence `10` in S, you are paid D coins. 

Note that the occurrence does not need to be continuous, i.e. `0101` has 3 occurrences of `01` not 2. Thus, for the string `0101` you get 2 A + 2B+ 3C + D coins. 

You want to maximize the number of coins you get. Find this maximum value. 
### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of multiple lines of input. 
    - The first and only line of input contains 5 integers - N, A, B, C, D. 
### Output Format 
- For each test case, output on a new line the maximum number of coins you can get. 
### Constraints 
- 1 < T <100 
- 1 < N, A, B, C, D < 100
### Examples:
#### Example 1:
**Input:**
```
3
2 2 1 3 4
4 2 2 1 1
100 67 72 24 32
```
**Output:**
```
7
12
86950
```
**Explaination:**  
Test Case 1:  
The optimal string is 10, which pays 2 + 1 + 4 = 7 coins. 

Test Case 2:  
The optimal string is 0101, which pays 2.2 + 2 * 2 + 3 * 1 + 1 * 1 = 12.