# Segment Three
## Rating: 2089
### Description:
Today is an important day for Chef Hammoda as a lot of customers will be visiting his restaurant.  
The restaurant contains N tables, and each customer will sit at one table.

Initially, Chef Hammoda plans for the dish served to the i-th table to contain A<sub>i</sub> ingredients.  
However, he thinks that a group of three dishes is delicious if the surn of the number of ingredients of the three dishes is divisible by 3.

Hammoda wants every consecutive group of 3 tables to have delicious dishes. To achieve this, he can add as many ingredients as he wants to each dish.  
Help him determine the minimum number of additional ingredients needed to make every group of three consecutive tables delicious.

More formally, solve the following problem:
- You are given an array A = [A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>] of length N. You're allowed to increment each element however much you like.
- Find the minimum number of increments needed so that in the resulting array, the sum of every three consecutive elements is divisible by 3
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of two lines of input.
    - The first line of each test case contains one integer N- the number of tables.
    - The next line contains N space-separated integers A1, A2,..., AN number of ingredients initially present in the ath dish.
### Output Format
For each test case, print on a new line a single integer: the minimum number of increments needed to make every length-3 subarray of A have a sum that's divisible by 3.
### Constraints
- 1< T <10<sup>5</sup>
- 3 < N < 10<sup>5</sup>
- 1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>
- The sum of N over all test cases won't exceed 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
3
1 2 3 
10
2 3 10 25 12 7 10 12 1 46
7
10 12 15 16 17 200 132
```
**Output:**
```
0
3
4
```
**Explaination:**  
Test case 1:  
There is only one subarray of length 3, and its sum already divisible by 3.

Test case 2:  
The array after increments can be:  
[2, 3, 10, <b>26</b>, 12, 7, **11**, 12, 1, **47**]  
for a total of 3 increments (the elements underlined were all incremented by 1 each). Every subarray of length 3 now has a sum that's divisible by 3.  
It can be proved that it's not possible to achieve this using two or fewer increments.

Test case 3:  
The array after increments can be:  
[10, 12, **17**, 16, **18**, 200, **133**]  
for a total of 4 increments.  
Here, 15 was incremented twice to reach 17, and the other two elements were incremented once each