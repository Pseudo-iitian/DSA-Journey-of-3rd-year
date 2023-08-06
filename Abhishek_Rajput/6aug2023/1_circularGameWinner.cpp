#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<int>&v,int k,int &ans,int index){
        if(v.size()==1){
            ans=v[0];
            return ;
        }
        index=(index+k)%v.size();
        v.erase(v.begin()+index);
        solve(v,k,ans,index);
    }
    int findTheWinner(int n, int k) {
        vector<int>v;
        int j=1;
        for(int i=0;i<n;i++){
            v.push_back(j);
            j++;
        }
        int ans=0;
        solve(v,k-1,ans,0);
        return ans;
    }
};

int main(){
    Solution ob;
    int n=6;
    int k=5;
    cout<<ob.findTheWinner(n,k)<<endl;

    return 0;
}

//  https://leetcode.com/problems/find-the-winner-of-the-circular-game/