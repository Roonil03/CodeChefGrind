# Spooky Sequences
## Rating: 2304
### Description:
*"I am not a witch. I'm your wife."*  
- Valerie, The Princess Bride

Once upon a time, in a distant land, a mischievous witch spied on a group of people who were enjoying their time together.

Enveloped by a dark desire, she resolved to put an end to their merry gatherings and kill all N people.

There are N people, and the witch knows that the i-th of them has a strength of A<sub>i</sub>.  
The witch also knows of M friendships, each between two people. Friendship is transitive, that is, if X and Y are friends and Y and Z are friends, then X and Z are also friends.  

The witch wants to kill all these people in a particular sequence known as a spooky sequence.

A sequence S is called a spooky sequence if it satisfies the following properties:
- S contains N distinct integers, each between 1 and N.  
That is, S is a linear order of the N people.
- For any 1 < i < j < N, if S<sub>i</sub> and S<sub>j</sub> are friends, then As, ≤ As; should hold.  
That is, for any two friends, one with strictly higher strength cannot appear earlier in the sequence than the other.  
Find the total number of spooky sequences. The answer can be large, so print it modulo 10<sup>9</sup> + 7.

### Input Format:
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of multiple lines of input.
    - The first line of each test case contains two space-separated integers N and M - the number of people and number of friendships, respectively.
    - The next M lines describe the friendships. The i-th of these M lines contains two space-separated integers u<sub>i</sub> and v<sub>i</sub>, denoting a friendship between u<sub>i</sub> and v<sub>i</sub>. 
    - The last line contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> - the strengths of the people.
### Output Format
- For each test case, output on a new line the number of spooky sequences, modulo 10<sup>9</sup> + 7
### Constraints
- 1 <= T <= 2 * 10<sup>4</sup>
- 1 <= N <= 2 * 10<sup>5</sup>
- 0 <= M <= min(2 * 10<sup>5</sup>, N(N - 1) / 2)
- 1 <= u<sub>i</sub>, v<sub>i</sub> <= N
- u<sub>i</sub> ≠ v<sub>i</sub> for each 1 <= i <= M
- Each unordered pair (u<sub>i</sub>, v<sub>i</sub>) appears at most once in a testcase.
- 1 <= A<sub>i</sub> <= 10<sup>9</sup>
- The sum of N over all test cases won't exceed 2 . 10<sup>5</sup>.
- The sum of M over all test cases won't exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
2
5 5
1 2
2 3
3 4
4 2
3 1
10 12 15 20 15
5 2
2 3
4 5
6 4 4 3 1
```
**Output:**
```
5
60
```
**Explaination:**  
Test case 1:  
Each pair among `{1, 2, 3, 4}` are friends, while 5 is not friends with anyone else. Taking into account the strength condition for the group of 4, there are five spooky sequences:   
`[5, 1, 2, 3, 4]`
`[1, 5, 2, 3, 4]`
`[1, 2, 5, 3, 4]`
`[1, 2, 3, 5, 4]`
`[1, 2, 3, 4, 5]`

Test case 2:  
2 and 3 are friends, 4 and 5 are friends, and 1 is not a friend of anyone else.  
So, in any ordering:  
- A<sub>2</sub> A<sub>3</sub>, so the order of 2 and 3 doesn't matter (even though they are friends).  
- 4 should appear after 5, since A<sub>4</sub> > A<sub>5</sub>.  
- There are no further constraints.    
It can be verified that there are 60 sequences satisfying this.  