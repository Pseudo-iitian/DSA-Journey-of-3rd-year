# include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        for(int i=0;i<n;i++){
            int p=nums[i];
            int rev=0;
            while(p>0){
                rev=rev*10 + (p%10);
                p=p/10;
            }
            mp[rev]++;
        }
        return (mp.size());
    }
};
int main(){
    Solution s;
    vector<int>nums={1,13,10,12,31};
    cout<<s.countDistinctIntegers(nums)<<endl;
    return 0;
}





///  https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/description/