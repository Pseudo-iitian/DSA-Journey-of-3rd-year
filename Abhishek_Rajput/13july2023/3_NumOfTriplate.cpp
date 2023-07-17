#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int p=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[k]-nums[j]==diff && nums[j]-nums[i]==diff)
                        p++;
                }
                
            }

        }
        return p;
    }
};

int main(){
    Solution s;
    vector<int>nums={ 0,1,4,6,7,10};
    int diff=3;
    cout<<s.arithmeticTriplets(nums,diff)<<endl;
    return 0;

}

// https://leetcode.com/problems/number-of-arithmetic-triplets/description/