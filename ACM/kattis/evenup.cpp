#include <stdio.h>
#include <stack>
using namespace std;

typedef stack<int> si;

long n;
int tmp;
si a, b;

int main() {
    scanf("%ld", &n);
    while (n--) {
        scanf("%d", &tmp);
        a.push(tmp);
    }
    while (!a.empty()) {
        if (b.empty() || (a.top() + b.top()) & 1) {
            tmp = a.top();
            b.push(tmp);
            a.pop();
        } else {
            a.pop();
            b.pop();
        }
    }
    printf("%lu\n", b.size());
    return 0;
}