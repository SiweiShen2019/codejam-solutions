#include <stdio.h>
using namespace std;

int p, k;
int a[25];

int calc() {
    int curr, j, steps = 0;
    for (int i=0; i<20; ++i) {
        scanf("%d", &curr);
        for (j=0; j<i; ++j) {
            if (a[j] > curr) {
                for (int m=i; m>j; m--) {
                    a[m] = a[m-1];
                    ++steps;
                }
                break;
            }
        }
        a[j] = curr;
    }
    return steps;
}

int main() {
    scanf("%d", &p);
    while (p--) {
        scanf("%d", &k);
        printf("%d %d\n", k, calc());
    }
    return 0;
}