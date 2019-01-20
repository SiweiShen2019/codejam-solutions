#include <assert.h>
#include <iostream>
#include <unordered_map>

using namespace std;


void solve(const int &months, const double &down_payment,
           const double &loan, const int &record_count) {
    unordered_map<int, double> depreciation;
    for (int i = 0; i < record_count; ++i) {
        int cumulative_months;
        double rate;
        cin >> cumulative_months >> rate;
        depreciation.emplace(cumulative_months, rate);
    }
    double curr_rate{depreciation[0]};
    double each_month{loan / months};
    double owe{loan};
    double car_worth{(down_payment + loan) * (1 - curr_rate)};
    int num_months{0};
    while (owe >= car_worth) {
        ++num_months;
        if (depreciation.count(num_months) > 0) {
            curr_rate = depreciation[num_months];
        }
        owe -= each_month;
        car_worth *= (1 - curr_rate);
    }
    assert(num_months <= months && "Undefined behavior.");
    if (num_months == 1) {
        cout << "1 month" << endl;
    } else {
        cout << num_months << " months" << endl;
    }
}


int main() {
    int months, record_count;
    double down_payment, loan;
    cin >> months >> down_payment >> loan >> record_count;
    while (months >= 0) {
        solve(months, down_payment, loan, record_count);
        cin >> months >> down_payment >> loan >> record_count;
    }
    return 0;
}