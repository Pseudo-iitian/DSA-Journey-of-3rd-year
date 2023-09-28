#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0)
                ans.push_back(nums[i]);
        }
        return ans;

    }
};
int main(){
    Solution ob;
    vector<int> nums={3,1,2,4};
    vector<int>ans=ob.sortArrayByParity(nums);
    for(auto i :ans)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}
//  https://leetcode.com/problems/sort-array-by-parity/