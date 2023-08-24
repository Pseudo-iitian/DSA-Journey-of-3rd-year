# include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]+nums[j] == target && i != j)
                    c++;
            }
        }
        return c;
    }
};

int main(){
    Solution ob;
    vector<string> nums={"123","4","12","34"};
    string target="1234";
    cout<<ob.numOfPairs(nums,target)<<endl;

    return 0;
}

//      https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/description/