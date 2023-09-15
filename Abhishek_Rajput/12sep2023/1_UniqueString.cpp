#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletions(string s) {
        // Create a vector to store the frequency of each lowercase English letter (fixed size of 26).
        vector<int>fre(26,0);
        for(auto ch:s){
            fre[ch-'a']++;// Increment the corresponding frequency counter.
        }
        //  frequency vector in non-decreasing order
        sort(fre.begin(),fre.end());
        int count=0;
        // sorted frequency vector in reverse order
        for(int i=24;i>=0;i--){
            if(fre[i] == 0)
                break;
            if(fre[i] >= fre[i+1]){
                int pre = fre[i];
                // Reduce the current frequency to make it one less than the next frequency
                fre[i] = max(0,fre[i+1]-1);
                count += pre - fre[i];
            }
        }
    return count;

    }
};
int main(){
    Solution ob;
    string s = "aaabbbcc";
    cout<<ob.minDeletions(s)<<endl;
    return 0;
}
//  https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/description/?envType=daily-question&envId=2023-09-12