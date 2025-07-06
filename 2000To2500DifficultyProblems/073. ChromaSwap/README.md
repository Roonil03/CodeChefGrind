# Chroma Swap
## Rating: 2271
### Description:
You have two arrays A = A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> and B = B<sub>1</sub>, B<sub>2</sub>,..., B<sub>N</sub>. Each of these elements also has a color associated with them, which is an integer. This is denoted by the arrays Color A<sub>1</sub>, Color A<sub>2</sub>,..., Color A<sub>N</sub>, and Color B₁, Color B<sub>2</sub>,..., Color B<sub>N</sub>.

In a single operation, you can swap any element of array A with any element of array B, if they have the same color.

Your goal is to do as many operations as you want, and eventually have the elements in array A be in non-decreasing order. That is, after you are done with the operations, you want A<sub>1</sub> <= A<sub>2</sub?> <= ... <= A<sub>N</sub>.

Output "`Yes`" if this is possible to do so, and "`No`" otherwise.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of five lines of input.
    - The first line of each test case contains a single integer N, denoting the size of the arrays.
    - The next line has N integers: A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>
    - The next line has N integers: Color A<sub>1</sub>, Color A<sub>2</sub>,..., Color A<sub>N</sub>
    - The next line has N integers: B<sub>1</sub>, B<sub>2</sub>,..., B<sub>N</sub>
    - The next line has N integers: ColorB₁, Color B<sub>2</sub>,..., Color B<sub>N</sub>

### Output Format
For each testcase, in a new line, output "`Yes`" if it is possible to end up with the array A having elements in non-decreasing order. Else, print "`No`".  
You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yes will all be treated as identical).  
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N <= 10<sup>5</sup>
- 1 <= A<sub>i</sub>, B<sub>i</sub> <= 10<sup>9</sup>
- 0 <= Color A₁, ColorB<sub>i</sub> <= 2N
- The sum of N over all test cases won't exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
3
2 
3 2
1 2 
1 2 
1 1
1
13
1
23
1
2
2 1 
2 1 
2 1
2 1
```
**Output:**
```
Yes
Yes
No
```
**Explaination:**  
Testcase 1:  
The given arrays are:
- A = `[3, 2]`
- ColorA = `[1, 2]`
- B = `[1, 2]`
- ColorB = `[1,1]`  
A₁ and B₁ have the same color `(1)`. So, we can swap them, and now we have the arrays as:
- A = `[1, 2]`
- B = `[3, 2]`  
Now, array A is sorted in non-decreasing order. So, it is possible to achieve this, and hence the answer is "`Yes`".

Testcase 2:  
The given arrays are:
- A = `[13]`
- ColorA = `[1]`
- B = `[23]`
- ColorB = `[1]`  
We see that the array A is already sorted. Hence, the answer is "`Yes`".

Testcase 3:  
The given arrays are:
- A = `[2, 1]`
- ColorA = `[2, 1]`
- B = `[2, 1]`
- ColorB = `[2,1]`  
We see that no matter how many operations we do, the two arrays will remain the same, and A can never be sorted. Hence the answer is "`No`".

