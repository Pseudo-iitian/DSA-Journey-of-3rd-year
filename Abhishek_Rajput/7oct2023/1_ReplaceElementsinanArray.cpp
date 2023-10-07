#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    vector<int> arrayChange(vector<int>& nums,vector<vector<int>>& o) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<o.size();i++){
            nums[mp[o[i][0]]]=o[i][1];
            mp[o[i][1]]=mp[o[i][0]];
        }
        return nums;
    }
};
int main(){
    Solution ob;
    vector<int> nums={1,2,4,6};
    vector<vector<int>> o={{1,3},{4,7},{6,1}};
    vector<int>ans=ob.arrayChange(nums,o);
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}
//  https://leetcode.com/problems/replace-elements-in-an-array/description/