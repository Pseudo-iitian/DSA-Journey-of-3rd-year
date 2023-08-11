#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int s=0;
        int e=piles.size()-2;
        int sum=0;
        while(s<e){
            sum=sum+piles[e];
            s=s+1;
            e=e-2;
        }
        return sum;
    }
};

int main(){
    Solution ob;
    vector<int>piles={9,8,7,6,5,1,2,3,4};
    cout<<ob.maxCoins(piles)<<endl;
    return 0;
}

//  https://leetcode.com/problems/maximum-number-of-coins-you-can-get/description/