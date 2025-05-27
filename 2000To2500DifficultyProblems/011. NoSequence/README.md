# No sequence
## Rating: 2031
### Description:
Alice gave Bob 3 integers N, K, and S. Help Bob find an S-good sequence.  
A sequence B of length N is called S-good if the following conditions are met: 
- B₁ ∈ {-1,0,1} for each 1 <= i <= N 
- ∑ <sub>i=1</sub><sup>N</sup> B<sub>i</sub> * K <sup>(i - 1)</sup> = S

If there are multiple S-good sequences, print any of them.  
If no S-good sequence exists, print -2. 

### Input Format 
- The first line of input will contain a single integer `T`, denoting the number of test cases. 
- Each test case consists of a single line of input containing three space-separated integers `-N`, `K`, and `S`. 
### Output Format 
- For each test case: 
    - If no S-good sequence exists, print `-2`. 
    - Otherwise, output N space-separated integers denoting the `S`-good sequence. 
- If multiple `S`-good sequences exist, you may print any of them. 
### Constraints 
- 1 <= T <= 10<sup>4</sup>
- 1 <= N <= 100 
- 2 <= K <= 100 
- 1 <= S <= 10<sup>18</sup>


### Examples:
#### Example 1:
**Input:**
```
3
4 2 15
3 6 36
5 5 7
```
**Output:**
```
1 1 1 1
0 0 1
-2
```
**Explaination:**  
Test case 1: 
We have B = `[1, 1, 1, 1]` and S = 15 
∑<sub>i=1</sub><sup>N</sup> B<sub>i</sub> * K<sup>(i - 1)</sup> = 1 * 1 + 2 * 1 + 4 * 1 + 8 * 1 = 15 , hence B is an S-good sequence. 

Test case 2: 
We have B = `[0, 0, 1]` and S = 36 = 36 so clearly B is S-good. 

Test case 3: 
No S-good sequence of length 5 exists.
