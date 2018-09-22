#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>

using namespace std;


unordered_map<string, int> map;


void initialize() {
    queue<string> q;
    int count{1};
    for (char c{'a'}; c <= 'z'; ++c) {
        q.push(string(1, c));
    }
    while (!q.empty()) {
        string curr = q.front();
        q.pop();
        map[curr] = count;
        ++count;
        if (curr.size() == 5) continue;
        for (char c = curr[curr.size() - 1] + 1; c <= 'z'; ++c) {
            q.push(curr + c);
        }
    }
}


int main() {
    initialize();
    string s;
    while (cin >> s) {
        if (map.count(s) > 0) {
            cout << map[s] << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
