#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int c=0;
        for(int i=0;i<costs.size();i++){
            if(costs[i]>coins)
                break;
            coins=coins-costs[i];
            c++;
        }
        return c;
    }
};
int main(){
    Solution ob;
    vector<int>costs={1,3,2,4,1};
    int coins = 7;
    cout<<ob.maxIceCream(costs,coins)<<endl;
    return 0;
}

//  https://leetcode.com/problems/maximum-ice-cream-bars/description/