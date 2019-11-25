#include <stdio.h>
using namespace std;

int main() {
  int y, w, x;
  scanf("%d %d", &y, &w);
  if (y > w)
    x = (6 - y) + 1;
  else
    x = (6 - w) + 1;
  switch (x) {
  case 1:
    printf("1/6\n");
    break;
  case 2:
    printf("1/3\n");
    break;
  case 3:
    printf("1/2\n");
    break;
  case 4:
    printf("2/3\n");
    break;
  case 5:
    printf("5/6\n");
    break;
  case 6:
    printf("1/1\n");
    break;
  }
  return 0;
}
