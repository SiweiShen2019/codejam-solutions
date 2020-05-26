#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<int> s;
int n, k, tmp;
string c;

int main() {
    cin >> n >> k;
    while (k--) {
        cin >> c;
        if (c[0] == 'u') {
            cin >> tmp;
            while (tmp--) {
                s.pop();
            }
        } else {
            tmp = stoi(c);
            s.push(tmp);
        }
    }
    tmp = 0;
    while (!s.empty()) {
        tmp += s.top();
        s.pop();
    }
    printf("%d\n", (n + (tmp%n)) % n);
    return 0;
}