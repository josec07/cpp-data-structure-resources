class Solution {

public:
//stateless
// encode gives me a string at the end
//can't use other containers
//inputs:
//strs can be empty
//strs[i] can be empty
//UTF-8 chatacters
//outputs: encoded string order doesnt matter for return function in encode
//constraints: stateless solution 
//UTF-8
//EdgeCases:
//strings and arrays can be empty
//strings under 100 and 200
//can have numbers and special characters in string


//MATCH:find a way to use a delimter and use the string itself to capture size
//PLAN:
    string encode(vector<string>& strs) {
        //return pure string value, with encoded values
        string res = "";

        for(const string& s: strs){
            res += to_string(s.size())+'#'+s;
        }
        //res = size + delimeter + string value

        return res;
        
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i < s.size()){//go through the string
            int j = i;//set j at i index
            while(s[j] != '#')j++;//while j doesnt see numbers keep going
            //ends up at delim '#'

            int size = stoi(s.substr(i, j-i));
            
            //parse the string size into int
            //substr is getting count strting from i to end of size character
            //stoi is converting from string to int

            res.push_back(s.substr(j+1,size));
            //j+1 = to the start of value
            //count with size to end of value

            //iterate updating pointer index
            i = j + size + 1;
            //i is j = position at delim '#', then add that position with a count, and add one
            //i is now equal to the start if the next number size or out of bounds.

        }
        return res;

    }
};
