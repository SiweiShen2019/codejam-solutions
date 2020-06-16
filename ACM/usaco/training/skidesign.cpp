/*
ID: s9649051
TASK: skidesign
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX_N 1010

int n, hill[MAX_N];

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("skidesign");
    scanf("%d", &n);
    for (int i=0; i<n; i++)
        scanf("%d", &hill[i]);
    sort(begin(hill), begin(hill)+n);
    int hi, tmp, ret = INT_MAX;
    for (int lo=0; lo<=83; lo++) {
        if (lo > hill[n-1]) // no hill beyond this range
            break;
        tmp = 0;
        hi = lo + 17;
        for (int j=0; j<n; j++) {
            if (hill[j] < lo) {
                tmp += pow(lo-hill[j], 2);
            } else if (hill[j] > hi) {
                tmp += pow(hill[j]-hi, 2);
            }
        }
        ret = min(ret, tmp);
    }
    printf("%d\n", ret);
    return 0;
}