#include <stdio.h>
#include <unordered_map>
using namespace std;

int main() {
  int n, count{0};
  scanf("%d", &n);
  int home[n];
  unordered_map<int, int> m;
  for (int i = 0; i < n; ++i) {
    int guest;
    scanf("%d %d", &home[i], &guest);
    if (m.count(guest) < 0)
      m[guest] = 0;
    else
      ++m[guest];
  }
  for (int j = 0; j < n; ++j) {
    if (m.count(home[j]) > 0) count += m[home[j]];
  }
  printf("%d\n", count);
  return 0;
}
