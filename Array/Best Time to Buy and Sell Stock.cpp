//Q: https://www.geeksforgeeks.org/best-time-to-buy-and-sell-stock

//Solution:

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],maxpro=0;
        for(int i=1;i<prices.size();i++){
            if(buy>prices[i])   buy=prices[i];
            else if(prices[i]-buy>maxpro)   maxpro=prices[i]-buy;
        }
        return maxpro;
    }
};

//TC: O(N), SC: O(1)
