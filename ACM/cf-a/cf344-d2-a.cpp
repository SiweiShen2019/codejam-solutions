#include <cstdio>
#include <cstring>
using namespace std;

int main() {
  int n;
  int count{0};
  scanf("%d", &n);
  char in[3];
  while (n--) {
    char tmp[3];
    scanf("%s", tmp);
    if (strcmp(in, tmp) != 0) {
      ++count;
      strcpy(in, tmp);
    }
  }
  printf("%d\n", count);
  return 0;
}
