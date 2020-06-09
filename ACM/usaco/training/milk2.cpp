/*
ID: s9649051
TASK: milk2
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

int n, a, b, curr, m_time=0, i_time=0, tmp=1, aa=INT_MAX, bb=0;
int t[1000010] = {0};

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("milk2");
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        if (a < aa)
            aa = a;
        if (b > bb)
            bb = b;
        for (int i=a; i<b; i++)
            t[i] = 1;
    }
    curr = t[aa];
    for (int i=aa+1; i<bb; i++) {
        if (t[i] == curr) {
            tmp++;
        } else {
            if (curr == 1 && tmp > m_time)
                m_time = tmp;
            if (curr == 0 && tmp > i_time)
                i_time = tmp;
            curr = t[i];
            tmp = 1;
        }
    }
    if (curr == 1 && tmp > m_time)
        m_time = tmp;
    printf("%d %d\n", m_time, i_time);
    return 0;
}