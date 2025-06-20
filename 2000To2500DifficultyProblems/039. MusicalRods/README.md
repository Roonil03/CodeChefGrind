# Musical Rods
## Rating: 2160
### Description:
You have N rods with you. The i-th rod has a length of A<sub>i</sub> and a beauty of B<sub>i</sub>.  
You'd like to arrange these rods side-by-side in some order on the number line, starting from 0.  
Let x<sub>i</sub> be the starting position of the i-th rod in an arrangement. The beauty of this arrangement is:  
<sup>N</sup>∑<sub>i=1</sub> x<sub>i</sub> . B<sub>i</sub>

What is the maximum beauty you can attain?  
Note that the left endpoint of the first rod you place must be 0, and you cannot leave any space between rods.
### Input Format
- The first line of input contains an integer T, denoting the number of test cases.
- Each test case consists of three lines of input.
    - The first line of each test case contains a single integer N, the number of rods.
    - The second line of each test case contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>
    - The third line of each test case contains N space-separated integers B<sub>1</sub>, B<sub>2</sub>,..., B<sub>N</sub>

### Output Format
For each test case print on a new line the answer: the maximum value of <sup>N</sup>∑<sub>i=1</sub> x<sub>i</sub> . B<sub>i</sub> if the order of rods is chosen optimally.

### Constraints
- 1 <= T <= 10<sup>3</sup>
- 1 <= N <= 10<sup>5</sup>
- 1 <= A<sub>i</sub> <= 10<sup>4</sup>
- 1 <= B<sub>i</sub> <= 10<sup>4</sup>
- The sum of N across all testcases won't exceed 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
2
2
1 2
4 6
4
2 8 9 11
25 27 100 45
```
**Output:**
```
8
2960
```
**Explaination:**  
Test case 1:  
Place the second rod followed by the first one. This makes x<sub>2</sub> = 0 and x<sub>1</sub> = 2 giving us a beauty of 2 * 4 + 0 * 6 = 8 which is the maximum possible.

Test case 2:  
Place the rods in the order `[2, 4, 3, 1]`. This gives us x = `[28, 0, 19, 8]` and the beauty is 28 . 25 + 0 . 27 + 19 . 100 + 8 . 45 = 2960.