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

// https://leetcode.com/problems/crawler-log-folder/description/
class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(int i=0;i<logs.size();++i){
            string s = logs[i];
            if(s=="../"){
                if(!st.empty()) st.pop();
            }
            else if(s=="./"){
                continue;
            }
            else{
                st.push(s);
            }
        }
        if(st.empty()) return 0;
        else return st.size();
    }
};

int main(){
    Solution s;
    vector<string> v = {"d1/","d2/","../","d21/","./"};
    cout<<s.minOperations(v);
    return 0;
}