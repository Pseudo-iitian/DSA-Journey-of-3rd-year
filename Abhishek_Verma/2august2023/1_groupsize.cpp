#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gz) {
        vector<vector<int> > res;
        vector<int> group;
        vector<pair<int,int> > p;
        for(int i=0;i<gz.size();++i){
            p.push_back({gz[i],i});
        }
        sort(p.begin(),p.end());
        for(int i=0;i<p.size();++i){
            group.push_back(p[i].second);
            if(p[i].first==group.size()){
                res.push_back(group);
                group.clear();
            }
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<int> ans = {3,3,3,3,3,1,3};
    vector<vector<int> > res = s.groupThePeople(ans);
    for(int i=0;i<res.size();++i){
        cout<<"[";
        for(int j=0;j<res[i].size();++j){
            cout<<res[i][j]<<",";
        }
        cout<<"] ";
    }
    return 0;
}