#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& num,int x){
    vector<int>dp(x+1,INT_MAX);
    dp[0]=0;
    //  trying for every amount figer from 1 to x
    for(int i=1;i<=x;i++){
        for(int j=0;j<num.size();j++){
            if(i-num[j]>=0 && dp[i-num[j]] != INT_MAX)
                dp[i] = min(dp[i] , 1 + dp[i-num[j]]);
        }
    }

    if(dp[x]==INT_MAX)
        return -1;
    return dp[x];
}
int minimumElements(vector<int> &num, int x)
{   
    return solve(num,x);  
}
int main(){
    vector<int>num={12 ,1, 3};
    int x=4;
    cout<<minimumElements(num,x)<<endl;
    return 0;
}
/* https://www.codingninjas.com/studio/problems/minimum-elements_
3843091?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm
_campaign=Lovebabbar&leftPanelTabValue=PROBLEM
*/


