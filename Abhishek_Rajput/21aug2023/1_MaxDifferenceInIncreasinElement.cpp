#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi=-1,i=0;

        for(int j=1;j<nums.size();j++){
            if(nums[i]<nums[j] && (nums[j]-nums[i]>maxi))
                maxi=nums[j]-nums[i];
            else if(nums[i]>=nums[j])
                i=j;
        }           
        return maxi;
    }
};

int main(){
    Solution ob;
    vector<int>nums={7,1,5,4};
    cout<<ob.maximumDifference(nums)<<endl;
    return 0;
}