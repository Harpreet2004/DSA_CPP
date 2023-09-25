class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //BRUTE****
        // int profit = 0,maxi=0,i=0;
        //    for(int i=0;i<prices.size();i++) {
        //     for(int j=i+1;j<prices.size();j++) {
        //         if(prices[j] > prices[i]) {
        //             profit = prices[j] - prices[i];
        //             maxi = max(maxi,profit);
        //         }
        //       
        //}
        //     }
        // return maxi;

        //OPTIMAL****
        int mini = prices[0];
        int maxProfit = 0;

        for(int i=0;i<prices.size();i++) {
            int cost = prices[i] - mini;
            maxProfit = max(maxProfit,cost);
            mini = min(mini,prices[i]);
        }
        return maxProfit;
    }
};