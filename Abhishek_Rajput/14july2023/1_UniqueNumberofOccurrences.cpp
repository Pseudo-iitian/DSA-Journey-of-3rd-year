
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp1;
        for(auto j:arr){
            mp1[j]++;
        }
        int n=mp1.size();
        map<int,int>mp2;
        for(auto i:mp1){
            mp2[i.second]++;
        }
        if(n==mp2.size())
            return true;
        return false;
    }
};
int main(){
    Solution s;
    vector<int>arr={1,2,2,1,1,3};
    cout<<s.uniqueOccurrences(arr)<<endl;
    vector<int>a={-3,0,1,-3,1,1,1,-3,10,0};
    cout<<s.uniqueOccurrences(a)<<endl;
    return 0;
}
// https://leetcode.com/problems/unique-number-of-occurrences/description/
