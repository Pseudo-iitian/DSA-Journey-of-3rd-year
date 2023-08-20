#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b){
        return a.first>b.first;
    }
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it :mp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),comp);
        int sum=0,ans=0;
        for(int i=0;i<v.size();i++){
            sum=sum+v[i].first;
            ans++;
            if(sum>=arr.size()/2)
                break;
        }
        return ans;
    }
};

int main(){
    Solution ob;
    vector<int>arr={3,3,3,3,5,5,5,2,2,7};
    cout<<ob.minSetSize(arr)<<endl;

    return 0;
}

//  https://leetcode.com/problems/reduce-array-size-to-the-half/description/