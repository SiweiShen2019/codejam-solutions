#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
  float n, t, k, d;
  scanf("%f %f %f %f", &n, &t, &k, &d);
  float d_t = d/t;
  float n_k = ceil(n/k);
  float diff{n_k - d_t};
  if (diff > 1.0)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}
