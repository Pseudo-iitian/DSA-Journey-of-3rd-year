#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int mini=INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         mini=min(mini,abs(nums[i]-nums[j]));
        //     }
        // }
        // return mini;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            mini=min(mini,nums[i+1]-nums[i]);
        }
        return mini;
    }
};
int main(){
    Solution ob;
    vector<int> nums={100,1,10};
    cout<<ob.findValueOfPartition(nums)<<endl;

    return 0;
}
//  https://leetcode.com/problems/find-the-value-of-the-partition/description/