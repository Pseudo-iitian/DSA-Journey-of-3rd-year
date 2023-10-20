#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>arr;
        int sum=0;
        while(n>0){
            arr.push_back(n%10);
            n=n/10;
        }
        reverse(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(i%2==0)
                sum=sum+arr[i];
            else
                sum=sum-arr[i];
        }
        return sum;
    }
};
int main(){
    Solution ob;
    int n;
    cin>>n;
    cout<<ob.alternateDigitSum(n)<<endl;
    return 0;
}
//  https://leetcode.com/problems/alternating-digit-sum/description/