#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int str=StringPro(s);
        int tar=StringPro(t);
        if(str != tar)
            return false;
        for(int i=0;i<str;i++){
            if(s[i] != t[i])
                return false;
        }
        return true;
    }
private:
    int StringPro(string & st){
        int k=0;
        for(char c:st){
            if(c != '#'){
                st[k++]=c;
            }
            else if(k>0){
                k--;
            }
        }
        return k;
    }
};
int main(){
    Solution ob;
    string s="ab#c";
    string t="ad#c";
    cout<<ob.backspaceCompare(s,t)<<endl;
    return 0;
}
//  https://leetcode.com/problems/backspace-string-compare/description/