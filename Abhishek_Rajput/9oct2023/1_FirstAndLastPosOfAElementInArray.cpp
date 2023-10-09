#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1,last=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(first==-1)
                    first=i;
                last=i;
            }
        }
        return {first,last};
    }
};
int main(){
    Solution ob;
    vector<int>nums={5,7,7,8,8,10};
    int target=8;
    vector<int>ans=ob.searchRange(nums,target);
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
//  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/?envType=daily-question&envId=2023-10-09