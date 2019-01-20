#include <iostream>
#include <vector>

using namespace std;


int calculateCost(int people, int budget, int price,
                  const vector<int> &availability) {
    for (auto &beds : availability) {
        int cost{people * price};
        if (beds >= people && cost <= budget) {
            return cost;
        } 
    }
    return -1;
}


int main() {
    while (!cin.eof()) {
        int people{0};
        int budget, hotels, weeks;
        cin >> people >> budget >> hotels >> weeks;
        if (people == 0) break;
        int min_cost{-1};
        for (int i = 0; i < hotels; ++i) {
            int price;
            cin >> price;
            vector<int> availability(weeks, 0);
            for (int j = 0; j < (int)availability.size(); ++j) {
                cin >> availability[j];
            }
            int curr_cost{
                calculateCost(people, budget, price, availability)
            };
            if (curr_cost >= 0) {
                if (min_cost == -1) {
                    min_cost = curr_cost;
                } else {
                    if (curr_cost < min_cost) min_cost = curr_cost;
                }
            }
        }
        if (min_cost == -1) cout << "stay home" << endl;
        else cout << min_cost << endl;
    }
    return 0;
}
