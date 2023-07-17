# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int m=prices[0];
        int d=0;
        for(int i=1; i<n; i++){
            d=max(d,prices[i]-m);
            m=min(m,prices[i]);
        }
        return d;
    }
};

int main(){
    Solution s;
    vector<int>prices={7,1,5,3,6,4};
    cout<<s.maxProfit(prices)<<endl;

    return 0;
}

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/