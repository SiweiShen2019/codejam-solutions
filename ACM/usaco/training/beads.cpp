/*
ID: s9649051
TASK: beads
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

int n, ret, tmp;
string ss, trans;

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int count(string s) {
    int l=0, r=0;
    char lc='w', rc='w';
    while (!s.empty()) {
        if (s.back() == 'w') {
            r++;
        } else {
            if (rc == 'w') {
                rc = s.back();
                r++;
            } else {
                if (rc == s.back())
                    r++;
                else
                    break;
            } 
        }
        s.pop_back();
    }
    while (!s.empty()) {
        if (s.front() == 'w') {
            l++;
        } else {
            if (lc == 'w') {
                lc = s.front();
                l++;
            } else {
                if (lc == s.front())
                    l++;
                else
                    break;
            }
        }
        s.erase(s.begin());
    }
    return l + r;
}

int main() {
    setIO("beads");
    cin >> n;
    cin >> ss;
    ret = 0;
    for (int i=0; i<n; i++) {
        ss.push_back(ss.front());
        ss.erase(ss.begin());
        tmp = count(ss);
        if (tmp > ret)
            ret = tmp;
    }
    cout << ret << endl;
    return 0;
}