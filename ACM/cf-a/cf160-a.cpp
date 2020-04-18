#include <stdio.h>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;

int main() {
    int n, ret{0}, acc{0}, sum{0};
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; ++i) scanf("%d", &a[i]);
    sort(a, a+n, greater<int>());
    sum = accumulate(a, a+n, 0);
    for (int i=0; i<n; ++i) {
        acc += a[i];
        ++ret;
        if (acc > sum / 2) break;
    }
    printf("%d\n", ret);
    return 0;
}