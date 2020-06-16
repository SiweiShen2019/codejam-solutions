/*
ID: s9649051
TASK: wormhole
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX_N 12

int n, paired[MAX_N+1], next_right[MAX_N+1];
long x[MAX_N+1], y[MAX_N+1];


void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

bool cycle_exist() {
    int start;
    for (int i=1; i<=n; i++) { // start at any position
        start = i;
        for (int j=1; j<=n; j++) // run n steps
            start = next_right[paired[start]];
        if (start != 0)
            return true;
    }
    return false;
}

int solve() {
    int i, total=0;
    // find the first unpaired position
    for (i=1; i<=n; i++)
        if (paired[i] == 0)
            break;
    if (i > n) {
        return cycle_exist() ? 1 : 0;
    }
    for (int j=i+1; j<=n; j++) {
        if (paired[j] == 0) {
            paired[i] = j;
            paired[j] = i;
            total += solve();
            paired[i] = paired[j] = 0; // backtrack
        }
    }
    return total;
}

int main() {
    setIO("wormhole");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        scanf("%ld %ld", &x[i], &y[i]);
    for (int i=1; i<=n; i++) { // fill next_right for each position
        for (int j=1; j<=n; j++) {
            if (y[i] == y[j] && x[i] < x[j] &&
                ((next_right[i] == 0 || x[j] < x[next_right[i]])) )
                next_right[i] = j;
        }
    }
    printf("%d\n", solve());
    return 0;
}