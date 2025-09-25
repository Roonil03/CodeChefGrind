# Learning SQL
## Rating: 339
### Description:
He has a table which initially has $R$ rows and $C$ columns. He then adds $E$ extra rows to it. How many total cells does he have finally?

### Input Format

The only line in the input contains three space-separated integers $R$, $C$, and $E$ — the number of initial rows, the number of columns, and the number of extra rows added, respectively.

### Output Format

Output on a new line, a single integer, which should be the final total number of cells in the table.

### Constraints

- $1 < R < 100$
- $1 \leq C \leq 100$
- $1 \leq E \leq 100$

### Examples:
#### Example 1:
**Input:**
```
5 2 1
```
**Output:**
```
12
```
**Explaination:**  
There are initially $5$ rows, and $2$ columns. So the initial number of cells was $5 \times 2 = 10$. Then, $1$ extra row was added. So now the table has $6$ rows, and $2$ columns. So the total number of cells is now $6 \times 2 = 12$, which is the answer.

#### Example 2:
**Input:**
```
6 10 3
```
**Output:**
```
90
```
**Explaination:**  
There are initially $6$ rows, and $10$ columns. So the initial number of cells was $6 \times 10 = 60$. Then, $3$ extra rows were added. So now the table has $9$ rows, and $10$ columns. So the total number of cells is now $9 \times 10 = 90$, which is the answer.

#### Example 3:
**Input:**
```
1 1 1 
```
**Output:**
```
2
```
**Explaination:**  
There are initially $1$ rows, and $1$ columns. So the initial number of cells was $1 \times 1 = 1$. Then, $1$ extra row was added. So now the table has $2$ rows, and $1$ columns. So the total number of cells is now $2 \times 1 = 2$, which is the answer.

#### Example 4:
**Input:**
```
100 100 100
```
**Output:**
```
20000
```
**Explaination:**  
There are initially $100$ rows, and $100$ columns. So the initial number of cells was $100 \times 100 = 10000$. Then, $100$ extra rows were added. So now the table has $200$ rows, and $100$ columns. So the total number of cells is now $200 \times 100 = 20000$, which is the answer.


