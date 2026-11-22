class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while(l<=r){
            int m = l + (r-l) / 2;
            if(nums[m] > target){
                //go left
                r = m - 1;
            }else if(nums[m] < target){
                //go right
                l = m + 1;
            }else{
                return m;
            }
        }

        return -1;
    }
};
