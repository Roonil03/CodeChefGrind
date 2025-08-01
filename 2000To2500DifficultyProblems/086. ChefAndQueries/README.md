# Chef and Queries
## Rating: 2327
### Description:
As part of his daily job, Chef has to solve problems involving sets. Till now, Chef has been using inefficient methods to solve his set related problem, wasting a lot of his precious time. He has agreed to pay you a lot of money for solving the following problem for him efficiently.

First, Chef needs to perform Q operations on a set. Each operation is either:

1. Add a number to the set (if this number is NOT already present in the set).
2. Erase a number from the set (if this number exists in the set).

Then, he needs to find the sum of all elements of the set after performing these Q queries. Your job is to find this sum for him quickly.

### Input:
The first line of input contains four integers — Q, S<sub>1</sub>, A, B. S<sub>1</sub> is the first number in the operations. A and B are special constants explained later.  
Every operation Si is represented by a single integer. If S<sub>i</sub> is odd, then it represents the first operation, otherwise the second type, and in both of them the integer you have to add/delete equals `[S`<sub>`i`</sub>` / 2]`, where `[]` is the greatest integer (or floor) function.

S<sub>i</sub> = (A * S<sub>i-1</sub> + B) mod 2<sup>32</sup> when i > 1.

Note: In this problem, the time limit is very tight. Using built-in data structures, such as set/unordered_set in C++ or TreeSet/HashSet in Java, may lead to a Time Limit Exceed verdict.

### Output
Output a single line containing a single integer — sum of elements in the set after Q queries.

### Constraints
- 1 ≤ Q ≤ 10<sup>7</sup>
- 1 ≤ S<sub>1</sub>, A, B ≤ 10<sup>9</sup>

### Examples:
#### Example 1:
**Input:**
```
5 1 1 1
```
**Output:**
```
3
```

#### Example 2:
**Input:**
```
10000000 777777777 777777777 777777777
```
**Output:**
```
5362358669068782
```
**Explaination:**  
The sequence `{S`<sub>`i`</sub>`} `is 1, 2, 3, 4, 5:

Operation 1, 1 mod 2 = 1, add number `[1 / 2]` = 0 to set, sum is 0.

Operation 2, 2 mod 2 = 0, erase number `[2 / 2]` = 1 from set, 1 is not in set, so nothing happens, sum is 0.

Operation 3, 3 mod 2 = 1, add number `[3 / 2]` = 1 to set, sum is 1.

Operation 4, 4 mod 2 = 0, erase number `[4 / 2]` = 2 from set, 2 is not in set, so nothing happens, sum is 1.

Operation 5, 5 mod 2 = 1, add number `[5 / 2]` = 2 to set, sum is 3.