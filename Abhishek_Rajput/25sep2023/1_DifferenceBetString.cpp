#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<t.size();i++){
            if(s[i] != t[i]){
                ans =t[i];
                break;
            }
        }
        return ans;
    }
};
int main(){
    Solution ob;
    string s = "abcd";
    string t = "abcde";
    cout<<ob.findTheDifference(s,t)<<endl;
    return 0;
}
//  https://leetcode.com/problems/find-the-difference/description/