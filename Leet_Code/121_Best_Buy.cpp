#include<iostream>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy = prices[0];
        int n = prices.size();
        for(int i = 0 ; i < n; i ++){
            if(prices[i]>bestBuy){
                maxProfit = max(maxProfit, (prices[i]-bestBuy));
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};
int main()
{
    Solution s1;
    // vector<int> stockPrices = {7, 1, 5, 3, 6, 4};
    vector<int> stockPrices = {7, 6, 4, 3, 1};
    int profit = s1.maxProfit(stockPrices);
    cout<< "Best Profit = " << profit << endl;
}