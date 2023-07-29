#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)
            return 1;
        int sum=n*(n+1)/2;
        int rsum=0;
        for(int i=1;i<=n;i++){
            sum=sum-i;
            rsum=rsum+i;
            if(sum==rsum+i+1)
                return i+1;
        }
        return -1;
    }
};

int main(){
    Solution s;
    int n;
    cin>>n;
    cout<<s.pivotInteger(n)<<endl;
    return 0;
}

//    https://leetcode.com/problems/find-the-pivot-integer/