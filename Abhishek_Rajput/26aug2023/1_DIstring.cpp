#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int n=s.size();
        int st=0,e=n;
        for(int i=0;i<n;i++){
            if(s[i]=='I')
                ans.push_back(st++);
            else
                ans.push_back(e--);
        }
        // start is equal to end
        ans.push_back(e--);
        return ans;
    }
};
int main(){
    Solution ob;
    string s = "IDID";
    vector<int>ans=ob.diStringMatch(s);
    for(auto i : ans)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}
//  https://leetcode.com/problems/di-string-match/description/