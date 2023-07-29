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
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> st;
        int sum = 0;
        for(auto &val: nums){
            st.insert(val);
            sum = 0;
            while(val){
                sum = sum*10 + val%10;
                val = val/10;
            }
            st.insert(sum);
        }
        return st.size();
    }
};

int main(){
    Solution s;
    vector<int> ans = {1,13,10,12,31};
    cout<<s.countDistinctIntegers(ans);
    return 0;
}