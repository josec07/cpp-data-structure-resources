class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int mx = *max_element(piles.begin(), piles.end());

        int l = 1;
        int r = mx;
        int minK = mx;


        while(l <= r){
            int k = l + (r-l)/2;
            long totalH = 0;

            for(int i = 0; i < piles.size();i++){
                totalH += (piles[i] + k - 1) / k;
            }
            
            if(totalH <= h){
                if(k < minK){
                    minK = k;
                }
                r = k - 1;
            }
            else{
                l = k + 1;
            }
        }

        return minK;
    }
};