# Starters 192
## Contest Division: Division 2
## Position: 846 / 1687
## Questions:
## Security Lines
### Description:
The airport in Chefland is a busy place! Today, we'll take a look at its security queues.

There are N security queues, numbered 1 to N. Initially, there are A<sub>i</sub> people standing in the i-th queue.

You are the last person in the the first queue, i.e. the A<sub>1</sub>-th person in queue 1.

Every second, the following will happen:
1. First, you will either stay in the same queue, or move to an adjacent queue.  
That is, if you are in queue i at the start of the second, you can either stay in queue i, or move to one of queue i - 1 or queue i + 1 (only if the corresponding queue exists, i.e. you cannot move to queue i + 1 when i = N or move to queue i - 1 when i = 1).  
If you move to a new queue, you will be the last person in it.
2. Then, the first person in every queue will complete their security check and leave.

Naturally, you'd like to finish your security check as soon as possible.  
What's the minimum number of seconds you'll need if you act optimally?
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of two lines of input.
    - The first line of each test case contains a single integer N - the number of queues.
    - The second line contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub> - the number of people in each queue initially.

### Output Format
For each test case, output on a new line the minimum number of seconds you'll need to complete your security check.
### Constraints
- 1 <= T <= 500
- 1 <= N <= 500
- 1 <= A<sub>i</sub> <= 500

### Examples:
#### Example 1:
**Input:**
```
3
4
5 2 1 3
2
4 5
5
7 3 5 6 2
```
**Output:**
```
2
4
4
```
**Explaination:**  
Test case 1:  
One optimal sequence of moves is as follows:
- Second 1: Move to the second queue. The counts of people are now `[4, 3, 1, 3]`.  
The first person in each queue leaves, so the counts are `[3, 2, 0, 2]`.
- Second 2: Move to the third queue. The counts of people are now `[3, 1, 1, 2]`.  
The first person in each queue leaves, so the counts are `[2, 0, 0, 1]`.  
We were the first person in the third queue, meaning we've completed our security check and are done.  
So, we were able to leave in two seconds.

Test case 2:  
The queue counts are `[4, 5]`, with us being in the first queue.  
The optimal path is to just wait in the first queue without moving.  
Since one person leaves the queue every second, we'll leave by the 4-th second.  

Test case 3:  
One optimal solution is as follows:  
- Wait in queue 1 for 3 seconds.
- In the fourth second, move to queue 2.  
We'll be the first person in queue 2 now and so leave (the three people initially in it would have left after the first three seconds).

## No 3 Please!
### Description:
For an array B of length M, we define the following:
- The prefix sum array of B is an array P, also of length M, such that P<sub>i</sub> =  B<sub>1</sub> + B<sub>2</sub> + ... + B<sub>i</sub>
- B is called good, if every element of its prefix sum array is not a multiple of 3.

For example, B = `[1, 1, 2, 1]` is a good array, because its prefix sum array is `[1, 2, 4, 5]` and none of them are multiples of 3.  
On the other hand, B = `[1, 1, 2, 2]` is not a good array, because its prefix sum array is `[1, 2, 4, 6]` and 6 is a multiple of 3.

You are given an array A of length N. Every element of A is either 1 or 2.

At most once, you can reverse a prefix of A.  
Formally, this means you can choose an index i (1 ≤ i ≤ N), and convert the array A into `[A`<sub>`i`</sub>`, A`<sub>`i-1`</sub>`, A`<sub>`i-2`</sub>`,..., A`<sub>`2`</sub>`, A`<sub>`1`</sub>`, A`<sub>`i+1`</sub>`, A`<sub>`i+2`</sub>`,..., A`<sub>`N`</sub>`]`

Is it possible to make A good?

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of two lines of input.
    - The first line of each test case contains a single integer N - the length of the array.
    - The second line contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>,..., A<sub>N</sub>.

### Output Format
- For each test case, output on a new line the answer: `Yes` if it's possible to make A good after a prefix reversal, and `No` otherwise.
- Each character of the output may be printed in either uppercase or lowercase, i.e. the strings `no`,`No`, `no`, and `NO` will be treated as equivalent.
### Constraints
- 1 <= T <= 10<sup>5</sup>
- 1 <= N <= 2 * 10<sup>5</sup>
- 1 <= A<sub>i</sub> <= 2
- The sum of N over all test cases won't exceed 2 . 10<sup>5</sup>.

### Examples:
#### Example 1:
**Input:**
```
6
4
1 1 2 1
2
1 2
5
1 2 2 2 1
4
1 2 1 2
5
1 1 2 1 1
1
2
```
**Output:**
```
Yes
No
Yes
No
No
Yes
```
**Explaination:**  
Test case 1:  
The array is already good, since its prefix sum array is `[1, 2, 4, 5]`.

Test case 2:  
`[1, 2]` has prefix sums `[1, 3]`, and 3 is a multiple of 3.  
The only prefix reversal that changes the array is to make it `[2, 1]`, which has a prefix sum array of `[2, 3]`  
In either case, A is not good, so the answer is "`No`".

Test case 3:  
Initially, A = `[1, 2, 2, 2, 1]`, which is not good: its prefix sum array is [1, 3, 5, 7, 8]. We can reverse the prefix of length 3 to obtain `[2, 2, 1, 2, 1]`, which is good: its prefix sum array is `[2, 4, 5, 7, 8]`.

## Equate XY
### Description:
You have with you four positive integers X, Y, Z, and C.  
You'd like to make X equal to Y. To achieve that, you can perform the following types of operations:
- Pay one coin, and either increase or decrease Z by 1.  
The decrease operation can only be done if Z > 1 initially, i.e. it's not allowed to make Z reach 0.
- Pay C coins, and do one of the following:
    - Replace X with `gcd(X, Z)` and Y with `lcm(Y, Z)`, or
    - Replace X with `lcm(X, Z)` and Y with `gcd(Y, Z)`.

The operations can each be performed however many times you like, and in any order.  
Find the minimum number of coins you need to pay to make X and Y equal.  
It can be proved that it's always possible to make them equal.  
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of a single line of input, containing three space-separated integers X, Y, and Z.
### Output Format
For each test case, output on a new line the minimum number of coins you need to pay to make X and Y equal. 
### Constraints
- 1 <= T <= 1000
- 1 <= X,  Y, Z, C <= 10<sup>9</sup>

### Examples:
#### Example 1:
**Input:**
```
4
9 3 4 2
100 100 28 39
3 10 4 10
5 90 35 6
```
**Output:**
```
3
0
20
11
```
**Explaination:**  
Test case 1:  
One optimal sequence of operations is:
- Spend one coin to reduce Z to 3.
- Spend C = 2 coins to perform the operation X ← `gcd(X, Z)` and Y ← `lcm(Y, Z)`.  
This will turn X into `gcd(9,3)` = 3 and Y into `lcm(3, 3)` = 3, so we're done.

Test case 2:  
X and Y are already equal, so we don't have to do anything.

