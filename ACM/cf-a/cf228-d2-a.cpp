#include <stdio.h>
#include <set>
using namespace std;

int main() {
  set<long> shoes;
  for (int i = 0 ; i < 4; ++i) {
    long tmp;
    scanf("%ld", &tmp);
    shoes.insert(tmp);
  }
  size_t n{4};
  printf("%ld\n", n - shoes.size());
  return 0;
}
