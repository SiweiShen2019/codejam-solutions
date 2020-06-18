# Problem Solving Paradigms
## Complete Search

### Pattern: Brute Force in Duplicate Intervals
This is a classical application of complete search in competitive programming, usually seen in problems with small/exhaustive data so that you can actually conduct a complete search without resulting in TLE. The solution is to iterate all intervals (only once), and for each interval mark all units in this interval. At the end, iterate through units to find the result the problem asked for.

Examples:
- USACO training gateway: Milking Cows (see [milk2](../ACM/usaco/training/milk2.cpp))
- [Minimum Cabs](https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/minimum-cabs-0798cfa5/)

### Pattern: Recursive Complete Search (Backtracking)
A classical problem is "8 queen". There a few take-aways:
- Base case of recursion/backtracking is where to stop.
- Recursive part is the actual "complete search" part, usually use loops, and sometimes need to "backtrack", or set status back to origin so that it won't affect following enumeration.
- A heuristic function to determine the validity of a possibility is usually needed. 

For detailed implementation, check [uva750.cpp](../ACM/uva/uva750.cpp):

Examples:
- USACO training gateway: Wormholes (see [wormhole.cpp](../ACM/usaco/training/wormhole.cpp))

## Greedy
Some CS textbooks claim that a problem must exhibit these two properties in order for a greedy algorithm to work:
- It has optimal sub-structures. Optimal solution to the problem contains optimal solutions to the sub-problems.
- It has the greedy property (diﬃcult to prove in time-critical contest environment!). If we make a choice that seems like the best at the moment and proceed to solve the remaining subproblem, we reach the optimal solution. We will never have to reconsider our previous choices.

### Pattern: Naive Greedy Strategy
A classical problem is to calculate the maximum number of things can be done in limited time. The solution is straightforward: sort the given array ascendingly and greedily complete things one by one until some condition is meet (time limit in this case).

Examples:
- USACO training gateway: Mixing Milk (see [milk.cpp](../ACM/usaco/training/milk.cpp))
- [Being greedy for Water](https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/tutorial/)
