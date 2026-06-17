#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int maxProfit_find(vector<int> & nums){
    int min_Price = INT_MAX;
    int maxPorfit = 0;

    for(int price : nums){
        min_Price = min(price , min_Price);
        maxPorfit = max(maxPorfit , price - min_Price);
    }
    return maxPorfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int maxi = maxProfit_find(prices);

    cout << maxi;
    return 0;
}