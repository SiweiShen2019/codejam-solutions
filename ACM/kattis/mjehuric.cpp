#include <stdio.h>
#include <algorithm>
#include <iterator>
#include <utility>
using namespace std;

int a[10];

void log() {
    for (int i=0; i<5; ++i)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    for (int i=0; i<5; ++i)
        scanf("%d", &a[i]);
    while (!is_sorted(begin(a), begin(a)+5)) {
        for (int i=0; i<4; ++i) {
            if (a[i] > a[i+1]) {
                swap(a[i], a[i+1]);
                log();
            }
        }
    }
    return 0;
}