#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int integerBreak(int n) {
        if(n==2)
            return 1;
        if(n==3)
            return 2;
        if(n%3==0)
            return pow(3,n/3);
        if(n%3==2)
            return pow(3,n/3)*2;
        return pow(3,(n/3)-1)*4;        
    }
};
int main(){
    Solution ob;
    int n;
    cin>>n;
    cout<<ob.integerBreak(n)<<endl;
    return 0;
}
//  https://leetcode.com/problems/integer-break/description/?envType=daily-question&envId=2023-10-06