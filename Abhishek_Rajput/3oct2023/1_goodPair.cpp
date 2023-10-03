#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==nums[i])
                    count++;
            }
        }
        return count;
    }
};
int main(){
    Solution ob;
    vector<int> nums={1,2,3,1,1,3};
    cout<<ob.numIdenticalPairs(nums)<<endl;

    return 0;
}
//  https://leetcode.com/problems/number-of-good-pairs/description/