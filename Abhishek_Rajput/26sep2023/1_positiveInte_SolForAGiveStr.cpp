#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>>ans;
        for(int i=1;i<=1000;i++){
            for(int j=1;j<=1000;j++){
                if(customfunction.f(i,j) == z)
                    ans.push_back({i,j});
                else if(customfunction.f(i,j)>z)
                    break;
            }
        }
        return ans;
    }
};
//  https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/