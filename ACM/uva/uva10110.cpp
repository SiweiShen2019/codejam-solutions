#include <stdio.h>
#include <math.h>
using namespace std;

void check(size_t &n) {
  size_t sq = sqrt(n);
  if (sq * sq == n)
    printf("yes\n");
  else
    printf("no\n");
}

int main() {
  size_t n;
  while (scanf("%ld", &n), n)
    check(n);
  return 0;
}
