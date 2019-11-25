#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
  char input[101];
  int upper{0}, lower{0};
  memset(input, 0, 101);
  scanf("%s", input);
  int len{(int)strlen(input)};
  for (int i = 0; i < len; ++i) {
    if (isupper(input[i]))
      ++upper;
    else if (islower(input[i]))
      ++lower;
  }
  if (upper > lower) {
    for (int i = 0; i < len; ++i) {
      input[i] = toupper(input[i]);
    }
  } else {
    for (int i = 0; i < len; ++i) {
      input[i] = tolower(input[i]);
    }
  }
  printf("%s\n", input);
  return 0;
}

