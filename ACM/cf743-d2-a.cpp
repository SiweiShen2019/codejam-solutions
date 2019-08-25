#include <iostream>
using namespace std;

char c;
int n, a{0}, d{0};

int main()
{
    cin >> n;
    while (n--) {
        cin >> c;
        if (c == 'A')
            ++a;
        else
            ++d;
    }
    if (a > d) {
        cout << "Anton" << endl;
    } else if (a < d) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    return 0;
}
