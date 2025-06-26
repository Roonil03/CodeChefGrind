# Sardar and GCD
## Rating: 2190
### Description:
Sardar Khan has finally decided to attack Ramadhir - he will bomb one of Ramadhir's businesses in Wasseypur. Sardar Khan knows that Ramadhir has N businesses (numbered 1 to N) and that there are N - 1 roads connecting pairs of these businesses in such a way that all businesses are connected. Further, Sardar knows that each business has a specific value - the i-th business has value A<sub>i</sub>.

When Sardar Khan destroys a business, he also destroys every road directly connected to it. Formally, destroying business v also destroys all existing roads of the form `(u, v)`.

Sardar thinks that the damage dealt to Ramadhir upon destroying business v equals the sum of the greatest common divisors of every remaining maximal connected set of businesses. More formally,
- Let the connected components of the graph obtained on deleting v and edges incident to it be C<sub>1</sub>, C<sub>2</sub>,..., C<sub>k</sub>.
- Define `gcd(C`<sub>`i`</sub>`)` to be `gcd(A`<sub>`i`<sub>`1`</sub></sub>`, A`<sub>`i`<sub>`2`</sub></sub>`,...,  A`<sub>`i`<sub>`r`</sub></sub>) where C<sub>i</sub> consists of vertices i<sub>1</sub>, i<sub>2</sub>, ..., i<sub>r</sub>
- The damage caused by destroying v is then ∑<sup>k</sub><sub>i = 1</sub> `gcd(C`<sub>`i`</sub>`)`.

Sardar Khan wants to maximize the damage he deals. Can you find the maximum possible damage he can achieve, given that he destroys exactly one business?

If the process of computing damage is still unclear, please refer to sample test cases for an explained example.

### Input Format
- The first line of input contains an integer T, denoting the total number of test cases. The description of T test cases follows.
- The first line of each test case contains an integer N, denoting the number of businesses Ramadhir owns.
- Each of the next N - 1 lines contains 2 integers a and b, denoting a road between businesses a and b
- Finally, the last line of each test case contains N space-separated positive integers A<sub>1</sub>, A<sub>2</sub>,..., Α<sub>Ν</sub>. where A<sub>i</sub> is the value of the i-th business.
### Output Format
- For each test case, output a single line containing one integer - the maximum possible damage that Sardar Khan can deal.
### Constraints
- 1 <= T <= 1000
- 2 <= N <= 10<sup>5</sup>
- 1 <= A<sub>i</sub> ≤ 10º
- Sum of N over all test cases will not exceed 5 . 10<sup>5</sup>.
- It is guaranteed that the given roads connect every business.

### Examples:
#### Example 1:
**Input:**
```
1
5
1 2
1 3
3 4
3 5
4 6 8 12 15
```
**Output:**
```
29
```
**Explaination:**  
If business 1 is bombed, the remaining connected components are `{(2), (3, 4, 5)}` This gives a damage of `gcd(A`<sub>`2`</sub>`)` + `gcd(A`<sub>`3`</sub>`, A`<sub>`4`</sub>`, A`<sub>`5`</sub>`)` = 6 + 1 = 7. 
- If business 2 is bombed, the remaining connected components are `{(1, 3, 4, 5)}` This gives a damage
of `gcd(A`<sub>`1`</sub>`, A`<sub>`3`</sub>`, A`<sub>`4`</sub>`, A`<sub>`5`</sub>`)` = 1. 
- If business 3 is bombed, the remaining connected components are `{(1, 2), (4), (5)}` This gives a
damage of `gcd(A`<sub>`1`</sub>`, A`<sub>`2`</sub>`)` + `gcd(A`<sub>`4`</sub>`)` + `gcd(A`<sub>`5`</sub>`)` = 2 + 12 + 15 = 29. 
- If business 4 is bombed, the remaining connected components are `{(1, 2, 3, 5)}` This gives a damage of `gcd(A`<sub>`1`</sub>`, A`<sub>`2`</sub>`, A`<sub>`3`</sub>`, A`<sub>`5`</sub>`)` = 1.
- If business 5 is bombed, the remaining connected components are `{(1, 2, 3, 4)}` This gives a damage of `gcd(A`<sub>`1`</sub>`, A`<sub>`2`</sub>`, A`<sub>`3`</sub>`, А`<sub>`4`</sub>`)` = 2.

Clearly, bombing business 3 gives the maximum possible damage, that being 29.