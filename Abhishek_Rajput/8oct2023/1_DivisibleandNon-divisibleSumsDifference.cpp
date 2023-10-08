#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum1=0;
        int sum2=0;
        for(int i=1;i<=n;i++){
            if(i%m!=0)
                sum1=sum1+i;

        }
        for(int i=1;i<=n;i++){

            if(i%m==0)
                sum2=sum2+i;
        }
        return sum1-sum2;
    }
};
int main(){
    Solution ob;
    int n,m;
    cin>>n>>m;
    cout<<ob.differenceOfSums(n,m)<<endl;
    return 0;
}
//  https://leetcode.com/contest/weekly-contest-366/problems/divisible-and-non-divisible-sums-difference/