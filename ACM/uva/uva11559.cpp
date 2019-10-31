#include <stdio.h>

using namespace std;


int main() {
  int ppl, budget, hotel, week;
  while (scanf("%d %d %d %d", &ppl, &budget, &hotel, &week) != EOF) {
    int cost = budget + 1;
    while (hotel--) {
      int price;
      bool available = false;
      scanf("%d", &price);
      for (int i = 0; i < week; i++) {
        int bed;
        scanf("%d", &bed);
        if (bed >= ppl)
          available = true;
      }
      if (available && price * ppl < cost)
        cost = price * ppl;
    }
    if (cost > budget)
      printf("stay home\n");
    else
      printf("%d\n", cost);
  }
  return 0;
}
