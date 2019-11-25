#include <stdio.h>
using namespace std;

int min(int a, int b) {
  if (a < b)
    return a;
  else
    return b;
}

int main() {
  int count{0};
  char prev{'a'}, c;
  while (scanf("%c", &c) == 1 && c != '\n') {
    if (prev < c)
      count += min(prev - c + 26, c - prev);
    else
      count += min(c - prev + 26, prev - c);
    prev = c;
  }
  printf("%d\n", count);
  return 0;
}
