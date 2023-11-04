#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int time =0 ;
        for(int i=0;i<left.size();i++){
            time = max(time,left[i]);
        }
        int time2=0;
        for(int j=0;j<right.size();j++){
            time2= max(time2,n-right[j]);
        }
        return max(time,time2);
    }
};
int main(){
    Solution ob;
    vector<int>left = {4,3}, right = {0,1};
    int n=4;
    cout<<ob.getLastMoment(n,left,right)<<endl;
    return 0;
}
//  https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/description/