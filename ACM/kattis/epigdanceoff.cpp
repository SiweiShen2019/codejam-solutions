#include<cstdio>
using namespace std;

#define MAXD 2010

char d[MAXD][MAXD];
int n, m, ret;

int main() {
    scanf("%d %d", &n, &m);
    for (int i=0; i<n; ++i) {
        scanf("%s", &d[i]);
    }
    ret = 0;
    for (int j=0; j<m; ++j) {
       bool complete = true;
       for (int i=0; i<n; ++i) {
           if (d[i][j] == '$') {
               complete = false;
               break;
           }
       } 
       if (complete) ++ret;
    }
    printf("%d\n", ret+1);
}