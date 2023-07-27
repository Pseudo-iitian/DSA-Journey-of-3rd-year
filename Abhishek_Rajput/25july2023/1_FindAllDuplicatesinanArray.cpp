#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        for(auto i: mp){
            if(i.second>1)
                ans.push_back(i.first);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int>nums={4,3,2,7,8,2,3,1};
    vector<int>ans=s.findDuplicates(nums);
    for(auto i: ans)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}


//   https://leetcode.com/problems/find-all-duplicates-in-an-array/description/