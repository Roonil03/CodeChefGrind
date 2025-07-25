# Alternating Diameter
## Rating: 2300
### Description:
Chef stumbled upon B black nodes and W white nodes and now wants to construct a tree using them.

Chef is bamboozled by the total number of trees that can be constructed using these nodes. To reduce this count, Chef considered only those trees which have at least one diameter that has alternating colors i.e. a black node is followed by a white node and a white node is followed by a black node.

Help Chef in finding out the tree with the minimum possible diameter among all the trees that satisfies the above condition. If no tree satisfies the above conditions, print -1. If multiple trees satisfies the above condition, print any.

### Input Format
- The first line contains a single integer T - the number of test cases. Then the test cases follow.
- The first and only line of each test case contains two space separated integers B, W representing the number of black and white nodes respectively.

### Output Format
- If a tree can be constructed that fulfils all the requirements then
    - In the first line, output a string of length B + W in which the ith character (1-based indexing) is either w or B denoting the colour of the ith node as black or white respectively.
    - In the following `B + W-1` lines, output two integers U and V denoting an edge between Uth and Vth node.
- If no tree fulfils the requirements print -1 in a single line.
### Constraints
- 1 <= T <= 100
- 0 <= B W <= 1000
- 1 <= B + W <= 1000

### Examples:
#### Example 1:
**Input:**
```
3
1 1
0 2
1 2
```
**Output:**
```
WB
2 1
-1
WBW
1 2
2 3
```
**Explaination:**  
Test case 1:   
The tree has only one path between the nodes 1 and 2 which is the diameter and also alternating in color. The checker will handle multiple possible answers so you can also swap the colors of the node to achieve the same result.

Test case 2:  
There is only one tree possible and its diameter would consist of all white nodes only. Therefore there is no tree which satisfies the given conditions.