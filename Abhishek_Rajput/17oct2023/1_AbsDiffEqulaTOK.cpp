#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k)
                    count++;
            }
        }
        return count;
    }
};
int main(){
    Solution ob;
    vector<int>nums={1,2,2,1};
    int k=1;
    cout<<ob.countKDifference(nums,k)<<endl;
    return 0;
}
//  https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/