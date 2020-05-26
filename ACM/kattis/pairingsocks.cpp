#include <stdio.h>
#include <stack>
using namespace std;

typedef stack<long> sl;

int n, tmp, ret;
sl a, b;


int main() {
    scanf("%d", &n);
    n *= 2;
    while (n--) {
        scanf("%d", &tmp);
        a.push(tmp);
    }
    ret = 0;
    while (!a.empty()) {
        if (b.empty() || b.top() != a.top()) {
            tmp = a.top();
            b.push(tmp);
            a.pop();
        } else {
            a.pop();
            b.pop();
        }
        ++ret;
    }
    if (b.empty())
        printf("%d\n", ret);
    else
        printf("impossible\n");
    return 0;
}