class Solution {
public:
    int longestValidSubstring(string word, vector<string>& forbidden) {
        int n=word.size();
        int jst=n;
        int lst=n;
        int ans=0;
        unordered_map<string,int>mp;
        for(auto it:forbidden) // store in map
        {
            mp[it]++;
        }
        for(int i=word.size()-1;i>=0;i--)
        {
            string curr_word="";
            for(int j=i;j<lst && j<(i+11);j++)
            {
                curr_word+=word[j];
                if(mp.find(curr_word)!=mp.end())
                {
                    lst=j;
                    break;
                }
               
            }
             ans=max(ans,lst-i);
        }
        
        return ans;
    }
    
};
