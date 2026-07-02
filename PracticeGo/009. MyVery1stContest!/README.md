# My very 1st contest!
## Rating: 284
### Description:
In a contest where $N$ new users visit, the following criteria apply regarding their ratings:

* **$A$ users** just saw the problems and didn't make any submissions; they will not receive a rating.
* **$B$ users** made a submission but could not solve any problem correctly; they will receive a rating in the range $800 - 1000$.
* **Everyone else** correctly solved at least 1 problem and will receive a rating **strictly greater** than 1000.

You need to output the number of new users who will receive a rating and the number of new users who will get a rating **strictly greater** than 1000.

### Input Format
The single line of input contains three space-separated integers: $N$, $A$, and $B$.

### Output Format
Output two space-separated integers in a single line:
1. The number of new users who will get a rating.
2. The number of new users who will get a rating higher than 1000.

### Constraints
* $2 \leq N \leq 1000$
* $1 \leq A \leq 1000$
* $1 \leq B \leq 1000$
* $A + B \leq N$

### Examples:
#### Example 1:
**Input:**
```
10 3 2
```
**Output:**
```
7 5
```
**Explaination:**  
* Total users: 10.
* Users with no submissions: 3.
* Users who get a rating: $10 - 3 = 7$.
* Users with rating > 1000: Out of the 7 who submitted, 2 failed to solve any problem. Thus, $7 - 2 = 5$ users solved at least one problem.

#### Example 2:
**Input:**
```
10 4 1
```
**Output:**
```
6 5
```
**Explaination:**  
* Users with no submissions: 4.
* Users who get a rating: $10 - 4 = 6$.
* Users with rating > 1000: Out of the 6 who submitted, 1 failed to solve any problem. Thus, $6 - 1 = 5$ users solved at least one problem.

#### Example 3:
**Input:**
```
20 1 2
```
**Output:**
```
19 17
```
**Explaination:**  
* Users with no submissions: 1.
* Users who get a rating: $20 - 1 = 19$.
* Users with rating > 1000: Out of the 19 who submitted, 2 failed to solve any problem. Thus, $19 - 2 = 17$ users solved at least one problem.

#### Example 4:
**Input:**
```
1000 300 700
```
**Output:**
```
700 0
```
**Explaination:**  
* Users with no submissions: 300.
* Users who get a rating: $1000 - 300 = 700$.
* Users with rating > 1000: Out of the 700 who submitted, 700 failed to solve any problem. Thus, $700 - 700 = 0$ users solved at least one problem.