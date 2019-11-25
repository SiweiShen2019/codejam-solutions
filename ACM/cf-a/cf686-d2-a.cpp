#include <stdio.h>
using namespace std;

int main() {
  int n, distress{0};
  long long x;
  scanf("%d %lld", &n, &x);
  while (n--) {
    char op;
    long ice;
    scanf(" %c %ld", &op, &ice);
    if (op == '+') {
      x += ice;
    } else {
      if (x >= ice) x -= ice;
      else ++distress;
    }
  }
  printf("%lld %d\n", x, distress);
  return 0;
}
