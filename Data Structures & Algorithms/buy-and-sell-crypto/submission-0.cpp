class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxP = 0;
        //use max function for quick returns -> int res = max(a,b);
        int i = 0;
        int j = 0;
        while(i <= j && j < prices.size()){
            i = j;
            while(prices[j] >= prices[i] && j < prices.size()){
                //check all max
                //in bounds, j is bigger and we are within sliding window potential
                int res = prices[j] - prices[i];
                maxP = max(maxP, res);
                j++;
            }
        }

        return maxP;
        
    }
};
