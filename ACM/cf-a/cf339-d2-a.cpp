#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <ctype.h>
using namespace std;

int main() {
  string s;
  vector<int> v;
  getline(cin, s);
  for (char c : s) {
    if (isdigit(c)) v.push_back((int)c - 48);
  }
  sort(v.begin(), v.end());
  cout << *v.begin();
  for (auto i=v.begin()+1; i!=v.end(); ++i) cout << "+" << *i;
  cout << endl;
  return 0;
}
