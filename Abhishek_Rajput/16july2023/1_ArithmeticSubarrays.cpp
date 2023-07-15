#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isArith(vector<int>& nums,int &l,int &r){
        if(r-l+1<2)
            return false;
        vector<int>temp(nums.begin()+l,nums.begin()+r+1);
        sort(temp.begin(),temp.end());
        int d=temp[1]-temp[0];
        for(int i=0;i<temp.size()-1;i++){
            if(temp[i+1]-temp[i]!=d)
                return false;
        }
        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>arr;
        int j=0;
        for(int i=0;i<l.size();i++){
            int a=r[i];
            bool r=isArith(nums,l[i],a);
            arr.push_back(r);
        }
        return arr;
        
    }
};

int main(){
    Solution s;
    vector<int>nums = {4,6,5,9,3,7};
    vector<int>l = {0,0,2};
    vector<int>r = {2,3,5};
    vector<bool>ans=s.checkArithmeticSubarrays(nums,l,r);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;

    return 0;
}

// https://leetcode.com/problems/arithmetic-subarrays/description/