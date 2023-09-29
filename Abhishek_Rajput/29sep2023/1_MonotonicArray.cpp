#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool increasing = true;
        bool decreasing = true;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                decreasing = false;
            }
            if (nums[i] < nums[i - 1]) {
                increasing = false;
            }
        }
    return increasing || decreasing;
    }
};
int main(){
    Solution ob;
    vector<int>nums={1,2,2,3};
    cout<<ob.isMonotonic(nums)<<endl;
    return 0;
}
//  https://leetcode.com/problems/monotonic-array/