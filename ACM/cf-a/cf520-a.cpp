#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main() {
    string s;
    bool flag;
    int n;
    int a[26];
    flag = true;
    cin >> n;
    cin >> s;
    for (int i=0; i<26; ++i) a[i] = 0;
    for (int i=0; i<n; ++i) {
        a[tolower(s[i]) - 'a'] = 1;
    }
    for (int i=0; i<26; ++i) {
        if (a[i] == 0) {
            flag = false;
            break;
        }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}