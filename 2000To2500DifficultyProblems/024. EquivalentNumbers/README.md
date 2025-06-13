# Equivalent Numbers
## Rating: 2087
### Description:
Chef calls a pair of integers (A, B) equivalent if there exist some positive integers X and Y such that A<sup>X</sup> = B<sup>Y</sup>.  
Given A and B, determine whether the pair is equivalent or not.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of two space-separated integers A and B, as mentioned in statement.
### Output Format
For each test case, output YES if (A, B) is an equivalent pair, no otherwise.  
The output is case-insensitive. Thus, the strings Yes, YES, yes, and yes are all considered identical.
### Constraints
- 1 < T < 10<sup>5</sup>
- 2 < A, B ≤ 10<sup>6</sup>

### Examples:
#### Example 1:
**Input:**
```
3
2 3
8 4
12 24
```
**Output:**
```
NO
YES
NO
```
**Explaination:**  
Test case 1:  
There are no positive integers X and Y which satisfy A<sup>X</sup> = B<sup>Y</sup>.

Test case 2:  
Let X = 2 and Y = 3 Thus, A<sup>X</sup> = 8<sup>2</sup> = 64 and B<sup>Y</sup> = 4<sup>3</sup> = 64 Thus, the pair `(8,4)` is equivalent.

Test case 3:  
There are no positive integers X and Y which satisfy A<sup>X</sup> = B<sup>Y</sup>.