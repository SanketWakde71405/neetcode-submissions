class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int currentPrice=prices[0];
        int profit=0;
        for(int i=1; i<prices.size();i++){
            if(prices[i]- currentPrice>profit){
                profit = prices[i]- currentPrice;
            }
           
            if(prices[i]<currentPrice){
                currentPrice=prices[i];
            }
        }

        if(profit <0) return 0;

        return profit;
    }
};
