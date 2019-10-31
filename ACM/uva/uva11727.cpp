#include <stdio.h>

using namespace std;


int find_middle(const int &x, const int &y, const int &z) {
  if (x > y && x > z)
    return y > z ? y : z;
  else if (y > x && y > z)
    return x > z ? x : z;
  else
    return x > y ? x : y;
}


int main() {
  int TC, x, y, z, n = 1;
  scanf("%d", &TC);
  while (TC--) {
    scanf("%d %d %d", &x, &y, &z);
    printf("Case %d: %d\n", n++, find_middle(x, y, z));
  }
  return 0;
}
