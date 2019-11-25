#include <iostream>
#include <string>
using namespace std;

int main() {
  int a[4];
  int count{0};
  string s;
  for (int i = 0; i < 4; ++i) cin >> a[i];
  cin >> s;
  for (size_t j = 0; j < s.length(); ++j) count += a[(int)s[j] - 48 - 1];
  cout << count << endl;
  return 0;
}
