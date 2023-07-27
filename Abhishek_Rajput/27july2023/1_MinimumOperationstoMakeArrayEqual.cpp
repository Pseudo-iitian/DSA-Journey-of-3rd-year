#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(int n) {
        int arr[n];
        for(int i=0;i<n;i++)
            arr[i]=(i*2)+1;
        int s=0,e=n-1;
        int sum=0;
        while(s<=e){
            sum +=(arr[e]-arr[s])/2;
            s++;
            e--;
        }
        return sum;
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    cout<<s.minOperations(n)<<endl;

    return 0;
}

///    https://leetcode.com/problems/minimum-operations-to-make-array-equal/description/