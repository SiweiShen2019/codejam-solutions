#include <stdio.h>
using namespace std;

int main() {
  int n, count{0};
  char prev{'\0'}, curr{'\0'};
  scanf("%d", &n);
  while (n--) {
    scanf(" %c", &curr);
    if (curr == prev)
      ++count;
    else
      prev = curr;
  }
  printf("%d\n", count);
  return 0;
}
