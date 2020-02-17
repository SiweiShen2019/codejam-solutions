#include <stdio.h>
using namespace std;

int main() {
  int n, ptr, tmp;
  scanf("%d", &n);
  ptr = n-1;
  int snack[n];
  for (int j=0; j<n; ++j) snack[j] = 0;
  for (int i=0; i<n; ++i) {
    scanf("%d", &tmp);
    snack[tmp-1] = 1;
    if (tmp-1 == ptr) {
      printf("%d", ptr+1);
      ptr--;
      while (ptr>=0 && snack[ptr]) {
        printf(" %d", ptr+1);
        ptr--;
      }
    }
    printf("\n");
  }
  return 0;
}
