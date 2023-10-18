#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
            }
        }
        // this return the number of unque elemnet
        return j+1;
    }
};
int main(){
    Solution ob;
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};
    cout<<ob.removeDuplicates(nums)<<endl;
    return 0;
}
//  https://leetcode.com/problems/remove-duplicates-from-sorted-array/