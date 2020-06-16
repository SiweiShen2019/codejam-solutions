/*
ID: s9649051
TASK: combo
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> ii;

int n, x, y, z;
set<ii> t;

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int calc(int p, int step) {
    int ret = (p + step) % n;
    if (ret <= 0)
        return n + ret;
    return ret;
}

void gen(int v1, int v2, int v3) {
    int t1, t2, t3;
    for (int i=-2; i<=2; i++) {
        t1 = calc(v1, i);
        for (int j=-2; j<=2; j++) {
            t2 = calc(v2, j);
            for (int k=-2; k<=2; k++) {
                t3 = calc(v3, k);
                t.insert({t1, t2, t3});
            }
        }
    }
}

int main() {
    setIO("combo");
    scanf("%d", &n);
    for (int j=0; j<2; j++) {
        scanf("%d %d %d", &x, &y, &z);
        gen(x, y, z);
    }
    printf("%d\n", t.size());
    return 0;
}