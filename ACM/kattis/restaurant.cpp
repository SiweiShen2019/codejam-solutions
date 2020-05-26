#include <stdio.h>
using namespace std;

int a, b;
int n, m;
char c[4];
bool first;

int main() {
    first = true;
    while (scanf("%d", &n), n) {
        a = 0;
        b = 0;
        if (first)
            first = false;
        else
            printf("\n"); 
        while (n--) {
            scanf("%s %d", c, &m);
            if (c[0] == 'D') {
                printf("DROP 1 %d\n", m);
                a += m;
            } else {
                if (m <= b) {
                    printf("TAKE 2 %d\n", m);
                    b -= m;
                } else {
                    if (b) {
                        printf("TAKE 2 %d\n", b);
                        m -= b;
                        b = 0;
                    }
                    printf("MOVE 1->2 %d\n", a);
                    b += a;
                    a = 0;
                    printf("TAKE 2 %d\n", m);
                    b -= m;
                }
            }
        }
    }
    return 0;
}