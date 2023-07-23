#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        vector<long long> num;
        for(int i=0;i<nums.size();++i){
            num.push_back(nums[i]);
        }
        for(int i=num.size()-2;i>=0;--i){
            if(num[i]<=num[i+1]){
                num[i]+=num[i+1];
            }
        }
        return num[0];
    }
};

int main(){
    vector<int> nums = {2,3,7,9,3};
    Solution s;
    cout<<s.maxArrayValue(nums);
    return 0;
}