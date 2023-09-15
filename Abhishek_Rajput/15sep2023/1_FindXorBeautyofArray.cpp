#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};
int main(){
    Solution ob;
    vector<int>nums = {15,45,20,2,34,35,5,44,32,30};
    cout<<ob.xorBeauty(nums)<<endl;
    return 0;
}
//  https://leetcode.com/problems/find-xor-beauty-of-array/description/