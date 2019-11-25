#include <iostream>
#include <set>
#include <string.h>
#include <ctype.h>
using namespace std;

int main() {
  char s[1001];
  memset(s, 0, 1001);
  cin.getline(s, 1001);
  set<char> char_set;
  for (int i=0; i<1001; ++i) {
    if (isalpha(s[i])) char_set.insert(s[i]);
  }
  cout << char_set.size() << endl;
  return 0;
}
