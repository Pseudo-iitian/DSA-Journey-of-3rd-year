#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                i++;
                string rpl;
                while(s[i] != ')' && i<s.size()){
                    rpl=rpl+s[i++];
                }
                if(mp.find(rpl)!=mp.end())
                    res+=mp[rpl];
                else
                    res+="?";
                
            }
            else{
                res +=s[i];
            }
           
        }
        return res;
    }
};
int main(){
    Solution ob;
    string s = "(name)is(age)yearsold";
    vector<vector<string>> knowledge={{"name","bob"},{"age","two"}};
    string ans=ob.evaluate(s,knowledge);
    for(auto i:ans)
        cout<<i;
    cout<<endl;
    return 0;
}
//  https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/description/