class Solution {
 
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int lSize = grid.size()-2;
        vector<vector<int>> res(lSize, vector(lSize,0)); //constraint values are 1 to 100, so set values at 0 for max comparison.
        for(int i = 0; i < lSize; i++){
            for(int j = 0; j < lSize; j++){
                for(int x = i; x < i + 3; x++){
                    for(int y = j; y < j + 3; y++){
                        res[i][j] = max(res[i][j],grid[x][y]);
                    }
                }
            }
        }
        return res;
    }
};