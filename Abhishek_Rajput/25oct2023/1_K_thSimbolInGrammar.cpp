#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k) {
        bool same = true;
        n=pow(2,n-1);
        while(n != 1){
            n=n/2;
            if(k>n){
                k=k-n;
                same = !same;
            }
        }
        return ((same) ? 0:1);
    }
};
int main(){
    Solution ob;
    int n,k;
    cin>>n>>k;
    cout<<ob.kthGrammar(n,k)<<endl;
    return 0;
}
//  https://leetcode.com/problems/k-th-symbol-in-grammar/description/