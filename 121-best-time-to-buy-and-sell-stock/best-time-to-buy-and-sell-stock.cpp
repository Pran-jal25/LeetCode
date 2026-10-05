class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int profit=0;
        int n=prices.size();

        for(int i=0;i<n;i++)
        {                                       
            if(prices[i]<min_price)
            {
                min_price=prices[i];
            }
            else
            {
                profit=max(profit,prices[i]-min_price);
            }
        }
        return profit;
    }
};