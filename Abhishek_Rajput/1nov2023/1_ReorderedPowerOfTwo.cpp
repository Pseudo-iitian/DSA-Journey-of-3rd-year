#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string x= to_string(n);
        sort(x.begin(),x.end());
        for(int i=0;i<32;i++){
            string temp = to_string(1<<i);
            sort(temp.begin(),temp.end());
            if(x==temp)
                return true;
        }
        return false;
    }
};
int main(){
    Solution ob;
    int n;
    cin>>n;
    cout<<ob.reorderedPowerOf2(n)<<endl;
    return 0;
}
//  https://leetcode.com/problems/reordered-power-of-2/description/