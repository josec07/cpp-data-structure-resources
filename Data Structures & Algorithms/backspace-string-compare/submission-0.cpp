class Solution {
public:
    bool backspaceCompare(string s, string t) {
        static const int nParams = 2;
        vector<stack<char>> res(nParams);
        vector<string> source = {s,t};
        for(int i = 0; i < nParams; i++){
            for(char c: source[i]){
                if(c == '#'){
                    if(!res[i].empty()){
                        res[i].pop();
                    }
                }else res[i].push(c);
            }
        }

        return res[0] == res[1];
    }
};
