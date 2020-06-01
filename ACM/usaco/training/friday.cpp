/*
ID: s9649051
TASK: friday
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

int n, first;
int ret[7] = {0}; // Sat. Sun. Mon. ... Fri.
int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

bool is_leap_year(int year) {
    if (year % 100 == 0) {
        return (year % 400 == 0);
    }
    return (year % 4 == 0);
}

int main() {
    setIO("friday");
    cin >> n;
    first = 2; // Mon is 2 cuz Sat is 0
    for (int i=1900; i<1900+n; i++) {
        for (int j=0; j<12; j++) {
            ret[(first + 12) % 7]++;
            if (j==1 && is_leap_year(i))
                first = (first + m[j] + 1) % 7;
            else
                first = (first + m[j]) % 7;
        }
    }
    cout << ret[0];
    for (int i=1; i<7; i++)
        cout << " " << ret[i];
    cout << endl;
    return 0;
}