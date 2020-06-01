#include <stdio.h>
#include <utility>
#include <vector>
using namespace std;

int s, n, idx;
vector<pair<int, int>> v;

int main() {
    scanf("%d %d", &s, &n);
    for (int i=0; i<n; ++i) {
        v.push_back({0, i+1});
    }
    idx = 0;
    while (v.size() > 1) {
        idx = (idx+s-1) % v.size();
        switch (v[idx].first) {
            case 0:
                v[idx].first = 1;
                v.insert(v.begin()+idx+1, {1, v[idx].second});
                break;
            case 1:
                v[idx].first = 2;
                ++idx;
                break;
            case 2:
                v.erase(v.begin()+idx);
                break;
        }
    }
    printf("%d\n", v[0].second);
    return 0;
}