# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                return 0;
            if(nums[i]<0)
                c++;

        }
        if(c%2==0)
            return 1;
        else
            return -1;
    }
};
int main(){
    Solution s;
    vector<int> nums={-1,-2,-3,-4,3,2,1};

    cout<<s.arraySign(nums)<<endl;

    return 0;
}

// https://leetcode.com/problems/sign-of-the-product-of-an-array/



