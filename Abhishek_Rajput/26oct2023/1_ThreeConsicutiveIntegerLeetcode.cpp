#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>ans;
        if(num%3!=0)
            return ans;
        else{
            ans.push_back(num/3-1);
            ans.push_back(num/3);
            ans.push_back(num/3+1);
        }
        return ans;
    }
};
int main(){
    Solution ob;
    long long num;
    cin>>num;
    vector<long long>ans=ob.sumOfThree(num);
    for(auto f : ans)
        cout<<f<<" ";
    cout<<endl;
    return 0;
}
//  https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/description/