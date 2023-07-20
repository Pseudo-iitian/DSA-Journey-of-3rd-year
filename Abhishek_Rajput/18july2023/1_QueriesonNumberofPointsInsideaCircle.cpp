# include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int count=0;
            for(int j=0;j<points.size();j++){
                int x=pow((points[j][0]-queries[i][0]),2);
                int y=pow((points[j][1]-queries[i][1]),2);
                int d=x + y;
                int r=pow(queries[i][2],2);
                if(d<=r)
                    count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>>points={{1,1},{2,2},{3,3},{4,4},{5,5}};
    vector<vector<int>>queries={{1,2,2},{2,2,2},{4,3,2},{4,3,3}};
    vector<int>ans=s.countPoints(points,queries);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}


//   https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/