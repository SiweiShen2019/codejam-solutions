#include <string>
#include <stdio.h>
#include <unordered_map>

using namespace std;


void calculate(const int &month, const double &pay, const double &loan,
               const unordered_map<int, double> &dep) {
  int ans = 0;
  double each = loan/month;
  double rate = dep.at(0);
  double car = (loan + pay) * (1 - rate);
  while (loan - ans * each >= car) {
    ans++;
    if (dep.count(ans) > 0)
      rate = dep.at(ans);
    car *= (1 - rate);
  }
  printf("%d %s\n", ans, ans == 1 ? "month" : "months");
}


int main() {
  int month, n;
  double pay, loan;
  while (scanf("%d %lf %lf %d", &month, &pay, &loan, &n), month > 0) {
    unordered_map<int, double> dep;
    int count;
    double rate;
    while (n--) {
      scanf("%d %lf", &count, &rate);
      dep[count] = rate;
    }
    calculate(month, pay, loan, dep);
  }
  return 0;
}
