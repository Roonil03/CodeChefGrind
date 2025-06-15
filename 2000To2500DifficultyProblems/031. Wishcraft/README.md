# Wishcraft
## Rating: 2105
### Description:
Magic is really very simple, all you've got to do is want something and then let yourself have it.  
Chadda and his Wizard friend PSC were exploring the enchanted forest on Halloween, when Chadda stumbled upon an array A of N magical numbers which took him into a different world.  

Chadda remembered that PSC gave him two integers P and Q for such a situation.  
Using these integers, Chadda can modify the array A as follows:
- At most P times, perform the following operation:
    - Pick two elements x and y from A, delete them both from A, and insert (x + y) into A. This operation can be performed only if A has at least two elements.
- At most times, perform the following operation:
    - Pick two elements x and y from A, delete them both from A, and insert (x - y) into A. This operation can also be performed only if A has at least two elements.

Note that each operation reduces the size of A by one.  
The two types of operations (addition and subtraction) can be performed in any order, as long as at most P addition operations and subtraction operations are made.

Let B denote the final array obtained after performing some (possibly, zero) operations.  
To return to his original world, Chadda has to find the maximum possible value of
```
max(B) - min(B)
```
across all possible final arrays B.

Can you help Chadda find this value?

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of three lines of input.
    - The first line of each test case contains a single integer N - the size of the array.
    - The second line contains two space-separated integers P and Q the maximum number of addition and subtraction operations, respectively.
    - The third line contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>: the elements of array A.
### Output Format
For each test case, output on a new line the answer: the maximum possible value of max(B) -min(B) across all possible final arrays B.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N <= 10<sup>5</sup>
- 0 <= P, Q <= N - 1
- -10<sup>9</sup> <= A_{i} <= 10<sup>9</sup>
- The sum of N over all test cases won't exceed 3 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
2
0 0
5 1
6
1 2
8 -1 -4 2 6 -3
7
6 6
-2 -4 2 -2 -3 -1 -1
```
**Output:**
```
4
23
15
```
**Explaination:**  
Test case 1:  
P = Q = 0 so no operations can be performed at all. The answer is just max ([5, 1]) - min([5, 1]) = 5 - 1 = 4

Test case 2:  
The array is A = `[8, - 1, - 4, 2, 6, - 3]` The following sequence of operations can be performed:
- Choose 2 and -3, remove them, and insert 2- (-3) = 5 into the array. The elements are now `[8, -1, -4, 6, 5]`. 
- Choose 8 and 5, remove them, and add 8 + 5 = 13 to the array. The elements are now `[13, -1, -4, 6]`.  
- Choose -4 and 6, remove them and add (- 4) - (6) to the array. The elements are now `[13, -1, -10]`.

The difference between maximum and minimum for this array is 13 - (-10) = 23. With one addition and two subtraction operations available, it can be proved that this is the maximum attainable value.

Test Case 3:  
It can be proven that 15 is the maximum attainable value.