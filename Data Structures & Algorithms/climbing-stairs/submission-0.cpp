class Solution {
private:
unordered_map<int,int> umap;

public:
    int climbStairs(int n) {
        if(n == 0 || n == 1){
            return 1;
        }

        if(umap.count(n)>0){
            return umap[n];
        }

        umap[n] = climbStairs(n-2) + climbStairs(n-1); 
        return umap[n];
    }
};
