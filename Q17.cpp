// 121. Best Time to Buy and Sell Stock

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int max_profit = 0;
    int best_buy = prices[0];

    for (int val : prices) {

        if (val > best_buy) {
            max_profit = max(max_profit, val - best_buy);
        }

        best_buy = min(best_buy, val);
    }

    cout << "Maximum Profit: " << max_profit << endl;

    return 0;
}