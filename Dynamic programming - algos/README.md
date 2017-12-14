Knapsack problem
In knapsack problem we are given objects,also weight of objects i.e. object i has weight w(i).
We suppose that knapsack or bag has capacity m.
THe objective of problem to fill the knapsack so as to maximize the total profit earned with a constrain that total weight of all the object in a Knapsack should me atmost m.
In 0-1 Knapsack, items cannot be broken which means the thief should take the item as a whole or should leave it. This is reason behind calling it as 0-1 Knapsack.
Hence, in case of 0-1 Knapsack, the value of xi can be either 0 or 1, where other constraints remain the same.

0-1 Knapsack cannot be solved by Greedy approach. 
Greedy approach does not ensure an optimal solution. In many instances, Greedy approach may give an optimal solution
To solve 0-1 Knapsack, Dynamic Programming approach is required.

Dynamic-Programming Approach

Let i be the highest-numbered item in an optimal solution S for W dollars. Then S' = S - {i} is an optimal solution for W - wi dollars and the value to the solution S is Vi plus the value of the sub-problem.
We can express this fact in the following formula: define c[i, w] to be the solution for items 1,2, … , i and the maximum weight w.

The algorithm takes the following inputs
The maximum weight W
The number of items n
The two sequences v = <v1, v2, …, vn> and w = <w1, w2, …, wn>
The set of items to take can be deduced from the table, starting at c[n, w] and tracing backwards where the optimal values came from.
If c[i, w] = c[i-1, w], then item i is not part of the solution, and we continue tracing with c[i-1, w]. Otherwise, item i is part of the solution, and we continue tracing with c[i-1, w-W].

Analysis
This algorithm takes θ(n, w) times as table c has (n + 1).(w + 1) entries, where each entry requires θ(1) time to compute.
