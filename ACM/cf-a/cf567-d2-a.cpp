#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  long a[n];
  for (int i=0; i<n; ++i) scanf("%ld", &a[i]);
  for (int j=0; j<n; ++j) {
    long min_, max_;
    if (j == 0) { // first
      min_ = a[j+1] - a[j];
      max_ = a[n-1] - a[j];
    } else if (j == n-1) { // last
      min_ = a[j] - a[j-1];
      max_ = a[j] - a[0];
    } else {
      min_ = min(a[j+1] - a[j], a[j] - a[j-1]);
      max_ = max(a[n-1] - a[j], a[j] - a[0]);
    }
    printf("%ld %ld\n", min_, max_);
  }
  return 0;
}
