#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix[0].size();
        int n=matrix.size();
        vector<vector<int>>ans(m,vector<int>(n));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[j][i]=matrix[i][j];       
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<vector<int> > v = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int> > ans = s.transpose(v);
    for(int i=0;i<ans.size();++i){
        for(int j = 0;j<ans[i].size();++j){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}