# Saving a gift of love
## Rating: 2265
### Description:
Suraj, the Chief Prankster is back in action now and this time he has stolen the valentine's day gift given by Ashi (the love of Chef) to the Chef and ran away with it to Byteland.

Byteland is a not a regular place like Chef's town. The safest way from Chef's town to Byteland is through the path of tasty dishes. The path is named so because there are magical tasty dishes which appear to the traveler that no one can resist eating. Also, Suraj has added a strong sleep potion to each of the dish on this path to stop anyone from following him.

Knowing the devilish nature of Suraj, Ashi is concerned about the Chef and has asked all of Chef's town people to help. The distance from Chef's town to Byteland through the the path of tasty dishes is X units. They have the location where the magic dishes are and how many people are required to eat it completely. Anyone who eats a dish would go to a long sleep and won't be able to continue. They have the information about the tribal clans that live along the the path of tasty dishes who can be of real help in this journey.

The journey Chef and his friends can be described as follows: There is a total of B dishes on the path of tasty dishes. Each dish is located at some distance from Chef's town denoted by x<sub>i</sub> for the ith dish (x<sub>i-1</sub> < x<sub>i</sub>). To minimize the number of friends Chef has to leave behind, all of them have decided that exactly y<sub>i</sub> of them will eat the ith dish, which is the required number of people needed to finish it completely. Also, there are a total of C tribal chef clans, each with their own population and location on the path that Chef and his friends will meet on their way to Byteland. They know that for some clan (say i), they are located at a distance of p<sub>i</sub> ( p<sub>i-1</sub> < p<sub>i</sub>) from Chef's town with a population of ri. And if a group of at least qi men approaches them, they would be able to convince them to join their forces against Suraj.

Given the information about all this, help the Chef to find out the minimum size of the group (including him and his friends) he should start with to reach Byteland and get back Ashi's gift from Suraj.

### Input
The first line of the input contains an integer T denoting the number of test cases. Each test case contains three lines which are as follows:
First line of each test case contains X, the distance of Byteland from Chef's town.
Next line contains an integer B, the number of dishes on the path of tasty dishes. Then follows B pairs of space separated integers of the form x<sub>i</sub> y<sub>i</sub>, where x<sub>i</sub>y<sub>i</sub> are as defined above for the ith dish. Next line contains an integer C, followed C space separated triplets of integers p<sub>i</sub> q<sub>i</sub> r<sub>i</sub> as defined above.

### Output
For each test case, print the minimum size of the group (including Chef) that is needed to reach Byteland.

### Constraints
- 1 ≤ T ≤ 10
- 1 ≤ X ≤ 10<sup>9</sup>
- 1 ≤ B ≤ 10000
- Constraints on C
    - Subproblem 1 (25 points): C = 0
    - Subproblem 2 (75 points): 1 ≤ C ≤ 10000
- 1 ≤ x<sub>i</sub> < X, x<sub>i</sub> < x<sub>i+1</sub>
- 1 ≤ p<sub>i</sub> < X, p<sub>i</sub> < p<sub>i+1</sub>
- 1 ≤ y<sub>i</sub> ≤ 10<sup>14</sup>
- 1 ≤ q<sub>i</sub> ≤ 10<sup>14</sup>
- 1 ≤ r<sub>i</sub> ≤ 10<sup>14</sup>
- All the positions, of the tasty dishes and tribal clans are distinct.

### Examples:
#### Example 1:
**Input:**
```
3
10
2 1 3 8 1
0
10
2 1 3 8 5
0
10
2 2 3 8 5
3 1 2 1 4 3 2 9 1 1
```
**Output:**
```
5
9
6
```
**Explaination:**  
Example case 1.  
In the first case, there are no tribal clans, and two dishes, one which needs to be eaten by 3 chefs on their way and one to be eaten by 1 chef. Hence, we have to start with atleast 5 people in total to pass the path of tasty dishes.

Example case 2.  
Similar as Example Case 1.

Example case 3.  
In this case, if we start with 5 Chefs. At point 1, we have more than or equal to 2 chefs, hence the tribal clan of size 1 adds to the Chef's party and now they have size of 6. At position 2, three of them would be left behind eating a dish, leaving 3 of them to go ahead. At position 4, since the size is exactly 3, the tribal clan joins the chef's party making it of size 5. At position 8, all 5 of them will stop to eat the dish and none would go ahead. Similarly, if we start with 6, one of them would be able to pass position 8 and reach position 9, where it will also add one of the tribal clans to its party and reach Byteland.