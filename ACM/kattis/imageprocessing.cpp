#include <stdio.h>
using namespace std;

#define MAXD 25

int h,w,n,m;
int image[MAXD][MAXD];
int kernel[MAXD][MAXD];

int main() {
    scanf("%d %d %d %d", &h, &w, &n, &m);
    for (int i=0; i<h; ++i) {
        for (int j=0; j<w; ++j) {
            scanf("%d", &image[i][j]);
        }
    }
    // reversely read the kernel
    for (int i=n-1; i>=0; i--) {
        for (int j=m-1; j>=0; j--) {
            scanf("%d", &kernel[i][j]);
        }
    }
    for (int i=0; i<h-n+1; ++i) {
        for (int j=0; j<w-m+1; ++j) {
            int ret = 0;
            for (int r=0; r<n; ++r) {
                for (int c=0; c<m; ++c) {
                    ret += (image[i+r][j+c] * kernel[r][c]);
                }
            }
            printf("%d ", ret);
        }
        printf("\n");
    }
    return 0;
}