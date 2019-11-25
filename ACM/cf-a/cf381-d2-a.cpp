#include <cstdio>
using namespace std;

int main() {
  int n, select;
  scanf("%d", &n);
  int s{0}, d{0};
  int cards[n];
  int head{0}, tail{n-1};
  for (int i = 0; i < n; ++i) {
    scanf("%d", &cards[i]);
  }
  for (int j = 0; j < n; ++j) {
    if (cards[head] > cards[tail]) {
      select = head;
      ++head;
    } else {
      select = tail;
      --tail;
    }
    if (j % 2 == 0)
      s += cards[select];
    else
      d += cards[select];
  }
  printf("%d %d\n", s, d);
  return 0;
}
