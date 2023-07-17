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
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp1,mp2;
        for(auto &val: arr){
            mp1[val]++;
        }
        for(auto &val: mp1){
            mp2[val.second]++;
            if(mp2[val.second]>1) return false;
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,1,2,1,3,3};
    cout<<s.uniqueOccurrences(arr);
    return 0;
}