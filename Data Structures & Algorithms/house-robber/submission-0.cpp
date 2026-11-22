class Solution {
public:
    int rob(vector<int>& nums) {
        int r1 = 0, r2 = 0;

        for(int num: nums){
            int currMax = max(num + r1, r2);
            r1 = r2;
            r2 = currMax;
        }

        return r2;
        
    }
};
