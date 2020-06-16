/*
ID: s9649051
TASK: crypt1
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

int n;
char cc;
set<char> z;
vector<char> v;

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int to_int(string s) {
    int ret = 0, mult = 1;
    for (int i=s.size()-1; i>=0; i--) {
        ret += (s[i] - '0') * mult;
        mult *= 10;
    }
    return ret;
}

bool valid_prod(string s1, string s2, int thred) {
    int v1 = to_int(s1);
    int v2 = to_int(s2);
    int prod = v1 * v2;
    if (prod >= thred)
        return false;
    string s = "";
    while (prod) {
        s.insert(s.begin(), ('0' + (prod % 10)));
        prod /= 10;
    }
    for (char c : s) {
        if (z.find(c) == z.end())
            return false;
    }
    return true;
}

int main() {
    setIO("crypt1");
    scanf("%d", &n);
    while (n--) {
        scanf(" %c", &cc);
        z.insert(cc);
    }
    for (char i : z) {
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    int len = v.size();
    int ret = 0;
    string p1, p2, res, sabc, sd, se, sde;
    for (int a=0; a<len; a++) {
        if (v[a] == '0') continue;
        for (int b=0; b<len; b++) {
            for (int c=0; c<len; c++) {
                sabc = "";
                sabc.append({v[a], v[b], v[c]});
                for (int d=0; d<len; d++) {
                    if (v[d] == '0') continue;
                    sd = v[d];
                    for (int e=0; e<len; e++) {
                        se = v[e];
                        sde = sd + se;
                        if (valid_prod(sabc, sd, 1000) &&
                            valid_prod(sabc, se, 1000) &&
                            valid_prod(sabc, sde, 10000)) {
                            ret++;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n", ret);
    return 0;
}