#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1)
            return 1;
        else
            return (n-1);
    }
};

int main(){
    Solution s1;
    int n;
    cin>>n;
    cout<<s1.distinctIntegers(n);
    return 0;
}

Link to the problem : 
https://leetcode.com/problems/count-distinct-numbers-on-board/submissions/992055282/
