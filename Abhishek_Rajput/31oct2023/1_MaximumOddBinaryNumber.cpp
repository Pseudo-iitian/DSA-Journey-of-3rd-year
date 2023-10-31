#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        string str;
        for(int i=1;i<count;i++){
            str=str + '1';
        }
        for(int i=1;i<=n-count;i++){
            str=str + '0';
        }
        str = str + '1';
        return str;
    }
};
int main(){
    Solution ob;
    string s = "0101";
    cout<<ob.maximumOddBinaryNumber(s)<<endl;
    return 0;
}
//  https://leetcode.com/problems/maximum-odd-binary-number/description/
