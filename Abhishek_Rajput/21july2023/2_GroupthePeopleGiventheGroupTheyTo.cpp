#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<g.size();i++){
            mp[g[i]].push_back(i);
        }
        vector<vector<int>>ans;
        //vector<int>temp(g.size(),0);
        for(auto it:mp){
            int val=it.first;
            vector<int>res;
            for(auto x : it.second){
                res.push_back(x);
                if(val==res.size()){
                    ans.push_back(res);
                    res={};
                }
            }
        }
        return ans;
    }
};

int main(){

    Solution s;
    vector<int>g={3,3,3,3,3,1,3};
    vector<vector<int>>ans=s.groupThePeople(g);
    for(int i=0;i<ans.size();++i){
        for(int j = 0;j<ans[i].size();++j){
            cout<<ans[i][j]<<" ";
        }
    }

    return 0;
}

///     https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/description/