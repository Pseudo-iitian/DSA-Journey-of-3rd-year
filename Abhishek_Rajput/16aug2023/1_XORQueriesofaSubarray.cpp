#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=1;i<arr.size();i++){
            arr[i]=arr[i]^arr[i-1];
        }
        for(int i=0;i<queries.size();i++){
            if(queries[i][0]==0)
                ans.push_back(arr[queries[i][1]]);
            else
                ans.push_back(arr[queries[i][0]-1] ^ arr[queries[i][1]]);
        }
        return ans;
    }
};

int main(){
    Solution ob;
    vector<vector<int>>queries={{0,1},{1,2},{0,3},{3,3}};
    vector<int>arr={1,3,4,8};
    vector<int>ans=ob.xorQueries(arr,queries);
    for(auto i: ans)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}

//  https://leetcode.com/problems/xor-queries-of-a-subarray/description/