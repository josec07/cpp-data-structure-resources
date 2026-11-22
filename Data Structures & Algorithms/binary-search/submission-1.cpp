class Solution {
public:


    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while(l <= r){
            int m = (r+l)/2;
            if(target == nums[m])return m;

            if(nums[m] > target){
                //go left
                r = m -1;
            }else{
                l = m +1;
            }
        }

        return -1;
    }
};
