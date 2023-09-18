#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>res;       
        map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        int maxi=0;
        for(auto i:mp){
            if(i.second>maxi)
                maxi=i.second;
        }
        int flag=0;
        for(int i=0;i<maxi;i++){
            vector<int>out;
            for(auto &j:mp){
                if(j.second >0){
                    flag=1;
                    out.push_back(j.first);
                    j.second--;
                }           
            }
            if(flag==1)
                res.push_back(out);
            else
                return res;           
        }       
        return res;       
    }
};
int main(){
    Solution ob;
    vector<int>nums = {1,3,4,1,2,3,1};
    vector<vector<int>>ans=ob.findMatrix(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
// https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/