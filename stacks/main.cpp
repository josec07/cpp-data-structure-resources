#include <iostream>
#include <vector>
#include <stack>

using namespace std;
bool iterateParamsVersion2(string& s, string& t){
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

bool iterateParamsVersion1(string& s, string& t){
    stack<char> one;
    for(char c: s){
        if(c == '#'){
            if(!one.empty()){
                one.pop();
            }
        }else one.push(c);
    }  
    
    stack<char> two;
    for(char c: t){
        if(c == '#'){
            if(!two.empty()){
                two.pop();
            }
        }else two.push(c);
    }

    return one == two;
}


int main(){
    string s = "xy#z";
    string t = "xz";
    // bksCompareStack(one,two);
    // cout<< iterateParamsVersion1(s,t) << endl;
    cout<< iterateParamsVersion2(s,t) << endl;
}