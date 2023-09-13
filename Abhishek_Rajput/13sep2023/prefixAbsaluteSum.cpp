#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        int sum=0,pref=0;
        vector<int>ans(n,0);

        for(int i=0;i<n;i++){
        
            sum=sum+nums[i];
        }
        for(int i=0;i<n;i++){
                    // Left side                //   right side
            ans[i]=((i*nums[i]-pref) + ((sum - pref -nums[i]) - (n-i-1)*nums[i]));
            pref += nums[i];
        }
        return ans;
    }
};
int main(){
    Solution ob;
    vector<int>nums={1,4,6,8,10};
    vector<int>ans=ob.getSumAbsoluteDifferences(nums);
    for(auto i :ans)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
//  https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/description/