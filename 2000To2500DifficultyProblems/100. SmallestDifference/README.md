# Smallest Difference
## Rating: 2421
## Description:
Consider a grid $A$ with dimensions $N \times M$, such that all elements of the grid are distinct.

A remote controlled car is present at cell $(1, 1)$. Chef and Chefina will alternatively move the car with Chef starting first.

* If it is Chef's turn, he will move the car to either right or down by 1 cell. He moves the car to the cell having **larger** element.
* If it is Chefina's turn, she will move the car to either right or down by 1 cell. She moves the car to the cell having **smaller** element.

The car stops once it reaches the cell $(N, M)$.

Let us denote the largest element visited by the car by $A_{max}$ and the smallest element as $A_{min}$. Then, the score of the grid is defined as $A_{max} - A_{min}$.

Charlie has an array $B$ containing $N \cdot M$ distinct elements. He wants to arrange the elements as a grid of size $N \times M$ such that the score of the grid is **minimised**.

Help Charlie to construct any such grid.

**Note:** Please use fast I/O for input and pypy for python submissions.

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line of each test case contains two space-separated integers $N$ and $M$ — dimensions of the grid $A$.
    * The next line contains $N \cdot M$ distinct elements denoting the array $B$.

### Output Format

For each test case, output $N$ lines each containing $M$ spaced integers denoting the grid $A$.

If there are multiple possible answers, print any of them.

### Constraints

* $1 \le T \le 10^4$
* $2 \le N, M \le 1000$
* $1 \le B_i \le 10^9$
* All elements of the array $B$ are distinct.
* Sum of $N \cdot M$ over all test cases do not exceed $10^6$.

### Examples:
#### Example 1:
**Input:**
```
2
2 2
5 10 20 40
3 2
2 6 4 1 9 20
```
**Output:**
```
10 5 
20 40 
2 4 
1 6 
20 9 
```
**Explaination:**  
Test case 1:  
The car starts from $(1, 1)$. Let us consider the moves based on the grid $[[10, 5], [20, 40]]$.
* In Chef's turn, he will move the car to $(2, 1)$ since $A_{(2,1)} > A_{(1,2)}$.
* In Chefina's turn, she will move the car to $(2, 2)$ as it is the only available choice.  

Thus, the car covers the elements $[10, 20, 40]$. The largest element in the path is $40$ while the smallest element is $10$. Thus, the score is $40 - 10 = 30$. It can be shown that this is the minimum possible score that can be achieved in any configuration of grid.

Test case 2:  
The car starts from $(1, 1)$. Let us consider the moves based on the grid
$[[2, 4], [1, 6], [20, 9]]$.
* In Chef's turn, he will move the car to $(1, 2)$ since $A_{(1,2)} > A_{(2,1)}$.
* In Chefina's turn, she will move the car to $(2, 2)$ as it is the only available choice.
* In Chef's turn, he will move the car to $(3, 2)$ as it is the only available choice.

Thus, the car covers the elements $[2, 4, 6, 9]$. The largest element in the path is $9$ while the smallest element is $2$. Thus, the score is $9 - 2 = 7$. It can be shown that this is the minimum possible score that can be achieved in any configuration of grid.

