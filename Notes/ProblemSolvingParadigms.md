# Problem Solving Paradigms
## Complete Search

### Pattern: Recursive Complete Search (backtracking)
A classical problem is "8 queen". There a few take-aways:
- Base case of recursion/backtracking is where to stop.
- Recursive part is the actual "complete search" part, usually use loops, and sometimes need to "backtrack", or set status back to origin so that it won't affect following enumeration.
- A heuristic function to determine the validity of a possibility is usually needed. 

Here is the solution to [uva750 8 Queens Chess Problem](../ACM/uva/uva750.cpp):

```cpp
int n, a, b, lc, row[8];

bool can_place(int r, int c) {
    for (int p=0; p<c; p++) { // check all previous columns
        if (row[p] == r || (abs(p-c) == abs(row[p]-r)))
            return false;
    }
    return true;
}

void backtrack(int c) {
    if (c == 8 && row[b] == a) { // base case
        printf("%2d      %d", ++lc, row[0]+1);
        for (int i=1; i<8; i++)
            printf(" %d", row[i]+1);
        printf("\n");
        return;
    }
    for (int r=0; r<8; r++) { // try all possible rows
        if (c == b && r != a) // one queen per row
            continue;
        if (can_place(r, c)) {
            row[c] = r;
            backtrack(c+1);
        }
    }
}

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        a--, b--; // 0-based
        lc = 0;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        backtrack(0);
        if (n)
            printf("\n");
    }
    return 0;
}
```

Examples:
- USACO training gateway: Wormholes (see [wormhole.cpp](../ACM/usaco/training/wormhole.cpp))

## Greedy
Some CS textbooks claim that a problem must exhibit these two properties in order for a greedy algorithm to work:
- It has optimal sub-structures. Optimal solution to the problem contains optimal solutions to the sub-problems.
- It has the greedy property (diﬃcult to prove in time-critical contest environment!). If we make a choice that seems like the best at the moment and proceed to solve the remaining subproblem, we reach the optimal solution. We will never have to reconsider our previous choices.

### Pattern: Naive Greedy Strategy
A classical problem is to calculate the minimum cost of buying products from different retailers. The solution is straightforward: sort retailers' prices and greedily buy from those who offer lower price until fulfill the demand.

Examples:
- USACO training gateway: Mixing Milk (see [milk.cpp](../ACM/usaco/training/milk.cpp))
