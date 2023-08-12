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
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans;
        for(int i=0;i<n;++i){
            int sum = 0;
            for(int j=0;j<n;++j){
                if(boxes[j]=='1'){
                    sum += abs(j-i);
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> ans = s.minOperations("110");
    for(auto &val: ans){
        cout<<val<<" ";
    }
    return 0;
}