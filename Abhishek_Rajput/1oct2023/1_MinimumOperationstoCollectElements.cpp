#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,bool>mp;
        for(int i=1;i<=k;i++)
            mp[i] = false;        
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            if(mp.find(nums[i])!=mp.end())
                mp[nums[i]] = 1;
           
            bool check = true;
            for(auto it:mp){
                if(it.second==false){
                    check = false;
                    break;
                }
            }
            if(check==true)
                return n-i;          
        }
        return n;    
    }
};
int main(){
    Solution ob;
    vector<int> nums={3,1,5,4,2};
    int k=5;
    cout<<ob.minOperations(nums,k)<<endl;

    return 0;
}
//  https://leetcode.com/contest/biweekly-contest-114/problems/minimum-operations-to-collect-elements/