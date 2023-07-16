class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        int c1=0;
        int c2=0;
        int dominant=-1;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto &it:mp)
        {
            if(it.second*2>n)
            {
                dominant=it.first;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==dominant)
            {
                c1++;
                c2=mp[dominant]-c1;
                if(c1*2>i+1 && c2*2>n-i-1)
                {
                  ans=i;
                  break;
                }

            }
        }
        return ans;
    }
};
