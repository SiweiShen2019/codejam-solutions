/*
ID: s9649051
TASK: palsquare
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

int b;

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

// decimal to base
string convert(int n) {
    int rem;
    string ret = "";
    char c;
    while (n) {
        rem = n % b;
        n /= b;
        if (rem < 10)
            c = '0' + rem;
        else
            c = 'A' + (rem-10);
        ret.insert(ret.begin(), c);
    }
    return ret;
}

bool is_pal(string s) {
    int len = s.size();
    for (int i=0; i<len/2; i++) {
        if (s[i] != s[len-i-1])
            return false;
    }
    return true;
}

int main() {
    setIO("palsquare");
    scanf("%d", &b);
    int curr, square;
    string sq;
    for (int i=1; i<=300; i++) {
        square = pow(i, 2);
        sq = convert(square);
        if (is_pal(sq)) {
            printf("%s %s\n", convert(i).c_str(), sq.c_str());
        }
    }
    return 0;
}