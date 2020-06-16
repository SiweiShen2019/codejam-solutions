# Problem Solving Paradigms
## Greedy
Some CS textbooks claim that a problem must exhibit these two properties in order for a greedy algorithm to work:
- It has optimal sub-structures. Optimal solution to the problem contains optimal solutions to the sub-problems.
- It has the greedy property (diﬃcult to prove in time-critical contest environment!). If we make a choice that seems like the best at the moment and proceed to solve the remaining subproblem, we reach the optimal solution. We will never have to reconsider our previous choices.

### Pattern 1: Naive Greedy Strategy
A classical problem is to calculate the minimum cost of buying products from different retailers. The solution is straightforward: sort retailers' prices and greedily buy from those who offer lower price until fulfill the demand.

Examples:
- USACO training gateway: Mixing Milk (see [milk.cpp](../ACM/usaco/training/milk.cpp))
