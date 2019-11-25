#include <cstdio>
using namespace std;

int main() {
  int k, r;
  scanf("%d %d", &k, &r);
  int n{1}, temp_k{k}, mod{temp_k % 10};
  while (mod != r && mod != 0) {
    ++n;
    temp_k += k;
    mod = temp_k % 10;
  }
  printf("%d\n", n);
  return 0;
}

