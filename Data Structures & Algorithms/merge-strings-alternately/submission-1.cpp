class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j =0;
        string res;
        while(i < word1.size() && j < word2.size()){
            res += word1[i];
            res += word2[j];
            j++;
            i++;
        }

        if(j < word2.size()){
            cout << j << " j" << endl;
            res += word2.substr(j,word2.size()-1);
            cout << word2.substr(j,word2.size()-1) << " res" << endl;
        }else if(i < word1.size()){
            cout << i << "i" << endl;
            res += word1.substr(i,word1.size()-1);
        }
        
        return res;
    }
};