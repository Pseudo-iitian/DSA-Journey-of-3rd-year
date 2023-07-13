#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int count = 0;
        int n = mat.size();
        for(int i=0;i<n;i++)
        {
            count += mat[i][i];
            count += mat[i][n-i-1];
        }
        if(mat.size()%2)
        return count-mat[n/2][n/2];

        return count;
    }
};


int main(){
    Solution s;
    vector<vector<int>>mat={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    cout<<s.diagonalSum(mat)<<endl;
    return 0;

}