# Alternative Sufferings
## Rating: 2011
### Description:
You are given a binary string S. 

In one second, the following scenario happens simultaneously and independently for all the bits which are set to 1 in the string: 
Change the bit from 1 to 0. 
- If the left neighbour exists and is 0, change it to 1. 
- If the right neighbour exists and is 0, change it to 1. 

For example, if S = `010` initially, then after 1 second, S = `101` (the 1 bit and both its neighbours were changed). After another second, S = `010`. Here, the first and the last bit were changed to 0 because earlier they were 1. The middle bit was changed because it was 0 earlier and it was a neighbour of a 1 bit. 

Find out the string S after K seconds.

### Input Format 
- The first line of input will contain a single integer T, denoting the number of test cases. 
- Each test case consists of multiple lines of input. 
    - The first line of each test case contains two space-separated integers N and K - the length of string S and the number of seconds. 
    - The next line describes the string S.

### Output Format 
For each test case, output the string S after exactly K seconds. 

### Constraints 
- 1 <= T <= 1000 
- 1 <= N <= 10<sup>5 </sup>
- 1 <= K <= 10<sup>9</sup>
- The sum of N over all test cases won't exceed 10<sup>6</sup>. 
- S can only contain the characters 0 or 1.

### Examples:
#### Example 1:
**Input:**
```
3
3 1
101
5 2
10001
14 3
10011010111000
```
**Output:**
```
010
10101
01100101010101
```
**Explaination:**  
Test case 1: The middle bit is changed to 1 since it had a neighbouring set bit (in this case both left and right) and both the set bits are changed to 0. Hence, after one second, it is 101. 
Test case 2: After first second, the string S will be 01010. After another second, the string becomes 10101
