#include <stdio.h>
#include <algorithm>
using namespace std;

#define MAXD 1010

long d[MAXD][MAXD];
int n, m;

int main() {
    scanf("%d %d", &n, &m);
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            scanf("%ld", &d[i][j]);
        }
    }
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            int left = 0, up = 0;
            if (j > 0) left = d[i][j-1];
            if (i > 0) up = d[i-1][j];
            d[i][j] += max(left, up);
        }
    }
    for (int i=0; i<n; ++i) {
        printf("%ld ", d[i][m-1]);
    }
    printf("\n");
    return 0;
}
