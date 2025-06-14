# TripTastic
## Rating: 2095
### Description:
A school wants to plan a trip for a group of K students and one mentor.
A hotel is booked for their stay, where the rooms are formatted in form of a matrix A with N rows and M columns. There are a total of Nx M rooms where the room (i, j) has a capacity of A<sub>(i,j)</sub> people.  
The distance between the rooms (i<sub>1</sub>,j<sub>1</sub>) and (i<sub>2</sub>, j<sub>2</sub>) is given by max(|i<sub>1</sub>-i<sub>2</sub>!, j<sub>1</sub>-j<sub>2</sub>), where |X| denotes the absolute value of X.  
To ensure that the trip goes smoothly, the rooms should be booked in a way such that the distance between the mentor's room and the farthest room of a student is minimal.  
Note that the mentor and students can stay in the same room.

Your task is to find the minimal distance between the mentor's room and the farthest room of a student.  
In case the total capacity of the hotel is less than K+1, print-1 instead.
### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
    - The first line of each test case contains three space-separated integers N, M, and K - the number of rows, columns, and students, respectively.
    - The next N lines contain M space-separated integers each, denoting the capacity of each room.
### Output Format
- For each test case, output on a new line, the minimal distance between the mentor's room and the farthest room of a student.
- In case the total capacity of the hotel is less than K+1, print -1 instead.
### Constraints
- 1≤T≤500
- 1≤N, M≤10<sup>6</sup>
- 1 ≤ K≤ 10<sup>9</sup>
- 0 <= A<sub>(i, j)</sub> <= 10<sup>5</sup>
- The sum of N . M over all test cases won't exceed 10<sup>6</sup>.

### Examples:
#### Example 1:
**Input:**
```
4
1 7 5
2 1 0 1 3 0 1
2 4 3
1 0 4 0
0 2 0 3
2 2 7
1 0
4 1
3 2 3
0 2
1 0
1 0
```
**Output:**
```
3
0
-1
1
```
**Explaination:**  
Test case 1:  
Mentor can stay in room `(1, 2)`, two students in room `(1, 1)`, one student in room `(1, 4)` and two students in room `(1, 5)`.  
The farthest room of a student would be `(1,5)` with distance 3.  
We can show that in no other arrangement, we can achieve a distance less than 3.  

Test case 2:  
Mentor and all 3 students can stay in room `(1, 3)`. Thus, the distance is 0.  

Test case 3:  
The hotel does not have enough capacity.  