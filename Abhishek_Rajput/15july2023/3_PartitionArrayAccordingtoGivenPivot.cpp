#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot)
                ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot)
                ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};

int main(){
    Solution s;
    int pivot=10;
    vector<int>nums={9,12,5,10,14,3,10};
    vector<int>ans=s.pivotArray(nums,pivot);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}

// https://leetcode.com/problems/partition-array-according-to-given-pivot/description/