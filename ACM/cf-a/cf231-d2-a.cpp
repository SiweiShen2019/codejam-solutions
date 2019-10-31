#include <cstdio>
using namespace std;

int main() {
    int n, a, b, c;
    int count{0};
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2)
            ++count;
    }
    printf("%d\n", count);
    return 0;
}