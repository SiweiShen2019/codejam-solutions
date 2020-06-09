/*
ID: s9649051
TASK: transform
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;

int n;
char m1[15][15], m2[15][15];

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

pi p1(int x, int y) {return {y, n-x-1};}
pi p2(int x, int y) {return {n-x-1, n-y-1};}
pi p3(int x, int y) {return {n-y-1, x};}
pi p4(int x, int y) {return {x, n-y-1};}
pi p51(int x, int y) {
    pi ret = p4(x, y);
    return p1(ret.first, ret.second);
}
pi p52(int x, int y) {
    pi ret = p4(x, y);
    return p2(ret.first, ret.second);
}
pi p53(int x, int y) {
    pi ret = p4(x, y);
    return p3(ret.first, ret.second);
}
pi p6(int x, int y) {return {x, y};}

bool check(pi (*f)(int, int)) {
    pi tmp;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            tmp = (*f)(i, j);
            if (m1[i][j] != m2[tmp.first][tmp.second])
                return false;
        }
    }
    return true;
}

int main() {
    setIO("transform");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%s", &m1[i]);
    }
    for (int i=0; i<n; i++) {
        scanf("%s", &m2[i]);
    }
    if (check(p1)) {
        printf("1\n");
    } else if (check(p2)) {
        printf("2\n");
    } else if (check(p3)) {
        printf("3\n");
    } else if (check(p4)) {
        printf("4\n");
    } else if (check(p51) || check(p52) || check(p53)) {
        printf("5\n");
    } else if (check(p6)) {
        printf("6\n");
    } else {
        printf("7\n");
    }
    return 0;
}