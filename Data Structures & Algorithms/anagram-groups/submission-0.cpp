class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> grouped;
        for(string s: strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            grouped[temp].push_back(s);
        }

        vector<vector<string>> ans;
        for(const auto& g: grouped){
            ans.push_back(g.second);
        }

        return ans;


    }
};
