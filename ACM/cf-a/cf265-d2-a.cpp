#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, t;
  int p{0};
  cin >> s;
  cin >> t;
  for (size_t i = 0; i < t.size(); ++i) {
    if (s[p] == t[i]) ++p;
  }
  cout << p + 1 << endl;
  return 0;
}
