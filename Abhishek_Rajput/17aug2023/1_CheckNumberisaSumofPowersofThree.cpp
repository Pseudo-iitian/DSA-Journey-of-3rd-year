# include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n){
            if(n%3==2)
                return false;
            n=n/3;
        }
        return true;
    }
};

int main(){
    Solution ob;
    int n;
    cin>>n;
    cout<<ob.checkPowersOfThree(n)<<endl;

    return 0;
}
//      https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/description/