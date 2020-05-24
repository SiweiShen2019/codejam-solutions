#include <stdio.h>
#include <utility>
using namespace std;

#define SIZE 5

char board[SIZE][SIZE];
pair<int, int> pos[8]{
    {-2, -1}, {-2, 1},
    {-1, -2}, {-1, 2},
    {1, -2}, {1, 2},
    {2, -1}, {2, 1}
};


bool is_valid(int x, int y) {
    int tmp_x, tmp_y;
    for (auto p : pos) {
        tmp_x = x + p.first;
        tmp_y = y + p.second;
        if (tmp_x < 0 || tmp_x >= SIZE || tmp_y < 0 || tmp_y >= SIZE) continue;
        if (board[tmp_x][tmp_y] == 'k') return false;
    }
    return true;
}


int main() {
    for (int i=0; i<SIZE; ++i) {
        scanf("%s", &board[i]);
    }
    int count = 0;
    for (int i=0; i<SIZE; ++i) {
        for (int j=0; j<SIZE; ++j) {
            if (board[i][j] == 'k') {
                ++count;
                if (!is_valid(i, j)) {
                    printf("invalid\n");
                    return 0;
                }
            }
        }
    }
    if (count == 9) printf("valid\n");
    else printf("invalid\n");
    return 0;
}