# include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int j=1;
        while(nums.size()-j!=0){
            for(int i=0;i<nums.size()-j;i++){

                nums[i]=((nums[i]+nums[i+1])%10);
            }
            j++;
        }
        return nums[0];
    }
};

int main(){
    Solution s;
    vector<int>nums={1,2,3,4,5};
    cout<<s.triangularSum(nums)<<endl;
    return 0;
}
//      https://leetcode.com/problems/find-triangular-sum-of-an-array/description/