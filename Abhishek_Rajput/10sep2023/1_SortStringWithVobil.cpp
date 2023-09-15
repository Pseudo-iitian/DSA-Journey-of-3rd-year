# include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string sortVowels(string s) {
         vector<char>v;       
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                v.push_back(s[i]);
            }
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                v.push_back(s[i]);
            }
        }
        sort(v.begin(),v.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                s[i]=v[j];j++;
            }
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                s[i]=v[j];j++;
            }
        }
        return s;
    }
};
int main(){
    Solution ob;
    string s = "lEetcOde";
    string ans=ob.sortVowels(s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}