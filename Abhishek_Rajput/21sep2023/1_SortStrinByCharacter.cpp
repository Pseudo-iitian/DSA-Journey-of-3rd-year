#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        priority_queue<pair<int,char>>pq;
        for(auto p:mp)
            pq.push({p.second,p.first});
        int j=0;
        pair<int,char>curr;
        while(!pq.empty()){
            curr = pq.top();
            pq.pop();
            int n=curr.first;
            while(n--){
                s[j++]=curr.second;
            }
        }
        return s;
    }
};
int main(){
    Solution ob;
    string s="tree";
    string ans=ob.frequencySort(s);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i];
    cout<<endl;
    return 0;
}
//  https://leetcode.com/problems/sort-characters-by-frequency/