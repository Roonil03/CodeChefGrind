# Expected Value
## Rating: 2177
### Description:
Stack has a positive integer P(P > 1).  
He starts a game where his initial score is 0.

In the ith turn, with a probability of 1/2, Stack adds 1/P<sup>i-1</sup>to his score. 

Stack stops after N turns.

Let S<sub>i</sub> be his score after i turns and F(i) denote the expected value of S<sup>2</sup><sub>i</sub>.
For each integer i(1 ≤ i ≤ N), find the value of F(i) modulo 998244353.
### Input Format
The only line of input contains two space-separated positive integers N and P, as mentioned in the statement.
### Output Format
Print N space-separated integers. For each integer i(1 ≤ i ≤ N), output the value of F (i) modulo 998244353.  
Formally, let M = 998244353. It can be shown that the answer can be expressed as an irreducible fraction <sup>x</sup>/<sub>y</sub>, where z and y are integers and y≠0 (mod M).  
Output the integer equal to x . y<sup>-1</sup> mod M  
In other words, output such an integer z that 0 <= z < M M and z . y ≡ x (mod M)..
### Constraints
- 1 <= N <= 3 * 10<sup>5</sup>
- 2 <= P <= 10<sup>5</sup>

### Examples:
#### Example 1:
**Input:**
```
2 2
```
**Output:**
```
499122177 124780545
```
**Explaination:**  
S₁ can be 0 or 1 with equal probability. Thus F(1) = (0 * 0)/2 + (1 * 1)/2 = 1/2  
F(2) = 7/8

#### Example 2:
**Input:**
```
10 343
```
**Output:**
```
499122177 379526990 822885144 761122022 256959043 151932103 340445396 758502677 478338987 125853909
```