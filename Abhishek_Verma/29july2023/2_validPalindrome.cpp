#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int n= s.size();
    string res;
    for(int i=0;i<n;++i){
    	if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
    		res.push_back(s[i]);
    	}
    }
    int flag = 1;
    int n1 = res.size();
    for(int i=0;i<n1;++i){
    	if(res[i]!=res[n1-i-1]){
    		flag=0;
    		break;
    	}
    }
    if(flag) return true;
    return false;
    }
};

int main(){
    Solution s;
    cout<<s.isPalindrome("0P");
    return 0;
}