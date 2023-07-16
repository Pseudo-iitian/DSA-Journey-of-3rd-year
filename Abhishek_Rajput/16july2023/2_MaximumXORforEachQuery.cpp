#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {        
        int res=0;       
        for(int i=0;i<nums.size();i++){
            res = res^nums[i];
        }
        int k=pow(2,maximumBit)-1;
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--){
            ans.push_back(res^k);
            res=res^nums[i];
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int>nums={0,1,1,3};
    int maximumBit=2;
    vector<int>ans=s.getMaximumXor(nums,maximumBit);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
    
} 

// https://leetcode.com/problems/maximum-xor-for-each-query/description/


