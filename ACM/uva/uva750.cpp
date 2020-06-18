#include <bits/stdc++.h>
using namespace std;

int n, a, b, lc, row[8];

/* heuristic function to check if a position is valid */
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