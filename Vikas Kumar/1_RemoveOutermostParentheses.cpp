#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int start=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
               if(start>0) res+='(';
               start++;
            }
        
        if(s[i]==')'){
            if(start>1) res+=')';
            start--;
        }
    }
        return res;
    }
};

int main(){
    Solution s;
    cout<<s.removeOuterParentheses("()()()(())");
    return 0;
}