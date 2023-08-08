#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        map<char,int>m;
        for(auto i:s)
            m[i]++;
        for(auto i:t)
            m[i]--;
        for(auto c:m){
            ans=ans+abs(c.second);
        }
        return ans/2;

    }
};

int main(){
    Solution ob;
    string s = "leetcode", t = "practice";
    cout<<ob.minSteps(s,t)<<endl;

    return 0;
}

//  https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/description/