class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        int l = 0, r = heights.size()-1;
        while(l<r){
            int minWall = min(heights[r],heights[l]);
            int area = (r-l)*minWall;
            res = max(res,area);
            if(heights[l]==minWall){
                l++;
            }
            else{
                r--;
            }
        }



        return res;
        
    }
};
