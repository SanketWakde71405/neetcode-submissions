class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        if(prices.size()==1) return 0;
        sort(prices.begin(),prices.end());

        int c= prices[0]+ prices[1];

        if(c>money) return money;

        return money-c;
    }
};