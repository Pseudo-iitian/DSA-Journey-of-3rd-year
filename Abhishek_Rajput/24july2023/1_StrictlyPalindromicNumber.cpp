#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(int n,int base){
        vector<int>nums;
        while(n>0){
            nums.push_back(n%base) ;
            n=n/base;
        }
        int i=0,l=nums.size()-1;
        while(i<=l){
            if(nums[i]!=nums[l])
                return false;
            l--;
            i++;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            if(check(n,i)==false)
                return false;
        }
        return true;
    }
};


int main(){
    Solution s;
    int n=9;
    cout<<s.isStrictlyPalindromic(n)<<endl;
    return 0;
}

//      https://leetcode.com/problems/strictly-palindromic-number/description/