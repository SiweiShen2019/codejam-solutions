#include <iostream>
#include <string>

using namespace std;

void division(const int &N, const int &M, const int &X, const int &Y) {
    if (X > N && Y > M) {
        cout << "NE" << endl;
    } else if (X > N && Y < M) {
        cout << "SE" << endl;
    } else if (X < N && Y > M) {
        cout << "NO" << endl;
    } else if (X < N && Y < M) {
        cout << "SO" << endl;
    } else {
        cout << "divisa" << endl;
    }
}


int main() {
    int numOfTests;
    cin >> numOfTests;
    while (numOfTests) {
        int N, M;
        cin >> N >> M;
        for (int i = 0; i < numOfTests; ++i) {
            int X, Y;
            cin >> X >> Y;
            division(N, M, X, Y);
        }
        cin >> numOfTests;
    }
    return 0;
}
