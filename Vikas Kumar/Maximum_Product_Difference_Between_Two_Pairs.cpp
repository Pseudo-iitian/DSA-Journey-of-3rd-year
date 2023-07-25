#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int maximum;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int first=nums[n-1]*nums[n-2];
        int second=nums[0]*nums[1];
        return first-second;
    }
};
int main(){
  Solution s;
  vector<int> nums{5,6,2,7,4};
  cout<<s.maxProductDifference(nums);

return 0;
}