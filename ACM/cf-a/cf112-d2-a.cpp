#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  int diff = s1.compare(s2);
  if (diff < 0)
    cout << -1 << endl;
  else if (diff > 0)
    cout << 1 << endl;
  else
    cout << 0 << endl;
  return 0;
}
