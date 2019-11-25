#include <stdio.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int b[n];
  for (int i=0; i<n; ++i) scanf("%d", &b[i]);
  int m;
  scanf("%d", &m);
  for (int j=0; j<m; ++j) {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x-1 != n-1) b[x] += b[x-1]-y;
    if (x-1 != 0) b[x-2] += y-1;
    b[x-1] = 0;
  }
  for (int k=0; k<n; ++k) printf("%d\n", b[k]);
  return 0;
}
