// time complexity - O(n);
// Space complexity - O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy = prices[0];
        int profit = 0;
        for(int i =1  ; i < prices.size() ;i++){
            int cost = prices[i] - minBuy;
            profit = max(profit,cost);
            minBuy = min(minBuy , prices[i]);
        }
        return profit;
    }
};
