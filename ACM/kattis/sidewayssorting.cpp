#include <ctype.h>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;

char a[20][20];
string s[20];
int r, c;
char tmp;
bool first = true;

// assume x and y have same length
bool comp(string x, string y) {
    for (int i=0; i<x.size(); ++i) {
        if (tolower(x[i]) > tolower(y[i])) {
            return false;
        } else if (tolower(x[i]) < tolower(y[i])) {
            return true;
        }
    }
    return false;
}

int main() {
    while (scanf("%d %d", &r, &c), (r || c)) {
        if (first)
            first = false;
        else
            printf("\n");
        for (int i=0; i<r; ++i) {
            for (int j=0; j<c; ++j) {
                scanf(" %c", &a[j][i]);
            }
        }
        for (int i=0; i<c; ++i)
            s[i] = a[i];
        stable_sort(begin(s), begin(s)+c, comp);
        for (int i=0; i<r; ++i) {
            for (int j=0; j<c; ++j) {
                printf("%c", s[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}