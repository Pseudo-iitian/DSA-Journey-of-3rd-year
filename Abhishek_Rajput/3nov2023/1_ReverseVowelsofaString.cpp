#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        int start=0;
        int end=s.size()-1;
        string vowels = "aeiouAEIOU";
        while(start<end){

            while(start<end && vowels.find(s[start])==-1)
                start++;
            while(start<end && vowels.find(s[end])==-1)
                end--;
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};
int main(){
    Solution ob;
    string s="hello";
    string ans=ob.reverseVowels(s);
    for(auto ch : ans)
        cout<<ch;
    cout<<endl;

    return 0;
}
//  https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75