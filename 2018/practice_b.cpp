#include <iostream>
#include <utility>
#include <vector>

using namespace std;


long quick(long even) {
    if (even%4 == 0) return 0;
    else return 1;
}


long reduce(long odd) {
    long res{(odd-1)/2};
    if (res%2 == 0) return quick(res);
    else return reduce(res);
}


int main() {
    int t;
    cin >> t;
    for (int i=1; i<=t; ++i) {
        long k;
        cin >> k;
        --k;  // starting from 1
        if (k%2 == 0) k = quick(k);
        else k = reduce(k);
        cout << "Case #" << i << ": " << k << endl;
    }
    return 0;
}