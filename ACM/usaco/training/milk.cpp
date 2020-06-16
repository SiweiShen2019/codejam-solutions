/*
ID: s9649051
TASK: milk
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;
int m, n, p, a;

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("milk");
    scanf("%d %d", &n, &m);
    while (m--) {
        scanf("%d %d", &p, &a);
        v.push_back({p, a});
    }
    sort(v.begin(), v.end());
    int ret = 0;
    for (auto q : v) {
        if (q.second <= n) {
            n -= q.second;
            ret += q.first * q.second;
        } else {
            ret += q.first * n;
            break;
        }
    }
    printf("%d\n", ret);
    return 0;
}