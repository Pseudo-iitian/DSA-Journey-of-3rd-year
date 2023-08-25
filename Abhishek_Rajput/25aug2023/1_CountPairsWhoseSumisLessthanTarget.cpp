#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j]) < target)
                    count+=1;

            }
        }
        return count;
    }
};

int main(){
    Solution ob;
    vector<int>nums={-1,1,2,3,1};
    int target = 2;
    cout<<ob.countPairs(nums,target)<<endl;
    return 0;
}
//  https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/description/