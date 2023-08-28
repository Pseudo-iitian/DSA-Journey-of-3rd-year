#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& p) {
        sort(p.begin(),p.end());
        int maxi = INT_MIN;
        for(int i=0;i<p.size()-1;i++)
            maxi =max(maxi,p[i+1][0]-p[i][0]);
        return maxi;
    }
};
int main(){
    Solution ob;
    vector<vector<int>>p={{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}};
    cout<<ob.maxWidthOfVerticalArea(p)<<endl;

    return 0;
}