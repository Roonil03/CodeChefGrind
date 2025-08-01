# Two Counters
## Rating: 2425
### Description:
You have 2 counters $a$ and $b$, both initialized as 0. You also have a score initialized as 0.

At the start of every minute from minute 1 to minute $N$, you **must** increase either $a$ or $b$ by 1.

Additionally, there are $M$ events. The $i^{th}$ event happens at minute $T_i + 0.5$ and has type $C_i$ ($C_i \in \{1, 2\}$).

At each event, the counters or the score is updated as:

### Input Format

* The first line of input will contain a single integer $T$, denoting the number of test cases.
* Each test case consists of multiple lines of input.
    * The first line of each test case contains two space-separated integers $N$ and $M$ — the number of minutes and the number of events.
    * The second line of each test case contains $M$ integers $T_1, T_2, \dots, T_M$ — where the $i^{th}$ event happens at minute $T_i + 0.5$.
    * The third line of each test case contains $M$ integers $C_1, C_2, \dots, C_M$ — the type of the $i^{th}$ event.

### Output Format

For each test case, output on a new line, the maximum score after $N$ minutes have passed.

### Constraints

* $1 \le T \le 10^4$
* $1 \le M \le N \le 10^5$
* $1 \le T_1 < T_2 < \dots < T_M \le N$
* $C_i \in \{1, 2\}$
* The sum of $N$ over all test cases will not exceed $10^5$.

### Examples:
#### Example 1:
**Input:**
```
4
5 3
1 2 5
1 2 1
5 5
1 2 3 4 5
1 1 1 1 1
5 5
1 2 3 4 5
1 2 1 2 1
1 1
1
2
```
**Output:**
```
2
5
3
1
```
**Explaination:**  
Test case 1:  
We will demonstrate a way to achieve a score of 2.
* In the first minute, we will increase $a$ by 1 so that $a = 1$ and $b = 0$. Since there is an event with type 1 and $a > b$ our score increases by 1.
* In the second minute, we will increase $b$ by 1 so that $a = 1$ and $b = 1$. Since there is an event with type 2 and $a$ is not less than $b$, our score remains 1 and the counters are reset.
* In the third minute, we will increase $a$ by 1 so that $a = 1$ and $b = 0$. There are no events in this minute.
* In the fourth minute, we will increase $a$ by 1 so that $a = 2$ and $b = 0$. There are no events in this minute.
* In the fifth minute, we will increase $a$ by 1 so that $a = 3$ and $b = 0$. Since there is an event with type 1 and $a > b$ our score increases by 1.

Thus, the total score achieved is 2.  
It can be shown that there is no possible way for our score to be greater than 2.

Test case 2:  
We will demonstrate a way to achieve a score of 5.
* In the first minute, we will increase $a$ by 1 so that $a = 1$ and $b = 0$. Since there is an event with type 1 and $a > b$ our score increases by 1.
* In the second minute, we will increase $a$ by 1 so that $a = 2$ and $b = 0$. Since there is an event with type 1 and $a > b$ our score increases by 1.
* In the third minute, we will increase $a$ by 1 so that $a = 3$ and $b = 0$. Since there is an event with type 1 and $a > b$ our score increases by 1.
* In the fourth minute, we will increase $a$ by 1 so that $a = 4$ and $b = 0$. Since there is an event with type 1 and $a > b$ our score increases by 1.
* In the fifth minute, we will increase $a$ by 1 so that $a = 5$ and $b = 0$. Since there is an event with type 1 and $a > b$ our score increases by 1.

Thus, the total score achieved is 5.  
It can be shown that there is no possible way for our score to be greater than 5.

