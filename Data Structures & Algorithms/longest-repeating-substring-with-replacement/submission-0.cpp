class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freqCount;
        int res = 0;
        int l = 0, maxf = 0;
        for(int r = 0; r < s.size(); r++){
            freqCount[s[r]]++;
            maxf = max(maxf, freqCount[s[r]]);
            while((r-l+1)-maxf > k){
                freqCount[s[l]]--;
                l++;
            }
            res = max(res, r - l + 1);
        }

        return res;

    }
};
