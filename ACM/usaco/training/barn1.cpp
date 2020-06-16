/*
ID: s9649051
TASK: barn1
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

int m, s, c;
vector<int> x;
vector<pair<int, int>> v; // {val, index}

void setIO(string ss) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((ss+".in").c_str(),"r",stdin);
    freopen((ss+".out").c_str(),"w",stdout);
}

int main() {
    setIO("barn1");
    scanf("%d %d %d", &m, &s, &c);
    if (m>=c) {
        printf("%d\n", c);
        return 0;
    }
    for (int i=0; i<c; i++) {
        scanf("%d", &s);
        x.push_back(s);
    }
    sort(x.begin(), x.end()); // sort the input
    for (int i=0; i<c; i++) {
        if (i > 0) {
            v.push_back({x[i]-x[i-1], i-1});
        }
    }
    sort(v.begin(), v.end()); // sort based on gaps
    int ret = 0;
    vector<int> r; // store indicies whose values contain top gaps
    for (int j=0; j<m-1; ++j) {
        r.push_back(v[v.size()-j-1].second);
    }
    r.push_back(c-1);
    sort(r.begin(), r.end()); // sort based on indicies
    int start=0, end=0;
    // calculate all covered parts [start, end]
    for (int j=0; j<m; ++j) {
        end = r[j];
        ret += (x[end]-x[start]+1);
        start = r[j]+1;
    }
    printf("%d\n", ret);
    return 0;
}