# Increase 2 consecutive characters
## Rating: 2171
### Description:
Chef has 2 strings A and B of equal length N. Both strings contain lowercase english alphabets only.

Chef can perform several moves on string A. In one move, Chef has to:
- Select an index i (1 ≤ i ≤ N-1).
- Replace `A[i]` with (`A[i] + 1`).
- Replace `A[i + 1]` with (`A[i+1] + 1`).

For example, if A = `abcze`, a valid move would be to select index `3`. This way the string becomes `abdae` after performing the move. Note that the value at an index is cyclically incremented. This means that, `a -> b`, `b -> c`,..., `z -> a`.

Chef has been asked to answer Q queries. Each query is of the form:
- LR: Given 1 <= L <= R ≤ N, Chef wants to know if it is possible to convert the substring `A[L, R]` to `B[L, R]` by performing the above mentioned move any number of times.

For each query, output in a single line Yes, if the conversion is possible using any number of moves. Otherwise, print No.

NOTE: Queries are independent. Thus, the original strings A and B would be retained to process next query. For each query solve for substrings `A[L, R]` and `B[L, R]` only. So valid values for i will be among L to R-1 only.

### Input Format
- The first line will contain T - the number of test cases. Then the test cases follow.
- First line of each test case contains two integers N, Q.
- Second line of each test case contains string A.
- Third line of each test case contains string B.
- Q-lines follow, where the ith line contains two integers L<sub>i</sub>R<sub>i</sub> - the ith query.
### Output Format
Output Q-lines, where the ith line contains the answer to the ith query. The answer is `Yes`, if the conversion is possible using any number of moves. Otherwise, the answer is `No`.  
You may print each character of the string in uppercase or lowercase (for example, the strings `yEs`, `yes`, `Yes` and `YES` will all be treated as identical).
### Constraints
- 1 <= T <= 1000
- 2 ≤ N ≤ 10<sup>5</sup>
- 1 <= Q ≤ 2 . 10<sup>5</sup>
- 1 <= L <= R <= N
- Sum of N over all test cases does not exceed 2 . 10<sup>5</sup>.
- Sum of Q over all test cases does not exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
1
5 3
abcdz
nbhea
2 2
1 3
4 5
```
**Output:**
```
Yes
No
Yes
```
**Explaination:**  
Test Case 1:  
- For the first query, the substring `A[2, 2]` = b is already same as `B[2, 2]` = b. Thus, the answer is Yes.
- For the second query, it can be proven that the substring `A[1, 3]` can never be made equal to `B[1, 3]` using any number of moves. 
- For the third query, the substring `A[4, 5]` = dz and `B[4, 5]` = ea. Applying the move on index 4, we get `A[4]` = e and `A[5]` = a. Hence, after one move, `A[4, 5]` = `B[4, 5]` Thus, the answer is Yes in this case.