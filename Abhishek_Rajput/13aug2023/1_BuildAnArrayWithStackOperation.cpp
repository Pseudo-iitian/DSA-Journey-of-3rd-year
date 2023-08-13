#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int k=1;
        for(int i=0;i<target.size();i++){
            while(k!=target[i]){
                ans.push_back("Push");
                ans.push_back("Pop");
                k++;
            }
            ans.push_back("Push");
            k++;
        }
        return ans;
    }
};
int main(){
    Solution ob;
    vector<int>target={1,3};
    int n=3;
    vector<string>ans=ob.buildArray(target,n);
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}

//  https://leetcode.com/problems/build-an-array-with-stack-operations/description/
