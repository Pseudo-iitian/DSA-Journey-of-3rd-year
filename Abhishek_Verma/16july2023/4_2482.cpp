#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<int> onesRow(row),zerosRow(row),onesCol(col),zerosCol(col);
        // oneRow, zerosRow
        for(int i=0;i<row;++i){
            int one = 0,zero=0;
            for(int j=0;j<col;++j){
                if(grid[i][j]==1) one++;
                else zero++;
            }
            onesRow[i]=one;
            zerosRow[i]=zero;
        }
        // onesCol, zerosCol;
        for(int i=0;i<col;++i){
            int one = 0,zero =0;
            for(int j=0;j<row;++j){
                if(grid[j][i]==1) one++;
                else zero++;
            }
            onesCol[i]=one;
            zerosCol[i]=zero;
        }
        vector<vector<int> > diff(row,vector<int> (col));
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                diff[i][j]=onesRow[i]-zerosRow[i]+onesCol[j]-zerosCol[j];
            }
        }
        return diff;
    }
};

int main(){
    Solution s;
    vector<vector<int> > v = {{0,1,1},{1,0,1},{0,0,1}};
    vector<vector<int> > ans = s.onesMinusZeros(v);
    for(int i=0;i<ans.size();++i){
        for(int j=0;j<ans[0].size();++j){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}