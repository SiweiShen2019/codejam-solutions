#include <iostream>
#include <stdlib.h>  // for abs()

using namespace std;


void solve(int n) {
    cout << abs((((n * 63 + 7492) * 5 - 498) % 100) / 10) << endl;
}


int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        int input;
        cin >> input;
        solve(input);
    }
    return 0;
}
