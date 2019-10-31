#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> list;
  for (int i = 0; i < n; ++i) {
    int tmp;
    scanf("%d", &tmp);
    list.push_back(tmp);
  }
  sort(list.begin(), list.end());
  printf("%d", list[0]);
  for (int i = 1; i < n; ++i) {
    printf(" %d", list[i]);
  }
  printf("\n");
  return 0;
}
