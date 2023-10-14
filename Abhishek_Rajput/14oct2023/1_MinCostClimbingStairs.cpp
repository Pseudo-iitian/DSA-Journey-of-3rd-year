#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        cost.push_back(0); 

        for (int i = n - 3; i >= 0; i--) {
            cost[i] += min(cost[i + 1], cost[i + 2]);
        }

        return min(cost[0], cost[1]);        
    }
};
int main(){
    Solution ob;
    vector<int>cost = {10,15,20};
    cout<<ob.minCostClimbingStairs(cost)<<endl;
    return 0;
}
//  https://leetcode.com/problems/min-cost-climbing-stairs/