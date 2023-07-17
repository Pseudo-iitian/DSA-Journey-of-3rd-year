#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        
        
        int cnt=0; 
        
        
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            
            string k = to_string(nums[i]);
        
	        int temp = k[0]-'0';
            for(int j=i+1;j<n;j++){
                
                if(__gcd(temp,(nums[j]%10))==1){
                    cnt++;
                }  
            }
        }
        
        return cnt;
        
        
    }
};

int main(){
    Solution s;
    vector<int> ans = {1,2,3};
    cout<<s.countBeautifulPairs(ans);
    return 0;
}