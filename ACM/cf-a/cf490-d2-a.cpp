#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  vector<int> one;
  vector<int> two;
  vector<int> three;
  cin >> n;
  for (int i=0; i<n; ++i) {
    int tmp;
    cin >> tmp;
    if (tmp == 1)
      one.push_back(i+1);
    else if (tmp == 2)
      two.push_back(i+1);
    else
      three.push_back(i+1);
  }
  if (one.size()==0 || two.size()==0 || three.size()==0) {
    cout << 0 << endl;
  } else {
    size_t s[3] = {one.size(), two.size(), three.size()};
    size_t w = *min_element(s, s+3);
    cout << w << endl;
    while (w--) {
      int one_b{one.back()};
      int two_b{two.back()};
      int three_b{three.back()};
      cout << one_b << " " << two_b << " " << three_b << endl;
      one.pop_back();
      two.pop_back();
      three.pop_back();
    }
  }
  return 0;
}
