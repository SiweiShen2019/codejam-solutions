#include <stdio.h>

using namespace std;


void division(const int &N, const int &M, const int &X, const int &Y) {
  if (X > N && Y > M)
    printf("NE\n");
  else if (X > N && Y < M)
    printf("SE\n");
  else if (X < N && Y > M)
    printf("NO\n");
  else if (X < N && Y < M)
    printf("SO\n");
  else 
    printf("divisa\n");
}


int main() {
  int TC;
  while (scanf("%d", &TC), TC) {
    int N, M;
    scanf("%d %d", &N, &M);
    while (TC--) {
      int X, Y;
      scanf("%d %d", &X, &Y);
      division(N, M, X, Y);
    }
  }
  return 0;
}
