#include <stdio.h>
using namespace std;

int main() {
  long n, b, d, total{0}, ret{0};
  scanf("%ld %ld %ld", &n, &b, &d);
  for (int i=0; i<n; ++i) {
    long a;
    scanf("%ld", &a);
    if (a > b) continue;
    total += a;
    if (total > d) {
      ++ret;
      total = 0;
    }
  }
  printf("%ld\n", ret);
  return 0;
}
