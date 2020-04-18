#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string s1, s2, s3, orig, ret;
    int offset, pos;
    char cmd;
    s1 = "qwertyuiop";
    s2 = "asdfghjkl;";
    s3 = "zxcvbnm,./";
    cin >> cmd;
    cin >> orig;
    offset = cmd == 'R' ? (-1) : 1;
    for (char c : orig) {
        if ((pos=s1.find(c)) != -1) {
            ret += s1[pos+offset];
        } else if ((pos=s2.find(c)) != -1) {
            ret += s2[pos+offset];
        } else if ((pos=s3.find(c)) != -1) {
            ret += s3[pos+offset];
        }
    }
    cout << ret << endl;
    return 0;
}