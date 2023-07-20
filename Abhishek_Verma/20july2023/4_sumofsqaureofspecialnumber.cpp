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
    int sumOfSquares(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();++i){
            if(n%(i+1)==0){
                sum += nums[i]*nums[i];
            }
        }
        return sum;
    }
};

int main(){
    Solution s;
    vector<int> ans = {2,2,3,4,5};
    cout<<s.sumOfSquares(ans);
    return 0;
}