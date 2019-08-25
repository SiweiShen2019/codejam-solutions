#include <iostream>
using namespace std;

int n, h, p, res{0};

int main()
{
    cin >> n >> h;
    while (n--) {
        cin >> p;
        if (p > h)
            ++res;
        ++res;
    }
    cout << res << endl;
    return 0;
}
