#include <cstdio>
#include <vector>
using namespace std;

int v[1000005];

int main() {
  int n, h, ans = 0;
  scanf("%d", &n);
  while (n--) {
    scanf("%d", &h);
    v[h]++;
    if (v[++h] > 0)
      v[h]--;
    else
      ans++;
  }
  printf("%d\n", ans);
  return 0;
}
