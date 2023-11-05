#include <bits/stdc++.h> 
using namespace std;
long long int solve(vector<int>nums){
    long long int prev1=nums[0];
    long long int prev2=0;
    for(long long int i=1;i<nums.size();i++){
        long long int incl = prev2 + nums[i];
        long long int excl = prev1 + 0;
        prev2=prev1;
        prev1=max(incl,excl);
    }
    return prev1;
}
long long int houseRobber(vector<int>& valueInHouse)
{
    int n=valueInHouse.size();
    if(n==1)
        return valueInHouse[0];
    vector<int>first,second;
    for(int i=0;i<n;i++){
        if(i!=n-1)
            first.push_back(valueInHouse[i]);
        if(i!=0)
            second.push_back(valueInHouse[i]);
    }
    return max(solve(first),solve(second));
}
int main(){
    
    vector<int> valueInHouse={1,3, 2, 1};
    cout<<houseRobber(valueInHouse)<<endl;
    return 0;
}
//  https://www.codingninjas.com/studio/problems/house-robber_839733?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar