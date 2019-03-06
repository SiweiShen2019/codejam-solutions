#include <algorithm>
#include <cstdio>
#include <string>
#include <utility>
#include <vector>
using namespace std;

typedef pair<int, string> cup;

int main() {
  vector<cup> cups;
  int TC;
  scanf("%d", &TC);
  while (TC--) {
    char fst[21], snd[21];
    scanf("%s %s", fst, snd);
    cup c;
    if (isdigit(fst[0]))
      c = make_pair(stoi(fst, nullptr) / 2, snd);
    else
      c = make_pair(stoi(snd, nullptr), fst);
    cups.push_back(c);
  }
  sort(cups.begin(), cups.end());
  for (auto it = cups.begin(); it != cups.end(); it++)
    printf("%s\n", (it->second).c_str());
  return 0;
}
