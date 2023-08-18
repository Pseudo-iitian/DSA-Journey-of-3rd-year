#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool palindrome(string &words){
        int l=0;
        int r=words.size()-1;
        while(l<=r){
            if(words[l] != words[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0;i<words.size();i++){
            if(palindrome(words[i]))
                return words[i];
        }
        return "";
    }
};

int main(){
    Solution ob;
    vector<string>words={"abc","car","ada","racecar","cool"};
    string ans=ob.firstPalindrome(words);
    cout<<ans<<endl;

    return 0;
}