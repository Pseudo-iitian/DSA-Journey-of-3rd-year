#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++){
            maxi=max(maxi,candies[i]);
        }
        vector<bool>ans;
        for(int i=0;i<candies.size();i++){
            ans.push_back(candies[i]+extraCandies>=maxi);
                
        }
        return ans;
    }
};
int main(){
    Solution ob;
    vector<int> candies={2,3,5,1,3};
    int extraCandies = 3;
    vector<bool>ans=ob.kidsWithCandies(candies,extraCandies);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
    return 0;
}
//  leetcode.com/problems/kids-with-the-greatest-number-of-candies/