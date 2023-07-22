# include<bits/stdc++.h>
using namespace std;
class Solution {
    int m,n;
public:
    int block_sum(int row,int col,vector<vector<int>>& pre_sum , int k){
        int last_row=min(row+k,m-1);
        int last_col=min(col+k,n-1);
        int res = pre_sum[last_row][last_col];
        if((row-k-1)>=0){
            int right_col=min(col+k,n-1);
            res -= pre_sum[row-k-1][right_col];
        }
        if((col - k-1)>=0){
            int left_dow_row=min(row+k,m-1);
            res -= pre_sum[left_dow_row][col-k-1];
        }
        if(((row-k-1)>=0) && ((col-k-1)>=0)){
            res += pre_sum[row-k-1][col-k-1];
        }
        return res;
    }
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        m = mat.size();
        n = mat[0].size();
        vector<vector<int>> pre_sum(m,vector<int>(n,0));
        vector<vector<int>> ans(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
            int row_sum=0;
            for(int j=0;j<n;j++){
                row_sum += mat[i][j];
                pre_sum[i][j]=row_sum;
                if(i>0)
                    pre_sum[i][j] += pre_sum[i-1][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=block_sum(i,j,pre_sum,k);
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    int k=1;
    vector<vector<int>>ans=s.matrixBlockSum(mat,k);
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    return 0;
}

///     https://leetcode.com/problems/matrix-block-sum/submissions/