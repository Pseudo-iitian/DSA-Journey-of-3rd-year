#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                ans.push_back(i);
            }
        }
        if(ans.size()<k)
            return -1;
        return ans[k-1];
    }
};
int main(){
    Solution ob;
    int n,k;
    cin>>n>>k;
    cout<<ob.kthFactor(n,k)<<endl;
    return 0;
}
//  https://leetcode.com/problems/the-kth-factor-of-n/description/