#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            nums[queries[i][1]] = nums[queries[i][1]]+queries[i][0];
            int sum=0;
            for(auto &j : nums){
                if(j%2==0)
                    sum=sum+j;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};

int main(){
    Solution ob;
    vector<int>nums={1,2,3,4};
    vector<vector<int>>queries={{1,0},{-3,1},{-4,0},{2,3}};
    vector<int>ans=ob.sumEvenAfterQueries(nums,queries);
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}

//     