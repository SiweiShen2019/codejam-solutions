#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, k, t{0};
  cin >> n >> k;
  string s = "";
  char c[k];
  for (int i=0; i<k; i++) c[i] = i+97;
  for (int j=0; j<n; j++) {
    if (t == k) t = 0;
    s += c[t];
    ++t;
  }
  cout << s << endl;
  return 0;
}
