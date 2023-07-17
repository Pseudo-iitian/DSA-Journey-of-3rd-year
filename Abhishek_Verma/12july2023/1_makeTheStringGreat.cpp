// Leetcode - https://leetcode.com/problems/make-the-string-great/submissions/992506963/
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
    string makeGood(string s) {
        stack<char> st;
        string ans;
        if(s.size()==1){
            return s;
        }
        st.push(s[0]);
        for(int i=1;i<s.size();++i){
            if(!st.empty()){
                int diff = abs(s[i]-st.top());
                if(diff==32){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.makeGood("LeEeetcode");
    return 0;
}