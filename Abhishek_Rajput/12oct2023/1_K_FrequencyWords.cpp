#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
static bool compare(pair<int, string>& a, pair<int, string>& b){
    if(a.first == b.first)
        return a.second < b.second;
    else
        return a.first > b.first;
}

vector<string> topKFrequent(vector<string>& words, int k) {
    int n = words.size();

    unordered_map<string, int> mp;
    
    for(auto x: words){
        mp[x]++;
    }
    vector<pair<int, string>> v;
    
    for(auto x: mp){
        v.push_back({x.second, x.first});
    }
    sort(v.begin(), v.end(), compare);
    vector<string> ans;
    for(int i=0;i<v.size();i++)
    {
        if(k)
        {
            ans.push_back(v[i].second);
            k--;
        }
    }   
    return ans;
}
};
int main(){
    Solution ob;
    vector<string>words={"i","love","leetcode","i","love","coding"};
    int k=2;
    vector<string> ans=ob.topKFrequent(words,k);
    for(auto s:ans)
        cout<<s<<" ";
    cout<<endl;
    return 0;
}
//  https://leetcode.com/problems/top-k-frequent-words/description/