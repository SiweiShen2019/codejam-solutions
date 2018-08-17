#include <iostream>
#include <utility>
#include <vector>

using namespace std;


int solve(vector<pair<int, int>> &lines, int &city) {
    int count{0};
    for (auto &p : lines) {
        int lo{get<0>(p)};
        int hi{get<1>(p)};
        if (city>=lo && city<=hi) ++count;
    }
    return count;
}


void process() {
    int pair_number;
    vector<pair<int, int>> lines;
    cin >> pair_number;
    for (int i=0; i<pair_number; ++i) {
        int start, end;
        cin >> start >> end;
        lines.push_back(make_pair(start, end));
    }
    int test_number;
    cin >> test_number;
    for (int i=0; i<test_number; ++i) {
        int city;
        cin >> city;
        if (i !=0) cout << " ";
        cout << solve(lines, city);
    }
    cout << endl;
}


int main() {
    int t;
    cin >> t;
    for (int i=1; i<=t; ++i) {
        cout << "Case #" << i << ": ";
        process();
    }
    return 0;
}