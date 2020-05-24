#include <stdio.h>
#include <algorithm>
using namespace std;

long n;
int a[200010];
int t;

int main() {
    scanf("%ld %d", &n, &t);
    for (auto i=0; i<n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    int ret, curr;
    switch (t) {
    case 1:
        ret = 0;
        for (auto i=n-1; i>0; i--) {
            if (a[i] > 7777)
                continue;
            for (auto j=i-1; j>=0; j--) {
                if (a[i] + a[j] == 7777) {
                    printf("Yes\n");
                    return 0;
                } else if (a[i] + a[j] < 7777) {
                    break; // inner for-j loop
                }
            }
        }
        printf("No\n");
        break;
    case 2:
        for (auto i=1; i<n; ++i) {
            if (a[i] == a[i-1]) {
                printf("Contains duplicate\n");
                return 0;
            }
        }
        printf("Unique\n");
        break;
    case 3:
        ret = 1;curr = a[0];
        for (auto i=1; i<n; ++i) {
            if (a[i] == curr) {
                ++ret;
                if (ret > n/2) {
                    printf("%d\n", curr);
                    return 0;
                }
            } else {
                curr = a[i];
                ret = 1;
            }
        }
        printf("-1\n");
        break;
    case 4:
        if (n & 1)
            printf("%d\n", a[n/2]);
        else
            printf("%d %d\n", a[n/2 - 1], a[n/2]);
        break;
    case 5:
        for (auto i=0; i<n; ++i) {
            int tmp = a[i];
            if (tmp >= 100 && tmp <= 999)
                printf("%d ", tmp);
        }
        printf("\n");
        break;
    }
    return 0;
}