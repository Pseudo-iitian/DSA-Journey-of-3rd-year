#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i :mp){
            if(i.second==1)
                return -1;
        }
        int count=0;
        for(auto j: mp){
            if(j.second<=3)
                count++;
            else{
                count = count+j.second/3;
                if(j.second%3!=0)
                    count++;
            }
        }
        return count;
    }
};
int main(){
    Solution ob;
    vector<int>nums={2,3,3,2,2,4,2,3,4};
    cout<<ob.minOperations(nums)<<endl;

    return 0;
}
//  https://leetcode.com/contest/biweekly-contest-114/problems/minimum-number-of-operations-to-make-array-empty/