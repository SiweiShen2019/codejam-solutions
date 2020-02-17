#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b;
  size_t a_len, b_len;
  cin >> a >> b;
  a_len = a.size();
  b_len = b.size();
  if (a_len > b_len) {
    cout << a_len << endl;
  } else if (b_len > a_len) {
    cout << b_len << endl;
  } else {
    if (a == b) cout << -1 << endl;
    else cout << a_len << endl;
  }
  return 0;
}
