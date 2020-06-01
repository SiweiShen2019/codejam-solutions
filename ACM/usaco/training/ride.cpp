/*
ID: s9649051
TASK: ride
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

string c, g;

long calc(string s) {
    long ret = 1;
    for (auto i : s) {
        ret *= (i - 'A' + 1);
    }
    return ret;
}

int main() {
    setIO("ride");
    cin >> c;
    cin >> g;
    if (calc(c) % 47 == calc(g) % 47)
        cout << "GO" << endl;
    else
        cout << "STAY" << endl;
    return 0;
}