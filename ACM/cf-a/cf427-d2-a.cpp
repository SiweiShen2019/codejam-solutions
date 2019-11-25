#include <stdio.h>
using namespace std;

int main() {
  int n;
  int count{0}, free{0};
  scanf("%d", &n);
  while (n--) {
    int event;
    scanf("%d", &event);
    if (event > 0) {
      free += event;
    } else if (free > 0) { // event is -1
      --free;
    } else {
      ++count;
    }
  }
  printf("%d\n", count);
  return 0;
}
