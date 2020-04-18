#include <stdio.h>
#include <limits.h>
using namespace std;


int main() {
    int n, min_count, max_count, ret;
    long a, min_, max_;
    scanf("%d", &n);
    min_ = LONG_MAX;
    max_ = LONG_MIN;
    for (int i=0; i<n; ++i) {
        scanf("%ld", &a);
        if (a > max_) {
            max_ = a;
            max_count = 1;
        } else if (a == max_) {
            ++max_count;
        }
        if (a < min_) {
            min_ = a;
            min_count = 1;
        } else if (a == min_) {
            ++min_count;
        } 
    }
    ret = n - min_count - max_count;
    printf("%d\n", ret<=0 ? 0 : ret);
    return 0;
}