#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>ans;
        int maxi=INT_MIN;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            sum=sum+maxi+nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};


int main(){
    Solution ob;
    vector<int>nums={2,3,7,5,10};
    vector<long long>ans=ob.findPrefixScore(nums);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;

    return 0;
}
///     https://leetcode.com/problems/find-the-score-of-all-prefixes-of-an-array/description/