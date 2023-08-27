#include<bits/stdc++.h>
using namespace std;
class Solution {
public :

    string reverseWords(string s){
        s.push_back(' ');
        string ans,st;
        for(auto c:s){
            if(c==' '){
                reverse(st.begin(),st.end());
                ans=ans+st;
                ans=ans+' ';
                st.clear();
            }
            else
                st.push_back(c);
        }
        ans.pop_back();
        return ans;
    }
};
int main(){
    Solution ob;
    string s = "Let's take LeetCode contest";
    string ans=ob.reverseWords(s);
    for(auto i : ans)
        cout<<i;
    cout<<endl;

    return 0;
}
//  https://leetcode.com/problems/reverse-words-in-a-string-iii/description/
