#include <stdio.h>

using namespace std;


int main() {
  int TC, n = 1;
  scanf("%d", &TC);
  while (TC--) {
    int num;
    scanf("%d", &num);
    int speed = 0;
    for(int i = 0; i < num; i++) {
      int curr;
      scanf("%d", &curr);
      if (curr > speed)
        speed = curr;
    }
    printf("Case %d: %d\n", n++, speed);
  }
  return 0;
}
