class Solution {
public:

    string encode(vector<string>& strs) {

        //convert vector to string
        //"|neet|code|love|you"
        //"|||||"
        //"neet" .size()
        //"4neet4code"
        //"43333212"
        //"4|neet4|code"
        //i = 0 = '4'
        //j = 0 = '4'
        if(strs.empty())return "";
        string res;
        
        for(const auto& s: strs){
            res+=to_string(s.size()) + "|" + s;
        }

        return res;

    }

    vector<string> decode(string s) {
    
        if(s.empty())return {};
    //i4, j4, while != '|', j|, size = stoi(substr(i,j-1)) ,letter = lsubstr(j+1,size)
    //i = j+size+1



        vector<string> res;
        int i = 0;
        int size =0;
        int j = 0;
        while(i < s.size()){

            j = i;
            while(s[j] != '|'){
                j++;
            }
            size = stoi(s.substr(i,j-i));
            
           
            res.push_back(s.substr(j+1,size));
            

            i = j+size+1;
        }


        return res;
    }
};
