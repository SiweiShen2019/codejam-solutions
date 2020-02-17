#include <stdio.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int out[n];
  for (int i=0; i<n; ++i) {
    int tmp;
    scanf("%d", &tmp);
    out[tmp-1] = i+1;
  }
  printf("%d", out[0]);
  for (int j=1; j<n; ++j) printf(" %d", out[j]);
  printf("\n");
  return 0;
}
