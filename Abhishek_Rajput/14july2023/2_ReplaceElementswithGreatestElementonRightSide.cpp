#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxi=-1;
        for(int i=n-1;i>=0;i--){
            int test=arr[i];
            arr[i]=maxi;
            if(test>maxi)
                maxi=test;
        }
        return arr;
    }
};
int main(){
    Solution s;
    vector<int>arr={17,18,5,4,6,1};
    vector<int>ans=s.replaceElements(arr);
    for(int i=0;i<6;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;

}

// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/