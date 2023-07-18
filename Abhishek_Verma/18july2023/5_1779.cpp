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
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mn = INT_MAX;
        int index = -1;
        for(int i=0;i<points.size();++i){
            int x1 = points[i][0];
            int y1 = points[i][1];
            if(x==x1 || y==y1){
                int distance = abs(x-x1) + abs(y-y1);
                if(distance<mn){
                    mn = distance;
                    index = i;
                }
            }
        }
        return index;
    }
};

int main(){
    Solution s;
    vector<vector<int> > ans = {{1,2},{3,1},{2,4},{2,3},{4,4}};
    cout<<s.nearestValidPoint(3,4,ans);
    return 0;
}