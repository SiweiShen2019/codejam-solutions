#include <cstdio>
#include <cstring>

#include <iostream>
#include <string>

using namespace std;


char str[100001];

void convert() {
    string ret = "";
    string temp = "";
    bool front{false};
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        if (str[i] == '[' || str[i] == ']') {
            if (front) {
                ret.insert(0, temp);
                temp = "";
            } else {
                ret.insert(ret.size(), temp);
                temp = "";
            }
            if (str[i] == '[') {
                front = true;
            } else {
                front = false;
            }
        } else {
            temp.push_back(str[i]);
        }
    }
    if (front) {
        ret.insert(0, temp);
    } else {
        ret.insert(ret.size(), temp);
    }
    cout << ret << endl;
}


int main() {
    while (scanf("%s", str) != EOF) {
        convert();
    }
    return 0;
}
