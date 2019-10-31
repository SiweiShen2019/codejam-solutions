#include <cstdio>
#include <cstdlib> // abs
using namespace std;

int main() {
    int n;
    int dis{0};
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d", &n);
            if (n == 1)
                dis = abs(i - 2) + abs(j - 2);
        }
    }
    printf("%d\n", dis);
    return 0;
}