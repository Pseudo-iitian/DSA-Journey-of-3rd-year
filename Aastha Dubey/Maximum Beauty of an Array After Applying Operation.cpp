class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int s=nums[0]-k;
        int e=nums[0]+k;
        int cnt=1;
        int ans=1;
        int ind=0;
        int i=1;
        while(i<nums.size())
        {
            int s2=nums[i]-k;
            int e2=nums[i]+k;
            //overlapping interval
            if(s2<=e) // overlapping exist
            {
                s=max(s,s2);
                e=min(e,e2);
                cnt++;
                ans=max(ans,cnt);
                i++;
            }
            else
            {
                ind++;
                e=nums[ind]+k;
                cnt--;
            }
              
        }
        return ans;
    }
    
};
