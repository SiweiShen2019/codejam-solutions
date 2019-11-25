#include <cstdio>
#include <set>
using namespace std;

int main() {
  char c;
  set<char> letter;
  while (scanf("%c", &c) != EOF) {
    if (c != '\n')
      letter.insert(c);
  }
  if (letter.size() % 2 == 0)
    printf("CHAT WITH HER!\n");
  else
    printf("IGNORE HIM!\n");
  return 0;
}
