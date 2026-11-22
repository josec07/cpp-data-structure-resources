class Solution {
public:
    int rob(vector<int>& nums) {
        int one = 0, two = 0;
        for(int i  = 0; i < nums.size(); i++){
            int cur = max(nums[i] + two, one);
            two = one;
            one = cur;
        }

        return one;
        
    }
};
