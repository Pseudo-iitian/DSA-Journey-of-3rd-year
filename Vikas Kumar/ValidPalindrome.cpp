#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(auto &x:s){
            x=tolower(x);
        }
        for(int i=0;i<s.size();i++){
          if(s[i]>='a' && s[i]<='z'){
             ans+=s[i];
          }
        }
        
        int i=0;
        int j=ans.size()-1;
        while(i<=j){
            if(ans[i]==ans[j]){
            i++;
            j--;
            }else
            return false;
        }
        return true;
    }
};
int main(){
Solution obj;
cout<<obj.isPalindrome("A man, a plan, a canal: Panama");

return 0;
}