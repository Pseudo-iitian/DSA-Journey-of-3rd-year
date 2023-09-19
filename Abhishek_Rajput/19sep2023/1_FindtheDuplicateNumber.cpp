#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
                s= nums[i];
        }
        return s;
    }
};
int main(){
    Solution ob;
    vector<int>nums = {1,3,4,2,2};

    cout<<ob.findDuplicate(nums)<<endl;
    return 0;
}
//  https://leetcode.com/problems/find-the-duplicate-number/description/