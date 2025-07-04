# Chef Goes Shopping
## Rating: 2164
### Description:
MoEngage goes shopping with Chef. There are N ingredients placed on a line, numbered 1 to N from left to right.  

At any point in time, MoEngage can choose the ingredient numbered z and do one of the following operations:
- If the chosen ingredient is not the leftmost amongst the remaining ingredients, remove the left neighbor. This operation costs L<sub>x</sub> coins.
- If the chosen ingredient is not the rightmost amongst the remaining ingredients, remove the right neighbor. This operation costs R<sub>x</sub> coins.

Note: MoEngage can perform at most one operation of one type on a particular ingredient. For example, you can't remove elements from the left of ingredient z two times. However, you can remove one ingredient each from the left and from the right of ingredient z.

MoEngage performs the operations until only one ingredient is left.  
Find the minimum number of coins he needs to pay so that only one ingredient is left.

### Input Format
- The first line contains a positive integer T - the number of test cases. Then T test cases follow.
- The first line of each test case contains a single integer N - the number of ingredients.
- The second line of each test case contains N integers L<sub>1</sub>, L<sub>2</sub>,..., L<sub>N</sub> the number of coins required to remove the ingredient from the left of an ingredient.
- The third line of each test case contains N integers R<sub>1</sub>, R<sub>2</sub>,..., R<sub>N</sub> the number of coins required to remove the ingredient from the right of an ingredient.
### Output Format
For each test case, output in a new line, one integer - the minimum number of coins MoEngage needs to pay so that only one ingredient is left.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N <= 2 . 10<sup>5</sup>
- 1 <= L<sub>i</sub>, R<sub>i</sub> ≤ 10<sup>9</sup>
- Sum of N over all test cases does not exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
1
3
4
4
2 1 3 2
4 2 4 3
7
3 10 5 2 8 3 9
8 6 11 5 9 13 7
```
**Output:**
```
0
5
32
```
**Explaination:**  
Test case 1:  
The number of ingredients is already 1. Thus, MoEngage has to spend 0 coins.

Test case 2:  
Initially, the list of ingredients is `[1, 2, 3, 4]`. MoEngage can apply the operations in the following way:
- Apply the first operation on ingredient 4. Coins required for this are L<sub>4</sub> = 2 The updated list of ingredients is `[1, 2, 4]`. 
- Apply the second operation on ingredient 2. Coins required for this are R<sub>2</sub> = 2 The updated list of ingredients is `[1, 2]`.
- Apply the first operation on ingredient 2. Coins required for this are L<sub>2</sub> = 1 The updated list of ingredients is `[2]`.

Thus, the total number of coins required is 2 + 2 + 1 = 5 It can be shown that MoEngage cannot achieve a single ingredient in less than 5 coins.

