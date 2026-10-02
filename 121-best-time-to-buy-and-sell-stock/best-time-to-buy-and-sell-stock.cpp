class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>bestbuy){
                profit=max(prices[i]-bestbuy,profit);
            }
            bestbuy=min(prices[i],bestbuy);
        }
        return profit;
    }
};