#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto m : mp){
            if(m.second>double(nums.size()/3))
                ans.push_back(m.first);
        }
        return ans;
    }
};
int main(){
    Solution ob;
    vector<int>nums = {1,2};
    vector<int>ans=ob.majorityElement(nums);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;

    return 0;
}
//  https://leetcode.com/problems/majority-element-ii/description/