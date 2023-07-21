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
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                string first = words[i];
                string second = words[j];
                reverse(second.begin(),second.end());
                if(first==second) count++;
            }
        }
        return count;
    }
};

int main(){
    Solution s;
    vector<string> v = {"cd","ac","dc","ca","zz"};
    cout<<s.maximumNumberOfStringPairs(v);    
    return 0;
}