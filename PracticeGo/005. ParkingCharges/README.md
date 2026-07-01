# Parking Charges
## Rating: 416
### Description:
Chef needs to park her car while she watches a movie. The parking charges at the theater are as follows:

* **Rs. $X$** for the first 1 hour.
* **Rs. $Y$** for every extra hour after the first hour.

If Chef parks her car for $H$ hours, calculate the total parking charges she should pay.

### Input Format
The only line of the input will contain three space-separated integers: **$X$**, **$Y$**, and **$H$**.

### Output Format
Output a single integer representing the total amount that Chef pays as parking charge.

### Constraints
* $1 \leq X \leq 100$
* $1 \leq Y \leq 100$
* $1 \leq H \leq 100$

### Examples:
#### Example 1:
**Input:**
```
10 1 5
```
**Output:**
```
14
```
**Explaination:**  
$X = 10$: Fee for the first hour.
* $Y = 1$: Fee for every extra hour.
* $H = 5$: Total hours parked.
* Calculation: $10 + (5 - 1) \times 1 = 10 + 4 = 14$.

#### Example 2:
**Input:**
```
10 15 1
```
**Output:**
```
10
```
**Explaination:**  
$X = 1$, $Y = 10$, $H = 100$.
* Calculation: $1 + (100 - 1) \times 10 = 1 + 990 = 991$.

#### Example 3:
**Input:**
```
10 15 1
```
**Output:**
```
10
```
**Explaination:**  
$X = 10$, $Y = 15$, $H = 1$.
* Calculation: Since she only parked for 1 hour, she pays only $X$.