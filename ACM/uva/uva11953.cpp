#include <stdio.h>
using namespace std;

#define UNVISITED -1
#define VISITED 1

int d;
char m[105][105];
char v[105][105];

void dfs(int x, int y) {
    v[x][y] = VISITED;
    for (int i=-1; i<=1; ++i) {
        for (int j=-1; j<=1; ++j) {
            int tmp_x = x+i, tmp_y = y+j;
            if (tmp_x < 0 || tmp_x > d ||
                 tmp_y < 0 || tmp_y > d ||
                 ((i + j) != 1 && (i + j) != -1)) {
                continue;
            }
            if ((m[tmp_x][tmp_y] == 'x' || m[tmp_x][tmp_y] == '@') 
                && v[tmp_x][tmp_y] == UNVISITED) {
                dfs(tmp_x, tmp_y);
            }
        }
    }
}

int main() {
    int n, ret, i, j, k;
    scanf("%d", &n);
    for (k=1; k<=n; ++k) {
        scanf("%d", &d);
        ret = 0;
        for (i=0; i<d; ++i) {
            scanf("%s", &m[i]);
            for (j=0; j<d; ++j) {
                v[i][j] = UNVISITED;
            }
        }
        for (i=0; i<d; ++i) {
            for (j=0; j<d; ++j) {
                if (m[i][j] == 'x' && v[i][j] == UNVISITED) {
                    dfs(i, j);
                    ++ret;
                }
            }
        }
        printf("Case %d: %d\n", k, ret);
    }
    return 0;
}