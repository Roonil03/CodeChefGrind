# Water Consumption
## Rating: 254
### Description:
Chef visited his doctor, who advised him to drink **at least 2000 ml** of water each day. Given the amount of water $X$ (in ml) that Chef drank today, determine if he followed the doctor's advice.

### Input Format
* The first line contains a single integer $T$ — the number of test cases.
* The first and only line of each test case contains one integer $X$ — the amount of water Chef drank today.

### Output Format
For each test case, output `YES` if Chef followed the doctor's advice (drank $\geq 2000$ ml), otherwise output `NO`.

The output is case-insensitive (e.g., `YES`, `yEs`, `yes`, and `yes` are all considered identical).

### Constraints
* $1 \leq T \leq 2000$
* $1 \leq X \leq 4000$

### Examples:
**Input:**
```
3
2999
1450
2000
```
**Output:**
```
YES
NO
YES
```
**Explaination:**  
* **Test case 1:** Chef drank 2999 ml of water, which is $\geq 2000$ ml. Result: `YES`.
* **Test case 2:** Chef drank 1450 ml of water, which is $< 2000$ ml. Result: `NO`.
* **Test case 3:** Chef drank 2000 ml of water, which is $\geq 2000$ ml. Result: `YES`.