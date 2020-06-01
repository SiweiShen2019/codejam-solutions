/*
ID: s9649051
TASK: gift1
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

map<string, int> m;
vector<string> v;
int n, k, each, over;
string s;

int main() {
    setIO("gift1");
    cin >> n;
    while (n--) {
        cin >> s;
        m[s] = 0;
        v.push_back(s);
    }
    while (cin >> s) {
        cin >> n >> k;
        if (!k)
            continue;
        each = n / k;
        over = n - (each * k);
        m[s] += (over - n);
        for (int i=0; i<k; ++i) {
            cin >> s;
            m[s] += each;
        }
    }
    for (auto key : v) {
        cout << key << " " << m[key] << endl;
    }
    return 0;
}