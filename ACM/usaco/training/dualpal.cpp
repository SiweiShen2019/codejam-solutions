/*
ID: s9649051
TASK: dualpal
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

int n, s;

void setIO(string ss) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((ss+".in").c_str(),"r",stdin);
    freopen((ss+".out").c_str(),"w",stdout);
}

string convert(int x, int base) {
    string ret = "";
    int rem;
    while (x) {
        rem = x % base;
        x /= base;
        ret.insert(ret.begin(), ('0'+rem));
    }
    return ret;
}

bool is_pal(string y) {
    int len = y.size();
    for (int i=0; i<len/2; i++) {
        if (y[i] != y[len-i-1])
            return false;
    }
    return true;
}

int main() {
    setIO("dualpal");
    scanf("%d %d", &n, &s);
    int tmp, count=0;
    s++;
    while (count < n) {
        tmp = 0;
        for (int i=2; i<=10; i++) {
            if (is_pal(convert(s, i)))
                tmp++;
            if (tmp >= 2) {
                printf("%d\n", s);
                count++;
                break;
            }
        }
        s++;
    }
    return 0;
}