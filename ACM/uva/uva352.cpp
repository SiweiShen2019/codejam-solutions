#include <stdio.h>
using namespace std;

#define UNVISITED -1
#define VISITED 1

int n;
int visited[30][30];
char m[30][30];

void dfs(int x, int y) {
    visited[x][y] = VISITED;
    for (int i=-1; i<=1; ++i) {
        for (int j=-1; j<=1; ++j) {
            int tmp_x = x + i;
            int tmp_y = y + j;
            if (tmp_x < 0 || tmp_x >= n ||
                tmp_y < 0 || tmp_y >= n) continue;
            if (visited[tmp_x][tmp_y] == UNVISITED &&
                m[tmp_x][tmp_y] == '1')
                dfs(tmp_x, tmp_y);
        }
    }
}

int main() {
    int i, j, k, count;
    k = 1;
    while (scanf("%d", &n) != EOF) {
        for (i=0; i<n; ++i) {
            scanf("%s", &m[i]);
            for (j=0; j<n; ++j)
                visited[i][j] = UNVISITED;
        }
        count = 0;
        for (i=0; i<n; ++i) {
            for (j=0; j<n; ++j) {
                if (visited[i][j] == UNVISITED &&
                    m[i][j] == '1') {
                    dfs(i, j);
                    ++count;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",
               k, count);
        ++k;
    }
    return 0;
}