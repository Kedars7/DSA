class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int miniPrice = prices[0];
        int maxProfit = 0;

        for(int i=1; i<n; i++) {
            int profit = prices[i] - miniPrice;
            maxProfit = max(maxProfit, profit);

            miniPrice = min(miniPrice, prices[i]);
        }

        return maxProfit;
    }
};