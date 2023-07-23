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
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(int i=0;i<words.size();++i){
            string res = "";
            for(int j=0;j<words[i].size();++j){
                if(words[i][j]!=separator){
                    res+=words[i][j];
                }
                else{
                    ans.push_back(res);
                    res.erase();
                }
                if(j==words[i].size()-1)
                    ans.push_back(res);
            }
        }
        vector<string> fun;
        for(auto &val: ans){
            if(val!="") fun.push_back(val);
        }
        return fun;
    }
};

int main(){
    Solution s;
    vector<string> words = {"one.two.three","four.five","six"};
    char separator = '.';
    vector<string> res = s.splitWordsBySeparator(words,separator);
    for(auto &val: res){
        cout<<val<<" ";
    }
    return 0;
}