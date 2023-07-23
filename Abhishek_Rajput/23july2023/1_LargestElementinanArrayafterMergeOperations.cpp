# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        vector<long long> num;
        int n=nums.size();
        for(int i=0;i<n;++i){
            num.push_back(nums[i]);
        }

        for(int i=n-2;i>=0;i--){
            if(num[i]<=num[i+1]){
                num[i]+=num[i+1];
            }
        }
        return num[0];
    }
};
int main(){
    Solution s;
    vector<int>nums={2,3,7,9,3};
    cout<<s.maxArrayValue(nums)<<endl;
    return 0;
    
}

///     https://leetcode.com/problems/largest-element-in-an-array-after-merge-operations/
