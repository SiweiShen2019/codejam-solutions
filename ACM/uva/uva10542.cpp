#include <stdio.h>
#include <string>
using namespace std;

int n, s_x, s_y, e_x, e_y, length, width;
string path = "IEHOVA#";
char m[10][10];

void walk() {
    int x = s_x, y = s_y;
    string ret = "";
    for (char c : path) {
        if (m[x][y+1] == c) {
            y += 1;
            ret += "right ";
        } else if (m[x][y-1] == c) {
            y -= 1;
            ret += "left ";
        } else if (m[x-1][y] == c) {
            x -= 1;
            ret += "forth ";
        }
    }
    *(ret.end()-1) = '\n';
    printf("%s", ret.c_str());
}

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &length, &width);
        for (int i=0; i<length; ++i) {
            scanf("%s", m[i]);
            for (int j=0; j<width; ++j) {
                if (m[i][j] == '#') {
                    e_x = i;
                    e_y = j;
                } else if (m[i][j] == '@') {
                    s_x = i;
                    s_y = j;
                }
            }
        }
        walk();
    }
    return 0;
}