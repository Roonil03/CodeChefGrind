# Angry Cyborg
## Rating: 2072
### Description:
Cyborg Jenish is angry.  
He has so much rage that he decided to go on a demolition spree for Q days. 

There are N cities in his world numbered 1 to N, in a row from left to right. That is the i<sup>th</sup> city from left side is city-i where 1 <= i <= N The supreme leader of the world is VSM and there are infinite statues of VSM in each city.

On each day Jenish chooses two cities L and R. He starts at city-L and moves along the row towards right side till he reaches the city-R. In city-L he destroys 1 statue, in the next city (i.e. city- L + 1 ) he destroys 2 statues, and so on till city-R where he destroys R-L + 1 statues. In other words, he destroys i L +1 statues in the ith city (L≤ i ≤R). 

Find the total number of VSM statues he destroyed in each city after Q days. 
### Input: 
- The first line contains an integer T, denoting the number of test cases. 
- The first line of each test case, contains two space-separated integers N and Q denoting the number of cities in his world and the number of days he goes on a demolition spree respectively. 
- The ith line of next Qlines of each test case contains two space-separated integers Land R denoting the starting city and the ending city respectively on ith day. 
### Output: 
- For each test case, output a single line containing N space-separated integers. 
- The ith integer should denote the total number of VSM statues destroyed by cyborg Jenish in the city-i after Q days. 
### Constraints: 
- 1 <= T <= 10<sup>3 </sup>
- 1 <= N <= 10<sup>5 </sup>
- 1 <= Q <= 10 <sup>5 </sup>
- 1 <= L <= R <= N 
- The sum of N over all test cases is less than 10<sup>6 </sup>
- The sum of Q over all test cases is less than 10<sup>6</sup>