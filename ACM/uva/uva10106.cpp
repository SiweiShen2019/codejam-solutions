#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
  string x, y;
  while (cin >> x >> y) {
    int res[500];
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    for (int r=0; r<500; ++r) res[r] = 0;
    for (int i=0; i<y.size(); ++i) {
      for (int j=0; j<x.size(); ++j) {
        res[i+j] += ((int)x[j]-48) * ((int)y[i]-48);
      }
    }
    for (int k=0; k<500; ++k) {
      int tens = res[k] / 10;
      res[k] %= 10;
      res[k+1] += tens;
    }
    int m = 499;
    while (m>0 && res[m]==0) m--;
    for (; m>=0; m--) cout << res[m];
    cout << endl;
  }
  return 0;
}
