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
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int total = pow(2,n);
        int sum = 0;
        for(int i=0;i<total;++i){
            int val = 0;
            for(int j=0;j<n;++j){
                int p = pow(2,j);
                if(i & p){
                    val = val ^ nums[j];
                }
            }
            sum += val;
        }
        return sum;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,3};    
    cout<<s.subsetXORSum(nums);
    return 0;
}