#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        vector<int>ans;
        for(int i=0;i<numOnes;i++)
            ans.push_back(1);
        for(int i=0;i<numZeros;i++)
            ans.push_back(0);
        for(int i=0;i<numNegOnes;i++)
            ans.push_back(-1);
        int sum=0;
        for(int i=0;i<k;i++){
            sum=sum+ans[i];
        }
        return sum;
    }
};
int main(){
    Solution ob;
    int o=3;
    int z=2;
    int NO=0;
    int k=2;
    cout<<ob.kItemsWithMaximumSum(o,z,NO,k)<<endl;

    return 0;
}
//  https://leetcode.com/problems/k-items-with-the-maximum-sum/description/