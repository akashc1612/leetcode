# Tour of King
## Easy
Problem

King loves to go on tours with his friends.

King has 
N
N cars that can seat 
5
5 people each and 
M
M cars that can seat 
7
7 people each. Determine the maximum number of people that can travel together in these cars.

Input Format
The first line of input contains a single integer 
T
T, the number of test cases.
The first and only line of each test case contains two space-separated integers 
N
N and 
M
M — the number of 
5
5-seaters and 
7
7-seaters, respectively.
Output Format

For each test case, output on a new line the maximum number of people that can travel together.

Constraints
1 \leq T \leq 100
1≤T≤100
0 \leq N,M \leq 100
0≤N,M≤100
Sample 1:
Input
Output
4
4 8
2 13
14 5
8 8
76
101
105
96
Explanation:

Test case 
1
1: King has 
4
4 cars that seat 
5
5 each and 
8
8 cars that seat 
7
7 each. So, 
4\times 5 + 8\times 7 = 76
4×5+8×7=76 people can travel together.

Test case 
2
2: King has 
2
2 cars that seat 
5
5 each and 
13
13 cars that seat 
7
7 each. So, 
2\times 5 + 13\times 7 = 101
2×5+13×7=101 people can travel together.

Test case 
3
3: King has 
14
14 cars that seat 
5
5 each and 
5
5 cars that seat 
7
7 each. So, 
14\times 5 + 7\times 7 = 105
14×5+7×7=105 people can travel together.

Test case 
4
4: King has 
8
8 cars that seat 
5
5 each and 
8
8 cars that seat 
7
7 each. So, 
8\times 5 + 8\times 7 = 96
8×5+8×7=96 people can travel together.