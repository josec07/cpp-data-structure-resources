class Solution {
public:
    int minLength(string s) {
        stack<char> stk;
        stk.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(!stk.empty() && (s[i] == 'B' && stk.top() == 'A' || s[i] == 'D' && stk.top() == 'C')){
                stk.pop();
            }else stk.push(s[i]);
        }
        return stk.size();
    }
};
